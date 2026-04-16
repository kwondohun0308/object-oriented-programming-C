//switch문장 실습(1~7 숫자에 대해 요일로 답하기)
//1:월, 2:화, ... 7:일요일로 출력하기 
#include <stdio.h>

typedef unsigned int UINT; 

int main(void){
	//변수 선언
	UINT uiDay = 0;
	
	//요일에 해당하는 숫자를 화면에서 입력받기
	printf("Your number?\n");
	scanf("%d", &uiDay);
	
	//해당 요일을 화면에 출력하기
	switch(uiDay)
	{
		case 1:
			printf("월요일\n"); 
			break;
		case 2:
			printf("화요일\n");
			break;
		case 3:
			printf("수요일\n");
			break;
		case 4:
			printf("목요일\n");
			break;
		case 5:
			printf("금요일\n");
			break;
		case 6:
			printf("토요일\n");
			break;
		case 7:
			printf("일요일\n");
			break;
		Default:
			break;
	} 
	
	//위 switch문장은 if문장으로 대체 가능함
	if (uiDay == 1)//주의! "=="
	{
		printf("월요일\n");
	}
	else if(uiDay == 2)//주의! "=="
	{
		printf("화요일\n");	
	} 
	else if(uiDay == 3) //주의! "=="
	{
		printf("수요일\n"); 
	}
	else if(uiDay == 4) //주의! "=="
	{
		printf("목요일\n"); 
	}
	else if(uiDay == 5) //주의! "=="
	{
		printf("금요일\n"); 
	}
	else if(uiDay == 6) //주의! "=="
	{
		printf("토요일\n"); 
	}
	else  
	{
		printf("일요일\n"); 
	}
	
	return 0; 
	
} 
