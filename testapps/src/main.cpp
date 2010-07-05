
extern "C" {
#include "testlib.h"
}

#include <unistd.h>
#include <sys/times.h>

#include <iostream>
using namespace std;

#include <boost/program_options.hpp>
namespace po = boost::program_options;

int main(int argc, char* argv[]) {
    long count;
    po::options_description desc("Allowed options");
    desc.add_options()
        ("help,h", ": show this help message")
        ("count,c", po::value<long>(&count)->default_value(1), ": set loop count to arg")
        ("verbose,v", ": print some output (time statistics error!)")
    ;

    po::variables_map vm;        
    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);

    if (vm.count("help")) {
        cout << "Usage: " << argv[0] << " [options]" << endl;
        cout << desc << endl;
        
        return 1;
    }
    
    bool verbose = vm.count("verbose");
    long ticks_per_sec = sysconf(_SC_CLK_TCK);

    struct tms start_times;
    clock_t start_ticks;
    struct tms stop_times;
    clock_t stop_ticks;

    unsigned long long ret = 0;

    start_ticks = times(&start_times);

    for (int c=0;c<100;c++) {
        cout << c << endl;
        for (long i=0;i<count;i++) {
            if (verbose) cout << "Run #" << i << endl;
            ret=fib_rec(i);
        }
    }

    stop_ticks = times(&stop_times);

    cout << "fib_rec(" << count-1 << ") = " << ret << endl;

    cout << endl << endl;
    cerr << "Time statistics...:" << endl << endl;
    cerr << "  Start ticks.....: " << start_ticks << endl;
    cerr << "  Stop ticks......: " << stop_ticks << endl;
    cerr << "  Delta ticks.....: " << stop_ticks-start_ticks << endl << endl;
    long tmp = stop_times.tms_utime-start_times.tms_utime;
    cerr << "  utime...........: " << tmp << " (" << (tmp*1000)/double(ticks_per_sec) << "ms)" << endl;
    tmp = stop_times.tms_stime-start_times.tms_stime;
    cerr << "  stime...........: " << tmp << " (" << (tmp*1000)/double(ticks_per_sec) << "ms)" << endl;
    tmp = stop_times.tms_cutime-start_times.tms_cutime;
    cerr << "  cutime..........: " << tmp << " (" << (tmp*1000)/double(ticks_per_sec) << "ms)" << endl;
    tmp = stop_times.tms_cstime-start_times.tms_cstime;
    cerr << "  cstime..........: " << tmp << " (" << (tmp*1000)/double(ticks_per_sec) << "ms)" << endl;
    
    return 0;
}

