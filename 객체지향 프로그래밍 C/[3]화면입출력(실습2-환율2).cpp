//한화를 달러로 바꾸는 프로그램
#include <stdio.h>
#define EXCHANGE_RATE 1236 //환율에 대한 상수 선언 

typedef unsigned int UINT; 

int main(void){
	//변수 선언부
	float fUSD  = 0;
	UINT  uiKRW = 0;
	
	//한화를 입력받는 부분 
	printf("Your KRW?\n",uiKRW);
	scanf("%d", &uiKRW);
	printf("Your KRW is %d\n",uiKRW);
	
	//한화를 달러로 바꾸는 부분(캐스팅연산)
	fUSD = (float)uiKRW / EXCHANGE_RATE; 
	
	//달러를 출력하는 부분
	printf("Your USD is %.2f\n",fUSD);
	return 0;
} 
