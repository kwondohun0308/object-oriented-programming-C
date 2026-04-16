#include <stdio.h>
#include <memory.h>
#define SIZE 10

//(1) 함수를 선언
void SortMINtoMAX(int* list);
void SortMAXtoMIN(int* list2);

int main(void){
	//--------------------------------------------------
	//배열을 이용하여 버블정렬(오름차순 및 내림차순) 코드 
	//--------------------------------------------------

	//변수선언부 
	int aiOrigList[SIZE] = {90, 10, 23, 17, 56, 38, 78, 36, 99, 45};
	int aiListOne[SIZE];  //오름차순 
	int aiListTwo[SIZE];  //내림차순
	int iY   = 0;
	int iX   = 0;
	int iTmp = 0;
	
	//메모리 copy
	memcpy(aiListOne, aiOrigList, sizeof(int)*SIZE); //memcpy(복사본, 원본, copy되는 개수)
	memcpy(aiListTwo, aiOrigList, sizeof(int)*SIZE);
	//오름차순 정렬 및 출력
	SortMINtoMAX(aiListOne);
	//내림차순 정렬 및 출력 
	SortMAXtoMIN(aiListTwo);
	
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
	for (iX = 0; iX < SIZE; iX++){
		printf("%d ", list[iX]);
	}
}

void SortMAXtoMIN(int* list2){
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
	for (iX = 0; iX < SIZE; iX++){
		printf("%d ", list2[iX]);
	}	
}
