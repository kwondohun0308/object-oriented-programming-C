#include <stdio.h>

void swap(int *pOne, int *pTwo, int *pThree, int *pFour, int *pFive, int *pSix, int *pSeven, int *pEight, int *pNine, int *pTen);

int main(void){
	int iOne   = 100;
	int iTwo   = 200;
	int iThree = 300;
	int iFour  = 400;
	int iFive  = 500;
	int iSix   = 600;
	int iSeven = 700;
	int iEight = 800;
	int iNine  = 900;
	int iTen   = 1000;
	
	//각각의 숫자의 주솟값을 저장 
	int *pOne = &iOne;
	int *pTwo = &iTwo; 
	int *pThree = &iThree;
	int *pFour = &iFour;
	int *pFive = &iFive;
	int *pSix = &iSix;
	int *pSeven = &iSeven;
	int *pEight = &iEight;
	int *pNine = &iNine;
	int *pTen = &iTen;
	
	printf("One = %d, Two = %d, Three = %d, Four = %d, Five = %d, Six = %d, Seven = %d, Eight = %d, Nine = %d, Ten = %d\n", iOne, iTwo, iThree, iFour, iFive, iSix, iSeven, iEight, iNine, iTen);
	//swap 함수 호출
	swap(pOne, pTwo, pThree, pFour, pFive, pSix, pSeven, pEight, pNine, pTen);
	printf("One = %d, Two = %d, Three = %d, Four = %d, Five = %d, Six = %d, Seven = %d, Eight = %d, Nine = %d, Ten = %d\n", iOne, iTwo, iThree, iFour, iFive, iSix, iSeven, iEight, iNine, iTen);
	
	return 0;
} 

void swap(int *pOne, int *pTwo, int *pThree, int *pFour, int *pFive, int *pSix, int *pSeven, int *pEight, int *pNine, int *pTen){
	int Tmp  = 0;
	int Tmp2 = 0;
	Tmp      = *pOne;
	*pOne    = *pNine;
	*pNine   = *pFive;
	*pFive   = *pTwo;
	*pTwo    = *pFour;
	*pFour   = Tmp;
	Tmp2     = *pEight;
	*pEight  = *pSeven;
	*pSeven  = *pTen;
	*pTen    = *pSix;
	*pSix    = *pThree;
	*pThree  = Tmp2;
	
}

