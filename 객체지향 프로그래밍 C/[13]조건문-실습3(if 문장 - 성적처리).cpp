//성적처리 프로그래밍 (출석 10%, 중간 40%, 기말 50%) 
#include <stdio.h>

/* 예를 들어서 출석이 89점, 실제 출석 점수를 89점 * 0.1 = 8.9(실수)
따라서 변수들은 각각 실수로 잡는 것이 맞음 */ 

#define ATTEND 0.1
#define MID 0.4
#define FINAL 0.5

int main(void){
	//변수 선언
	float fAttend    = 0.0;
	float fMidTest   = 0.0; 
	float fFinalTest = 0.0;
	float fFinal     = 0.0;
	char cGrade      = 0;
	FILE* fp = fopen("Grade.txt", "w"); //w:write, r:read, a:add
	
	//출석, 중간고사, 기말고사를 화면에서 입력받은 후, 최종 점수를 산정
	//출석 점수 
	printf("Your Attend Point?\n");
	scanf("%f", &fAttend);
	//중간고사 점수 
	printf("Your MidTest Point?\n");
	scanf("%f", &fMidTest);
	//기말고사 점수 
	printf("Your FinalTest Point?\n");
	scanf("%f", &fFinalTest); 
	//최종점수 계산
	fFinal = (fAttend * ATTEND) + (fMidTest * MID) + (fFinalTest * FINAL);
	printf("Your score is %.2f\n", fFinal);
	
	//최종 점수를 기반으로 학점을 부여(A~F)
	if(fFinal >= 90){
		printf("Your grade is A.\n");
		cGrade = 'A';
	}
	else if(fFinal >= 80){
		printf("Your grade is B.\n");
		cGrade = 'B';
	}
	else if(fFinal >= 70){
		printf("Your grade is C.\n");
		cGrade = 'C';
	}
	else if(fFinal >= 60){
		printf("Your grade is D.\n");
		cGrade = 'D';
	}
	else{
		printf("Your grade is F.\n");
		cGrade = 'F';
	}
	//파일 쓰기 및 종료
	fprintf(fp, "Your Attend Point?: %.2f\n", fAttend);
	fprintf(fp, "Your MidTest Point?: %.2f\n", fMidTest);
	fprintf(fp, "Your FinalTest Point?: %.2f\n", fFinalTest);
	fprintf(fp, "Your Final Point?: %.2f\n", fFinal);
	fprintf(fp, "Your grade is %c.\n", cGrade);
	fclose(fp); 
	return 0; 
}
