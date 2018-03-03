#ifndef _fft_h_
#define _fft_h_


#ifdef __cplusplus
extern "C" {
#endif


#include "complex.h"


void fft_f(complex_f data[], int N);

void fft_copy_shuffle_f(complex_f src[], complex_d dst[], int N);
void fft_shuffle_f(complex_f data[], int N);
void fft_evaluate_f(complex_f data[], int N);


#ifdef __cplusplus
}
#endif


#endif
