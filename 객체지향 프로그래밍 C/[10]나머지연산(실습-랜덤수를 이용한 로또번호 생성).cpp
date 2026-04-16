#include <stdio.h>

//난수를 생성하기 위해 필요한 헤더파일을 정의 
#include <stdlib.h>
#include <time.h>
#define LOTTO 45

typedef unsigned int UINT; 

int main(void){
	// [1] 변수 선언부 
	FILE* fp = fopen("LOTTO.txt", "w"); //강의 과제 
	UINT uiOne   = 0;
	UINT uiTwo   = 0;
	UINT uiThree = 0;
	UINT uiFour  = 0;
    UINT uiFive  = 0;
    UINT uiSix   = 0;
	
	srand((UINT)time(NULL)); //서로 다른 난수 발생  
	  
	// [2] 랜덤한 입력 기반 6개의 로또번호를 생성
	uiOne = rand()%LOTTO + 1;
	uiTwo = rand()%LOTTO + 1;
	uiThree = rand()%LOTTO + 1;
	uiFour = rand()%LOTTO + 1;
	uiFive = rand()%LOTTO + 1;
	uiSix = rand()%LOTTO + 1;
	// [3] 최종 생성된 6개의 로또번호를 화면에(파일에) 출력 
	printf("LOTTO numbers: %d %d %d %d %d %d\n",uiOne, uiTwo, uiThree, uiFour, uiFive, uiSix);
	printf("Good luck!\n");
	fprintf(fp, "LOTTO numbers: %d %d %d %d %d %d\n",uiOne, uiTwo, uiThree, uiFour, uiFive, uiSix);//강의 과제 
	return 0;
}
