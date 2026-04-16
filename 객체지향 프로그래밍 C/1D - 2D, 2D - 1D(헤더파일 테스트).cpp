#include <stdio.h>
#include <memory.h>
#include "[Step-2] MyHeader.h"


#define SIZE 15
#define HEIGHT 5
#define WIDTH 3

int main(void){
	int x, y;
	int* piSample1D = Mem1DInt(SIZE);
	int** piSample2D = Mem2DInt(HEIGHT, WIDTH); // 5*3 Matrix
	
	
	// -------------------------------------------------------
	// 1D -> 2D 로 바꾸기 
	// -------------------------------------------------------
	for(x = 0; x<SIZE; x++){
		piSample1D[x] = x+1;
		
	}
	for(x = 0; x<SIZE; x++){
		
		printf("%d ", piSample1D[x]);
	}

	printf("\n");
	printf("\n");
	printf("\n");
	
	//1D->2D 본코드 
	for(y = 0; y<HEIGHT; y++){
		memcpy(piSample2D[y], piSample1D + (y*WIDTH), sizeof(int) * WIDTH);
	}
	for(y = 0; y<HEIGHT; y++){
		for(x = 0; x<WIDTH; x++){
			printf("%d ", piSample2D[y][x]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	
	// -------------------------------------------------------
	// 2D 를 다른 메모리로 복사(-1해서) 
	// -------------------------------------------------------
	
	for(y = 0; y<HEIGHT; y++){
		for(x = 0; x<WIDTH; x++){
			piSample2D[y][x] -= 1;
		}
	}
	for(y = 0; y<HEIGHT; y++){
		for(x = 0; x<WIDTH; x++){
			printf("%d ", piSample2D[y][x]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	// -------------------------------------------------------
	// 위에서 복사한 2D를 1D 로 바꾸기 
	// -------------------------------------------------------

	int* piResult1D = Mem1DInt(SIZE);

	for(y = 0; y<HEIGHT; y++){
		memcpy(piResult1D + (y*WIDTH), piSample2D[y], sizeof(int) * WIDTH);
	}
	for(x = 0; x<SIZE; x++){
		printf("%d ", piResult1D[x]);
	}
	printf("\n");

	Free1D(piResult1D);
	Free1D(piSample1D);
	Free2D(piSample2D, HEIGHT);
	return 0;
}
