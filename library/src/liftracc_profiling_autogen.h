
/***
 * This file is generated automatically, do not edit manually!
 */

#ifndef __LIFTRACC_PROFILING_AUTOGEN_H__
#define __LIFTRACC_PROFILING_AUTOGEN_H__

#if _LIFTRACC_PROFILING_ > 0

typedef enum {
    LIFTRACC_INIT,
    LIFTRACC_FINI,
    LIFTRACC_FUNCTION_SDSDOT,
    LIFTRACC_FUNCTION_DSDOT,
    LIFTRACC_FUNCTION_SDOT,
    LIFTRACC_FUNCTION_DDOT,
    LIFTRACC_FUNCTION_CDOTU_SUB,
    LIFTRACC_FUNCTION_CDOTC_SUB,
    LIFTRACC_FUNCTION_ZDOTU_SUB,
    LIFTRACC_FUNCTION_ZDOTC_SUB,
    LIFTRACC_FUNCTION_SNRM2,
    LIFTRACC_FUNCTION_SASUM,
    LIFTRACC_FUNCTION_DNRM2,
    LIFTRACC_FUNCTION_DASUM,
    LIFTRACC_FUNCTION_SCNRM2,
    LIFTRACC_FUNCTION_SCASUM,
    LIFTRACC_FUNCTION_DZNRM2,
    LIFTRACC_FUNCTION_DZASUM,
    LIFTRACC_FUNCTION_ISAMAX,
    LIFTRACC_FUNCTION_IDAMAX,
    LIFTRACC_FUNCTION_ICAMAX,
    LIFTRACC_FUNCTION_IZAMAX,
    LIFTRACC_FUNCTION_SSWAP,
    LIFTRACC_FUNCTION_SCOPY,
    LIFTRACC_FUNCTION_SAXPY,
    LIFTRACC_FUNCTION_DSWAP,
    LIFTRACC_FUNCTION_DCOPY,
    LIFTRACC_FUNCTION_DAXPY,
    LIFTRACC_FUNCTION_CSWAP,
    LIFTRACC_FUNCTION_CCOPY,
    LIFTRACC_FUNCTION_CAXPY,
    LIFTRACC_FUNCTION_ZSWAP,
    LIFTRACC_FUNCTION_ZCOPY,
    LIFTRACC_FUNCTION_ZAXPY,
    LIFTRACC_FUNCTION_SROTG,
    LIFTRACC_FUNCTION_SROTMG,
    LIFTRACC_FUNCTION_SROT,
    LIFTRACC_FUNCTION_SROTM,
    LIFTRACC_FUNCTION_DROTG,
    LIFTRACC_FUNCTION_DROTMG,
    LIFTRACC_FUNCTION_DROT,
    LIFTRACC_FUNCTION_DROTM,
    LIFTRACC_FUNCTION_SSCAL,
    LIFTRACC_FUNCTION_DSCAL,
    LIFTRACC_FUNCTION_CSCAL,
    LIFTRACC_FUNCTION_ZSCAL,
    LIFTRACC_FUNCTION_CSSCAL,
    LIFTRACC_FUNCTION_ZDSCAL,
    LIFTRACC_FUNCTION_SGEMV,
    LIFTRACC_FUNCTION_SGBMV,
    LIFTRACC_FUNCTION_STRMV,
    LIFTRACC_FUNCTION_STBMV,
    LIFTRACC_FUNCTION_STPMV,
    LIFTRACC_FUNCTION_STRSV,
    LIFTRACC_FUNCTION_STBSV,
    LIFTRACC_FUNCTION_STPSV,
    LIFTRACC_FUNCTION_DGEMV,
    LIFTRACC_FUNCTION_DGBMV,
    LIFTRACC_FUNCTION_DTRMV,
    LIFTRACC_FUNCTION_DTBMV,
    LIFTRACC_FUNCTION_DTPMV,
    LIFTRACC_FUNCTION_DTRSV,
    LIFTRACC_FUNCTION_DTBSV,
    LIFTRACC_FUNCTION_DTPSV,
    LIFTRACC_FUNCTION_CGEMV,
    LIFTRACC_FUNCTION_CGBMV,
    LIFTRACC_FUNCTION_CTRMV,
    LIFTRACC_FUNCTION_CTBMV,
    LIFTRACC_FUNCTION_CTPMV,
    LIFTRACC_FUNCTION_CTRSV,
    LIFTRACC_FUNCTION_CTBSV,
    LIFTRACC_FUNCTION_CTPSV,
    LIFTRACC_FUNCTION_ZGEMV,
    LIFTRACC_FUNCTION_ZGBMV,
    LIFTRACC_FUNCTION_ZTRMV,
    LIFTRACC_FUNCTION_ZTBMV,
    LIFTRACC_FUNCTION_ZTPMV,
    LIFTRACC_FUNCTION_ZTRSV,
    LIFTRACC_FUNCTION_ZTBSV,
    LIFTRACC_FUNCTION_ZTPSV,
    LIFTRACC_FUNCTION_SSYMV,
    LIFTRACC_FUNCTION_SSBMV,
    LIFTRACC_FUNCTION_SSPMV,
    LIFTRACC_FUNCTION_SGER,
    LIFTRACC_FUNCTION_SSYR,
    LIFTRACC_FUNCTION_SSPR,
    LIFTRACC_FUNCTION_SSYR2,
    LIFTRACC_FUNCTION_SSPR2,
    LIFTRACC_FUNCTION_DSYMV,
    LIFTRACC_FUNCTION_DSBMV,
    LIFTRACC_FUNCTION_DSPMV,
    LIFTRACC_FUNCTION_DGER,
    LIFTRACC_FUNCTION_DSYR,
    LIFTRACC_FUNCTION_DSPR,
    LIFTRACC_FUNCTION_DSYR2,
    LIFTRACC_FUNCTION_DSPR2,
    LIFTRACC_FUNCTION_CHEMV,
    LIFTRACC_FUNCTION_CHBMV,
    LIFTRACC_FUNCTION_CHPMV,
    LIFTRACC_FUNCTION_CGERU,
    LIFTRACC_FUNCTION_CGERC,
    LIFTRACC_FUNCTION_CHER,
    LIFTRACC_FUNCTION_CHPR,
    LIFTRACC_FUNCTION_CHER2,
    LIFTRACC_FUNCTION_CHPR2,
    LIFTRACC_FUNCTION_ZHEMV,
    LIFTRACC_FUNCTION_ZHBMV,
    LIFTRACC_FUNCTION_ZHPMV,
    LIFTRACC_FUNCTION_ZGERU,
    LIFTRACC_FUNCTION_ZGERC,
    LIFTRACC_FUNCTION_ZHER,
    LIFTRACC_FUNCTION_ZHPR,
    LIFTRACC_FUNCTION_ZHER2,
    LIFTRACC_FUNCTION_ZHPR2,
    LIFTRACC_FUNCTION_SGEMM,
    LIFTRACC_FUNCTION_SSYMM,
    LIFTRACC_FUNCTION_SSYRK,
    LIFTRACC_FUNCTION_SSYR2K,
    LIFTRACC_FUNCTION_STRMM,
    LIFTRACC_FUNCTION_STRSM,
    LIFTRACC_FUNCTION_DGEMM,
    LIFTRACC_FUNCTION_DSYMM,
    LIFTRACC_FUNCTION_DSYRK,
    LIFTRACC_FUNCTION_DSYR2K,
    LIFTRACC_FUNCTION_DTRMM,
    LIFTRACC_FUNCTION_DTRSM,
    LIFTRACC_FUNCTION_CGEMM,
    LIFTRACC_FUNCTION_CSYMM,
    LIFTRACC_FUNCTION_CSYRK,
    LIFTRACC_FUNCTION_CSYR2K,
    LIFTRACC_FUNCTION_CTRMM,
    LIFTRACC_FUNCTION_CTRSM,
    LIFTRACC_FUNCTION_ZGEMM,
    LIFTRACC_FUNCTION_ZSYMM,
    LIFTRACC_FUNCTION_ZSYRK,
    LIFTRACC_FUNCTION_ZSYR2K,
    LIFTRACC_FUNCTION_ZTRMM,
    LIFTRACC_FUNCTION_ZTRSM,
    LIFTRACC_FUNCTION_CHEMM,
    LIFTRACC_FUNCTION_CHERK,
    LIFTRACC_FUNCTION_CHER2K,
    LIFTRACC_FUNCTION_ZHEMM,
    LIFTRACC_FUNCTION_ZHERK,
    LIFTRACC_FUNCTION_ZHER2K,
    LIFTRACC_FUNCTION_XERBLA,
    LIFTRACC_FUNCTIONS_COUNT
} liftracc_functions_t;

#endif // _LIFTRACC_PROFILING_

#endif // __LIFTRACC_PROFILING_AUTOGEN_H__
