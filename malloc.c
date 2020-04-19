#include <stdio.h>
#include <stdlib.h>
int main(void) {
  long  double *ptr;
 ptr = (long double*) malloc(  100*sizeof(long double));
printf("%lu",sizeof(long double));
printf("%p",(long double*)malloc(  100*sizeof(long double)));
 scanf("%Lf",ptr);
  printf("%Lf",*ptr);
  free(ptr);
  return 0;

}
