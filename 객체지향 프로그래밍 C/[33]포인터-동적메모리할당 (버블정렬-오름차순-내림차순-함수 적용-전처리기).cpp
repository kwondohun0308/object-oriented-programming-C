#include <stdio.h>
#include <stdlib.h> //스탠다드 라이브러리 헤더파일 
#include <memory.h>

//전처리기 (#define, #ifdef, #elseif, #else, #endif )
#define SIZE 11
#define SORT 

//(1) 함수를 선언
void SortMINtoMAX(int* list);
void SortMAXtoMIN(int* list2);
void ShowArray(int* list);

int main(void){
	//--------------------------------------------------
	//배열을 이용하여 버블정렬(오름차순 및 내림차순) 코드 
	//--------------------------------------------------

	//변수선언부 
	int *piOrigList = (int*)malloc(sizeof(int)*SIZE); 
	piOrigList[0]  = 90;
	piOrigList[1]  = 10;
	piOrigList[2]  = 23;
	piOrigList[3]  = 17;
	piOrigList[4]  = 56;
	piOrigList[5]  = 38;
	piOrigList[6]  = 78;
	piOrigList[7]  = 36;
	piOrigList[8]  = 99;
	piOrigList[9]  = 45;
	piOrigList[10] = 68;
	//int aiOrigList[SIZE] = {90, 10, 23, 17, 56, 38, 78, 36, 99, 45, 68};
	
	//아래 2개의 메모리는 포인터를 이용하여 동적 메모리 할당 
	int *piListOne = (int*)malloc(sizeof(int)*SIZE); 
	int *piListTwo = (int*)malloc(sizeof(int)*SIZE);
	//int aiListOne[SIZE];  //오름차순 
	//int aiListTwo[SIZE];  //내림차순
	
	
	int iY = 0;
	int iX = 0;
	int iTmp = 0;
//	int iMin = 0;
//	int iMax = 0;
//	int iMed = 0;
	
	//메모리 copy
	memcpy(piListOne, piOrigList, sizeof(int)*SIZE); //memcpy(복사본, 원본, copy되는 개수)
	memcpy(piListTwo, piOrigList, sizeof(int)*SIZE);
	
	
	
	printf("\n원본 데이터 값을 출력합니다.\n");
	ShowArray(piOrigList);
	printf("\n");
	
	//(3) 함수 호출(오름차순 내림차순 정렬)  
	
#ifdef SORT // 전처리기 의미 :  만약 SORT가 정의 되어 있다면 안을 수행하라 (정의 되어있지 않다면 수행하지 않는다.) 

	SortMINtoMAX(piListOne); // 오름차순 정렬값을 화면 출력 
	SortMAXtoMIN(piListTwo); // 내림차순 정렬값을 화면 출력 
	
	//(4) 원본 데이터 값들에서 최소/최대/중간값 출력
	printf("\n\n\nMin = %d \n", piListOne[0]); //Min
	printf("Max = %d \n", piListTwo[0]); //Max
	printf("Med = %d \n", piListOne[SIZE/2]); //Med
#else 
	printf("\n버블정렬을 수행하지 않습니다.\n");
#endif

	//포인터형 메모리 해제 
	free(piOrigList);
	free(piListOne);
	free(piListTwo); 
	
	//기타 다른 소스코드를 구현... 
	return 0;
}

void SortMINtoMAX(int* list){
	int iX, iY, iTmp = 0;
	//오름차순 정렬 및 출력
	for (iY = 0; iY < SIZE; iY++){
		for (iX = 0; iX < SIZE-1; iX++){
			if (list[iX] > list[iX + 1]){
				iTmp = list[iX];
				list[iX] = list[iX + 1];
				list[iX + 1] = iTmp;
			}
		}
	}
	printf("\n오름차순(min -> max)으로 정렬된 결과를 출력합니다.\n");
	ShowArray(list);
}

void SortMAXtoMIN(int* list2)
{
	int iX, iY, iTmp = 0;
	//내림차순 정렬 및 출력 
	for (iY = 0; iY < SIZE; iY++){
		for (iX = 0; iX < SIZE-1; iX++){
			if (list2[iX] < list2[iX + 1]){
				iTmp = list2[iX];
				list2[iX] = list2[iX + 1];
				list2[iX + 1] = iTmp;
			}
		}
	}
	printf("\n\n내림차순(max -> min)으로 정렬된 결과를 출력합니다.\n");
	ShowArray(list2);
}

void ShowArray(int* list){
	int iX = 0;
	for (iX = 0; iX < SIZE; iX++){
		printf("%d ", list[iX]);
	}
}
