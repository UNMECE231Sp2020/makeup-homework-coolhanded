#include "sort.h"

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int *begin, const int *end)
{
	//Use swap to exchange two values

	int *(i);
	int *(j);
	int k = (i + 1);
	int z = (j + 1);
	for(i=begin; i!=end; i++) {
		for(j=k; j!=end; j++) {
			if(*(j) > *(z)) {
				swap(j, z);
			}
		}
	}
}
