#include <stdio.h>
#include <memory.h> 
#define NUMBER 5 

typedef unsigned int UINT;

int main(void){
	//---------------------------------------------
	//학생들 점수를 합산하여 평균을 구하는 프로그램
	//---------------------------------------------

	//변수선언부 (초기화)
	UINT aiScore[NUMBER];
	UINT uiIdx = 0;
	UINT uiSum = 0;
	float fAvg = 0.0; 
	memset(aiScore, 0, sizeof(UINT)*NUMBER); //배열을 초기화 하는 memset
//	for(uiIdx = 0; uiIdx < NUMBER; uiIdx++){
//		printf("%d\n", aiScore[uiIdx]);
//	} 
	//학생들 점수 합산
	for(uiIdx = 0; uiIdx < NUMBER; uiIdx++){
		printf("%d번째 학생의 점수를 입력하시오.\n", uiIdx + 1);
		scanf("%d", & aiScore[uiIdx]);
		uiSum = uiSum + aiScore[uiIdx];
		//uiSum += aiScore[uiIdx]; (복합 대입 연산자 = 바로 위 코드와 동일한 코드임)
	}
	//합산된 점수 합에 대한 평균 계산
	fAvg = (float)uiSum / NUMBER; //캐스팅 연산을 통해 정수형을 실수형으로 전환 
	
	printf("입력된 학생들 각각의 점수를 출력합니다. \n");
	for(uiIdx = 0; uiIdx < NUMBER; uiIdx++){
		printf("%d\n", aiScore[uiIdx]);
	}
	printf("Average = %.2f\n", fAvg); 
	return 0;
} 
