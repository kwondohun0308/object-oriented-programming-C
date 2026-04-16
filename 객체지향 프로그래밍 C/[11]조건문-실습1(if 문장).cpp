//모 회사의 신입사원 지원자격에 대한 유무를 확인하는 코드
//학점 및 토익점수가 기준값 이상인 경우 신입사원으로 지원이 가능 
#include <stdio.h>

typedef unsigned int UINT; 

#define GRADE 3.5
#define TOEIC 700

int main(void){
	//변수 선언부
	float fGrade      = 0.0;
	UINT uiToeicScore = 0;
	UINT uiService    = 0;
	
	//각 사용자의 학점 및 토익점수를 확인(printf/scanf)
	//사용자 학점에 대해 화면으로부터 입력 
	printf("Your GPA?\n");
	scanf("%f", &fGrade);
	//사용자의 토익점수에 대해 화면으로부터 입력 
	printf("Your Toeic Score?\n");
	scanf("%d", &uiToeicScore);
	//사용자의 봉사활동 여부에 대해 화면으로부터 입력 
	printf("Your Service?\n");//0:봉사활동 X, 1:봉사활동 O 
	scanf("%d", &uiService);
	
	//조건문(if문장)을 통해 현 사용자가 지원 가능한지 확인 
	if ((fGrade >= GRADE) && (uiToeicScore >= TOEIC))
	{
		printf("당신은 이 회사에 지원가능 대상자입니다.\n");
	}
	else if(uiSrevice == 1)//주의! "=="
	{
		printf("당신은 이 회사에 지원가능 대상자입니다.\n");	
	} 
	else
	{
		printf("당신은 이 회사에 지원가능하지 않습니다.\n"); 
	}
	return 0;
}
