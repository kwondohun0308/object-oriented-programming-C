#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef unsigned int UINT; 

int main(void){
	//---------------------------------
	//컴퓨터와 함께하는 가위바위보 게임
	//---------------------------------
	
	//[1] 변수 선언( 사용자의 값, 컴퓨터 값)
	UINT uiUser = 0;
	UINT uiComp = 0;
	srand((UINT)time(NULL)); //서로 다른 난수 발생
	
	//[2] 사용자의 값을 입력받기 (0:가위, 1:바위, 2:보)
	printf("가위바위 보 게임에 오신것을 환영합니다.\n");
	printf("하나의 값을 선택하세요.(0:가위, 1:바위, 2:보)\n");
	scanf("%d", &uiUser);
	
	//[3] 난수 발생을 통해 컴퓨터의 값을 생성하기
	uiComp = rand()%3;//3으로 나눠야하는게 컴퓨터는 무조건 안정해주면 0부터 시작하기 때문에 3으로 잡아줘야함 
	
	//[4] 가위바위보 게임의 법칙에 따라 최초 결과를 출력하는 부분(if문 처리) 
	printf("사용자의 값은 %d\n", uiUser);
	switch(uiUser)
	{
		case 0:
			printf("사용자는 가위를 냈습니다.\n");
			break;
		case 1:
			printf("사용자는 바위를 냈습니다.\n");
			break;
		case 2:
			printf("사용자는 보를 냈습니다.\n");
			break;
	}
	printf("컴퓨터의 값은 %d\n", uiComp);
	switch(uiComp)
	{
		case 0:
			printf("컴퓨터는 가위를 냈습니다.\n");
			break;
		case 1:
			printf("컴퓨터는 바위를 냈습니다.\n");
			break;
		case 2:
			printf("컴퓨터는 보를 냈습니다.\n");
			break;
	}
	//가위바위보 게임을 실행 
	if(uiUser == uiComp) //비긴경우 
	{
		printf("사용자와 컴퓨터가 비겼습니다.\n");
	}
	else if( /* 컴퓨터 이김 조건문*//*(uiUser + 1) % 3 == uiComp*/ /*사용자 이김 조건문 */(uiComp + 1) % 3 == uiUser )
	{
		printf("사용자가 이겼습니다.\n");
	}
	else
	{
		printf("컴퓨터가 이겼습니다.\n");
	} 
	return 0;
}
