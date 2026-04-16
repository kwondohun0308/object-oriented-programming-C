#include <stdio.h>
#define EXCHANGE_RATE 1200 //EXCHANGE_RATE에 대한 상수 선언 

typedef unsigned int UINT;

int main(void){
	//[1] 변수 선언부
	UINT uiAirPrice    = 0; //왕복 항공료 
	UINT uiDays        = 0; // 여행 일수 
	UINT uiHotel       = 0; // 1박당 호텔료
	UINT uiPocketMoney = 0; // 1박당 용돈 
	UINT uiTotalPrice  = 0; // 전체 여행비용(KRW)
	float fTotalUSD    = 0.0; // 전체 여행비용(KRW)에 대한 USD 환전액 
	 
	//[2] 각 항목별 금액(KRW)를 입력받는 부분 
	printf("How many days are you going to travel?\n");
	scanf("%d", &uiDays);
	
	printf("How much is an airline ticket?\n");
	scanf("%d", &uiAirPrice);
	
	printf("How much is a hotel price per day?\n");
	scanf("%d", &uiHotel);
	
	printf("How much is a pocket money per day?\n");
	scanf("%d", &uiPocketMoney);
	
	//[3] 전체 여행 경비(KRW)를 계산 
	uiTotalPrice = uiAirPrice + uiDays*(uiHotel + uiPocketMoney);
	printf("Total price for your trip is %d KRW\n", uiTotalPrice);
	
	//[4] USD환율에 따라 최종 여행 경비(USD) 계산 및 출력 
	fTotalUSD = (float)uiTotalPrice/EXCHANGE_RATE;
	printf("Your USD is %.2f\n",fTotalUSD);
	
	return 0;
}
