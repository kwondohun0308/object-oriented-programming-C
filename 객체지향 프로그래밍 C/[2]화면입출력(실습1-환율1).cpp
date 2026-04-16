//달러를 한화로 바꾸는 프로그램
#include <stdio.h>
#define EXCHANGE_RATE 1236 //환율에 대한 상수 선언 

typedef unsigned int UINT; 

int main(void){
	//변수 선언부
	UINT uiUSD = 0;
	UINT uiKRW = 0;
	
	//달러를 입력받는 부분 
	printf("How much would you like to exchange?\n",uiUSD);
	scanf("%d", &uiUSD);
	printf("Your USD is %d\n", uiUSD);
	
	//달러를 한화로 바꾸는 부분
	uiKRW = uiUSD * EXCHANGE_RATE; 
	
	//한화를 출력하는 부분
	printf("Your KRW is %d\n",uiKRW);
	return 0;
} 
