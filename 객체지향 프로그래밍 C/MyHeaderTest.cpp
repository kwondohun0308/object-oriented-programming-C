#include <stdio.h>
#include <memory.h>
#include "[Step-2] MyHeader.h"

#define SIZE   15
#define HEIGHT 5  // Row (y)
#define WIDTH  3  // Col (x)


int main()
{
	// -------------------------------------------------------
	// 1D -> 2D Conversion
	// -------------------------------------------------------
	int x, y;
	int*  piSample1D = Mem1DInt(SIZE);
	int** piSample2D = Mem2DInt(HEIGHT, WIDTH);	// 5x3 Matrix
	
	for(x=0; x<SIZE; x++)
	{
		piSample1D[x] = x+1;
	}	
	for(x=0; x<SIZE; x++)
	{
		printf("%d ", piSample1D[x]);
	}
	
	printf("\n");
	printf("\n");
	printf("\n");	

	for(y=0; y<HEIGHT; y++)
	{
		memcpy(piSample2D[y], piSample1D + (y*WIDTH), sizeof(int)*WIDTH);
	}
	for(y=0; y<HEIGHT; y++)
	{
		for(x=0; x<WIDTH; x++)
		{
			printf("%d ", piSample2D[y][x]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	printf("\n");	
	
	
	
	// -------------------------------------------------------
	// 2D Operation
	// -------------------------------------------------------
	for(y=0; y<HEIGHT; y++)
	{
		for(x=0; x<WIDTH; x++)
		{
			//piSample2D[y][x] = piSample2D[y][x] - 1;
			piSample2D[y][x] -= 1;
		}
	}	
	for(y=0; y<HEIGHT; y++)
	{
		for(x=0; x<WIDTH; x++)
		{
			printf("%d ", piSample2D[y][x]);
		}
		printf("\n");
	}		
	
	printf("\n");
	printf("\n");
	printf("\n");		

	
	// -------------------------------------------------------
	// 2D -> 1D Conversion
	// -------------------------------------------------------	
	int*  piResult1D = Mem1DInt(SIZE);
	for(y=0; y<HEIGHT; y++)
	{
		memcpy( piResult1D + (y*WIDTH), piSample2D[y], sizeof(int)*WIDTH );
	}	
	for(x=0; x<SIZE; x++)
	{
		printf("%d ", piResult1D[x]);
	}	
	
	printf("\n");
	printf("\n");
	printf("\n");	
	
	
	
	Free1D(piSample1D);
	Free1D(piResult1D);
	Free2D(piSample2D, HEIGHT);	
	return 0;
}
