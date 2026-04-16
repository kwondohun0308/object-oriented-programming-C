#include <stdio.h>
#include <stdlib.h> 	// malloc, free, rand/srand
#include <memory.h>		// memset, memcpy
#include <time.h>

typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned short UINT; 

// --------------------------------------
// 함수 선언  
// --------------------------------------
int*  Mem1DInt(int Size);							
int** Mem2DInt(int Row, int Col);  					// Row: Height(Y-axia), Col: Width(X-axis)
// [int]   iMem1D, iMem2D, uiMem1D, uiMem2D
// [char]  cMem1D, cMem2D, ucMem1D, ucMem2D
// [short] sMem1D, sMem2D, usMem1D, usMem2D
// [float] fMem1D, fMem2D

void Free1D(int*  Mem1D);							// 1D memory 해제 
void Free2D(int** Mem2D, int Row);					// 2D memory 해제  

int   GetIntNum(int Min, int Max); 					// Min~Max 사이의 한 가지 값을 가져오기 
int*  GetRandom(int* Mem1D, int Num, int Max); 		// 0~32767 사이의 값들 중에서 최대 Max 이내에서 Num개의 수를 랜덤하게 가져오기   

void SortMINtoMax(int* list, int Size); 			// 오름차순 함수 
void SortMAXtoMIN(int* list, int Size); 			// 내림차순 함수  
void ShowArray(int* list, int Size); 				// 포인터배열의 데이터 출력  

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

int GetIntNum(int Min, int Max)
{
	bool NumValidCheck = 0;     // bool 타입은 0은 거짓, 1은 참 (보통 거짓 "0"으로 초기화) 
	int iResult = 0;
	
	// 숫자의 범위는 1~10만 가능	 
	do 
	{		
	    NumValidCheck = 0; // 초기화는 매우 중요!  
		printf("\nPlease, input answer: ");  
		scanf("%d", &iResult); 		
		
		// 제안자가 설정한 숫자가 기존에 가정한 범위에 포함되는지에 대한 유효성 검사 
		if( (iResult > Max) || (iResult < Min) )	 
		{
			printf("\n[Error] This is an invalid number. You should input the number whose range is from %d to %d", Min, Max);
			printf("\n[Retry] Try again!");	
			NumValidCheck = 1;	 	
		}
	}while( NumValidCheck );  	
	
	return iResult;	
}

int* GetRandom(int* Mem1D, int Num, int Max)
{
	// -----------------------------------------------
	srand((UINT)time(NULL));	// 서로 다른 난수 발생
	
	// 랜덤한 Num개의 숫자 발생 (0~Max)
	for(int i=0; i<Num; i++)
	{
		Mem1D[i] = rand()%(Max+1);
	}

	return Mem1D;
}

void SortMINtoMax(int* list, int Size)
{
	int iY, iX, iTmp;
	
	// 오름차순 정렬 및 출력
	for (iY = 0; iY < Size; iY++) 
	{	
		for (iX = 0; iX < Size-1; iX++) 
		{
			if (list[iX] > list[iX + 1]) 
			{				 
				iTmp 		 = list[iX];
				list[iX] 	 = list[iX + 1];
				list[iX + 1] = iTmp;
			}
		}
	}
		
	printf("\n오름차순으로(min -> max)로 정렬된  결과를 출력합니다.\n"); 
	ShowArray(list, Size);
}

void SortMAXtoMIN(int* list, int Size)
{
	int iY, iX, iTmp;
	
	// 내림차순 정렬 및 출력 
	for (iY = 0; iY < Size; iY++) 
	{	
		for (iX = 0; iX < Size-1; iX++) 
		{
			if (list[iX] < list[iX + 1]) 
			{				 
				iTmp 		  = list[iX];
				list[iX] 	  = list[iX + 1];
				list[iX + 1]  = iTmp;
			}
		}
	}	
	
	printf("\n\n내림차순으로(max -> min)로 정렬된  결과를 출력합니다.\n"); 
	ShowArray(list, Size);
}

void ShowArray(int* list, int Size)
{
	int iX = 0;
	for (iX = 0; iX < Size; iX++)
	{
		printf("%d ", list[iX]);
	}	
}

