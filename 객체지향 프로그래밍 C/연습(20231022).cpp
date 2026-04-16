#include <stdio.h>
#define HOUR 3600
#define MINUTE 60 
#define DAY 86400 //(강의 과제) 

//주석을 이용해서 소스코드 구현에 대한 설계 
typedef unsigned int UINT;

int main(void){
	// [1] 변수 선언 (입력, 시간, 분, 초를 나타내는 변수)
	FILE* fp = fopen("Time.txt", "w"); 
	UINT uiInputSec = 0;
	UINT uiDay      = 0;
	UINT uiHour     = 0;
	UINT uiMin      = 0;
	UINT uiSec      = 0;
	UINT uiTemp     = 0;
	
	// [2] 화면 입출력 함수를 통해 입력에 해당하는 임의의 초를 가져오기(printf/scanf)
	printf("Enter your input: \n");
	scanf("%d", &uiInputSec);
	printf("Your input is %d\n", uiInputSec);
	fprintf(fp, "Your input is %d\n", uiInputSec);
	
	// [3] 입력된 값을 시간, 분, 초로 계산하기(나누기 및 나머지 연산을 적용) 
	
	//(강의 과제) [3-1] 입력값을 86400으로 나눠서 몫은 일 수, 나머지는 시간, 분 및 초를 계산하기 위해 uiTemp에 저장 
	uiDay = uiInputSec / DAY;
	uiTemp = uiInputSec % DAY;
	
	// [3-2] 입력값을 3600으로 나눠서 몫은 시간, 나머지는 분 및 초를 계산하기 위해 uiTemp에 저장 
	uiHour = uiTemp / HOUR;
	uiTemp = uiTemp % HOUR;
	
	// [3-3] 상기 uiTemp를 분으로 나눠서 몫은 분, 나머지는 초로 변수에 저장 
	uiMin = uiTemp / MINUTE;
	uiSec = uiTemp % MINUTE;
	
	// [4] 최종 결과를 화면에 출력하기(printf)
	printf("당신이 입력하신 시간은 %d일, %d시간,  %d분,  %d초 입니다.", uiDay, uiHour, uiMin, uiSec);
	
	return 0;
}
