#include <stdio.h>
#include <stdlib.h> 	// malloc, free
#include <memory.h>		// memset, memcpy

typedef unsigned char UCHAR;
typedef unsigned short USHART;
typedef unsigned short UINT; 

// --------------------------------------
// 함수 선언  
// --------------------------------------
int*  Mem1DInt(int Size);
int** Mem2DInt(int Row, int Col); // Row: Height(Y-axia), Col: Width(X-axis)

void Free1D(int*  Mem1D);
void Free2D(int** Mem2D, int Row);



// --------------------------------------
// 함수 정의  
// --------------------------------------
int* Mem1DInt(int Size)
{
	int* piMem1D = (int*)malloc(sizeof(int)*Size);
	memset(piMem1D, 0, sizeof(int)*Size);	
	return  piMem1D;
}

int** Mem2DInt(int Row, int Col)
{
	int** piMem2D = (int**)malloc(sizeof(int*) * Row); 
	for(int y=0; y<Row; y++)
	{
		piMem2D[y] = (int*)malloc(sizeof(int)*Col);
		memset(piMem2D[y], 0, sizeof(int)*Col);
	}
	
	return piMem2D;
}

void Free1D(int* Mem1D)
{
	free(Mem1D);
}

void Free2D(int** Mem2D, int Row)
{
	for(int y=0; y<Row; y++)
	{
		free(Mem2D[y]); 
	}	
	free(Mem2D);	
}


int main(void)
{
// [1D Example]	
//	int* piMemory1D = Mem1DInt(5);
//	piMemory1D[0] = 27;
//	piMemory1D[1] = 127;
//	piMemory1D[2] = -527;
//	piMemory1D[3] = 5827;
//	piMemory1D[4] = -7827;
//	printf("%d, %d, %d, %d, %d\n", piMemory1D[0], piMemory1D[1], piMemory1D[2], piMemory1D[3], piMemory1D[4]);
//	Free1D(piMemory1D);

// [2D Example]	
//	int** piMemory2D = Mem2DInt(5, 3);
//	printf("%d, %d, %d\n", piMemory2D[0][0], piMemory2D[3][2], piMemory2D[4][2]);	
//	piMemory2D[0][0] = 129;
//	piMemory2D[3][2] = -129;
//	piMemory2D[4][2] = 12900;
//	printf("%d, %d, %d\n", piMemory2D[0][0], piMemory2D[3][2], piMemory2D[4][2]);
//	Free2D(piMemory2D, 5);
	
	
	
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

