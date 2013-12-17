#include <stdio.h>

#define MAX 10

int i_array[MAX] = {0,1,2,3,4,5,6,7,8,9};
int *i_zgr,
    count;
float f_array[MAX] = {.0,.1,.2,.3,.4,.5,.6,.7,.8,.9};
float *f_zgr;

int main(void) {
	i_zgr = i_array;
	f_zgr = f_array;

	for (count=0; count<MAX; count++)
		printf("%d\t%f\n", *i_zgr++, *f_zgr++);

	return 0;
}
