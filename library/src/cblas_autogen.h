
/**
 * @file cblas_autogen.h
 * @brief [generated file]
 *
 * This file is generated automatically, do not edit manually!
 */

#ifndef __CBLAS_AUTOGEN_H__
#define __CBLAS_AUTOGEN_H__

/**
 * @brief CBLAS function id's
 *
 * This enumeration provides an id for every known cblas function. Additionally
 * an entry to get the function count easily.
 */
typedef enum {
    CBLAS_FUNCTION_SDSDOT,
    CBLAS_FUNCTION_DSDOT,
    CBLAS_FUNCTION_SDOT,
    CBLAS_FUNCTION_DDOT,
    CBLAS_FUNCTION_CDOTU_SUB,
    CBLAS_FUNCTION_CDOTC_SUB,
    CBLAS_FUNCTION_ZDOTU_SUB,
    CBLAS_FUNCTION_ZDOTC_SUB,
    CBLAS_FUNCTION_SNRM2,
    CBLAS_FUNCTION_SASUM,
    CBLAS_FUNCTION_DNRM2,
    CBLAS_FUNCTION_DASUM,
    CBLAS_FUNCTION_SCNRM2,
    CBLAS_FUNCTION_SCASUM,
    CBLAS_FUNCTION_DZNRM2,
    CBLAS_FUNCTION_DZASUM,
    CBLAS_FUNCTION_ISAMAX,
    CBLAS_FUNCTION_IDAMAX,
    CBLAS_FUNCTION_ICAMAX,
    CBLAS_FUNCTION_IZAMAX,
    CBLAS_FUNCTION_SSWAP,
    CBLAS_FUNCTION_SCOPY,
    CBLAS_FUNCTION_SAXPY,
    CBLAS_FUNCTION_DSWAP,
    CBLAS_FUNCTION_DCOPY,
    CBLAS_FUNCTION_DAXPY,
    CBLAS_FUNCTION_CSWAP,
    CBLAS_FUNCTION_CCOPY,
    CBLAS_FUNCTION_CAXPY,
    CBLAS_FUNCTION_ZSWAP,
    CBLAS_FUNCTION_ZCOPY,
    CBLAS_FUNCTION_ZAXPY,
    CBLAS_FUNCTION_SROTG,
    CBLAS_FUNCTION_SROTMG,
    CBLAS_FUNCTION_SROT,
    CBLAS_FUNCTION_SROTM,
    CBLAS_FUNCTION_DROTG,
    CBLAS_FUNCTION_DROTMG,
    CBLAS_FUNCTION_DROT,
    CBLAS_FUNCTION_DROTM,
    CBLAS_FUNCTION_SSCAL,
    CBLAS_FUNCTION_DSCAL,
    CBLAS_FUNCTION_CSCAL,
    CBLAS_FUNCTION_ZSCAL,
    CBLAS_FUNCTION_CSSCAL,
    CBLAS_FUNCTION_ZDSCAL,
    CBLAS_FUNCTION_SGEMV,
    CBLAS_FUNCTION_SGBMV,
    CBLAS_FUNCTION_STRMV,
    CBLAS_FUNCTION_STBMV,
    CBLAS_FUNCTION_STPMV,
    CBLAS_FUNCTION_STRSV,
    CBLAS_FUNCTION_STBSV,
    CBLAS_FUNCTION_STPSV,
    CBLAS_FUNCTION_DGEMV,
    CBLAS_FUNCTION_DGBMV,
    CBLAS_FUNCTION_DTRMV,
    CBLAS_FUNCTION_DTBMV,
    CBLAS_FUNCTION_DTPMV,
    CBLAS_FUNCTION_DTRSV,
    CBLAS_FUNCTION_DTBSV,
    CBLAS_FUNCTION_DTPSV,
    CBLAS_FUNCTION_CGEMV,
    CBLAS_FUNCTION_CGBMV,
    CBLAS_FUNCTION_CTRMV,
    CBLAS_FUNCTION_CTBMV,
    CBLAS_FUNCTION_CTPMV,
    CBLAS_FUNCTION_CTRSV,
    CBLAS_FUNCTION_CTBSV,
    CBLAS_FUNCTION_CTPSV,
    CBLAS_FUNCTION_ZGEMV,
    CBLAS_FUNCTION_ZGBMV,
    CBLAS_FUNCTION_ZTRMV,
    CBLAS_FUNCTION_ZTBMV,
    CBLAS_FUNCTION_ZTPMV,
    CBLAS_FUNCTION_ZTRSV,
    CBLAS_FUNCTION_ZTBSV,
    CBLAS_FUNCTION_ZTPSV,
    CBLAS_FUNCTION_SSYMV,
    CBLAS_FUNCTION_SSBMV,
    CBLAS_FUNCTION_SSPMV,
    CBLAS_FUNCTION_SGER,
    CBLAS_FUNCTION_SSYR,
    CBLAS_FUNCTION_SSPR,
    CBLAS_FUNCTION_SSYR2,
    CBLAS_FUNCTION_SSPR2,
    CBLAS_FUNCTION_DSYMV,
    CBLAS_FUNCTION_DSBMV,
    CBLAS_FUNCTION_DSPMV,
    CBLAS_FUNCTION_DGER,
    CBLAS_FUNCTION_DSYR,
    CBLAS_FUNCTION_DSPR,
    CBLAS_FUNCTION_DSYR2,
    CBLAS_FUNCTION_DSPR2,
    CBLAS_FUNCTION_CHEMV,
    CBLAS_FUNCTION_CHBMV,
    CBLAS_FUNCTION_CHPMV,
    CBLAS_FUNCTION_CGERU,
    CBLAS_FUNCTION_CGERC,
    CBLAS_FUNCTION_CHER,
    CBLAS_FUNCTION_CHPR,
    CBLAS_FUNCTION_CHER2,
    CBLAS_FUNCTION_CHPR2,
    CBLAS_FUNCTION_ZHEMV,
    CBLAS_FUNCTION_ZHBMV,
    CBLAS_FUNCTION_ZHPMV,
    CBLAS_FUNCTION_ZGERU,
    CBLAS_FUNCTION_ZGERC,
    CBLAS_FUNCTION_ZHER,
    CBLAS_FUNCTION_ZHPR,
    CBLAS_FUNCTION_ZHER2,
    CBLAS_FUNCTION_ZHPR2,
    CBLAS_FUNCTION_SGEMM,
    CBLAS_FUNCTION_SSYMM,
    CBLAS_FUNCTION_SSYRK,
    CBLAS_FUNCTION_SSYR2K,
    CBLAS_FUNCTION_STRMM,
    CBLAS_FUNCTION_STRSM,
    CBLAS_FUNCTION_DGEMM,
    CBLAS_FUNCTION_DSYMM,
    CBLAS_FUNCTION_DSYRK,
    CBLAS_FUNCTION_DSYR2K,
    CBLAS_FUNCTION_DTRMM,
    CBLAS_FUNCTION_DTRSM,
    CBLAS_FUNCTION_CGEMM,
    CBLAS_FUNCTION_CSYMM,
    CBLAS_FUNCTION_CSYRK,
    CBLAS_FUNCTION_CSYR2K,
    CBLAS_FUNCTION_CTRMM,
    CBLAS_FUNCTION_CTRSM,
    CBLAS_FUNCTION_ZGEMM,
    CBLAS_FUNCTION_ZSYMM,
    CBLAS_FUNCTION_ZSYRK,
    CBLAS_FUNCTION_ZSYR2K,
    CBLAS_FUNCTION_ZTRMM,
    CBLAS_FUNCTION_ZTRSM,
    CBLAS_FUNCTION_CHEMM,
    CBLAS_FUNCTION_CHERK,
    CBLAS_FUNCTION_CHER2K,
    CBLAS_FUNCTION_ZHEMM,
    CBLAS_FUNCTION_ZHERK,
    CBLAS_FUNCTION_ZHER2K,
    CBLAS_FUNCTION_XERBLA,
    CBLAS_FUNCTIONS_COUNT
} liftracc_cblas_functions_t;

extern const char *liftracc_cblas_function_names[];

#endif /* __CBLAS_AUTOGEN_H__ */

