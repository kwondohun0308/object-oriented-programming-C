#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int* Mem1DInt(int Size);
int** Mem2DInt(int Row, int Col);


void Mem1DFree(int* Mem1D);
void Mem2DFree(int** Mem1D, int Row);

int* Mem1DInt(int Size){
	int* piMemory1D = (int*)malloc(sizeof(int)*Size);
	memset(piMemory1D, 0, sizeof(int)*Size);
	
	return piMemory1D;
}

void Mem1DFree(int* Mem1D){
	free(Mem1D);
}

int** Mem2DInt(int Row, int Col){
	int** piOrig2D = (int**)malloc(sizeof(int*) * Row); 
	for(int y=0; y<Row; y++)
	{
		piOrig2D[y] = (int*)malloc(sizeof(int)*Col);
		memset(piOrig2D[y], 0, sizeof(int)*Col);
	}
	return piOrig2D;
}

void Mem2DFree(int** Mem1D, int Row){
	for(int y=0; y<Row; y++)
	{
		free(Mem1D[Row]); 
	}	
	free(Mem1D);
}
int main(void){
	int* piMemory1D = Mem1DInt(5);
	piMemory1D[0] = 56;
	piMemory1D[1] = 45864;
	piMemory1D[2] = 15645;
	piMemory1D[3] = -45;
	piMemory1D[4] = -4561;
	printf("%d %d %d %d %d\n", piMemory1D[0], piMemory1D[1], piMemory1D[2], piMemory1D[3], piMemory1D[4]);
	int** piMemory2D = Mem2DInt(5, 3);
	printf("%d %d %d\n", piMemory2D[0][0], piMemory2D[1][2], piMemory2D[3][0]);
	piMemory2D[0][0] = 56;
	piMemory2D[1][2] = 65;
	piMemory2D[3][0] = 2465;
	printf("%d %d %d", piMemory2D[0][0], piMemory2D[1][2], piMemory2D[3][0]);
	
	return 0;
} 
