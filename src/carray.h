#ifndef CARRAY_H
#define CARRAY_H
#include "complex_num.h"

#define carray_get(arr, i, j) ((arr)->data[(arr)->cols * (i) + (j)])

/* Major-row-order dynamically allocated array of complex numbers */
typedef struct {
    COMPLEX *data;
    unsigned int rows;
    unsigned int row_cap;
    unsigned int cols;
    unsigned int col_cap;
} CArray;

CArray* carray_alloc(unsigned int rows, unsigned int cols);
void carray_free(CArray *arr);
void carray_set_size(CArray *arr, unsigned int rows, unsigned int cols);
void carray_fill(CArray *arr, double real, double imag);

#endif
