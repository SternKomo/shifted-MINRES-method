#include "definition.h"

void sminres_init();
void sminres_update();
void sminres_finalize();

void solve_sminres(const double complex *sigma, const int M,
                   const int *A_row, const int *A_col, const double complex *A_ele,
                   double complex *x, const double complex *rhs, const int N,
                   int itermax, double threshold, int *status);
void sample_SpMV(const int *A_row, const int *A_col, const double complex *A_ele,
                 const double complex *x, double complex *b, int N);