#include <stdio.h>
#include "[Step-2] MyHeader.h"

#define SIZE 30
#define MAX  1000

int main()
{
	// [Example 1] GetIntNum() 
	int iSample = GetIntNum(1, 10);
	printf("iSample = %d\n", iSample);

	// [Example 2] GetRandom() 
	int* iSample = Mem1DInt(SIZE);
	GetRandom(iSample, SIZE, MAX);
	for(int i=0; i<SIZE; i++)
	{
		printf("iSample[%d] = %d\n", i+1, iSample[i]);	
	}
	Free1D(iSample);

	// [Example 3] Sorting 
	int* iSample = Mem1DInt(SIZE);
	GetRandom(iSample, SIZE, MAX);
	SortMINtoMax(iSample, SIZE);
	SortMAXtoMIN(iSample, SIZE);
	Free1D(iSample);	
	
	
	return 0;
}
