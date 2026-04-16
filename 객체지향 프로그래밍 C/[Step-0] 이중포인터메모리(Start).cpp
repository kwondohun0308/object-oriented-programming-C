#include <stdio.h>
#include <stdlib.h> 	// malloc, free
#include <memory.h>		// memset, memcpy

//#define WIDTH  1920
//#define HEIGHT 1080

int main(void)
{
	
	
	
	return 0;
}


//	// --------------------------------------------------
//	// 포인터를 이용한 1D 데이터 메모리 동적할당 생성  
//	// --------------------------------------------------
//	int *piMemory1D = (int*)malloc(sizeof(int)*Size);
//	memset(piMemory1D, 0, sizeof(int)*Size);
//	free(piMemory1D);

//	// --------------------------------------------------
//	// 포인터를 이용한 2D 데이터 메모리 동적할당 생성  
//	// --------------------------------------------------
//	int x, y;
//	int** piOrig2D = (int**)malloc(sizeof(int*) * HEIGHT); 
//	for(y=0; y<HEIGHT; y++)
//	{
//		piOrig2D[y] = (int*)malloc(sizeof(int)*WIDTH);
//	}
//	
//	
//	// --------------------------------------------------
//	// 포인터를 이용한 2D 데이터 메모리 동적할당 해제   
//	// --------------------------------------------------
//	for(y=0; y<HEIGHT; y++)
//	{
//		free(piOrig2D[y]); 
//	}	
//	free(piOrig2D);

