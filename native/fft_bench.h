#include <stdbool.h>
#include "mkl.h"

#ifndef _FFT_BENCH_H
#define _FFT_BENCH_H
/*
 * Get the total number of elements in an array with the given shape.
 */
MKL_LONG shape_prod(size_t ndims, const MKL_LONG *shape);

/*
 * Get the strides for an array with the given shape, assuming C-contiguity.
 */
MKL_LONG *shape_strides(size_t ndims, const MKL_LONG *shape);

/*
 * Print the first n elements of the MKL_Complex16 array x.
 */
void zprint(MKL_LONG n, MKL_Complex16 *x);

/*
 * Print the first n elements of the double array x.
 */
void dprint(MKL_LONG n, double *x);

/*
 * Generate an array of n MKL_Complex16 elements whose real and imaginary parts
 * have a standard normal distribution generated by the given brng and seed.
 */
MKL_Complex16 *zrandn(MKL_LONG n, MKL_INT brng, MKL_UINT seed);

/*
 * Generate an array of n double elements which have a standard normal
 * distribution generated by the given brng and seed.
 */
double *drandn(MKL_LONG n, MKL_INT brng, MKL_UINT seed);

#endif /* _FFT_BENCH_H */
