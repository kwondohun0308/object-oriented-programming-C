#include <stdio.h>

int main(void){
	// [1] 파일 생성
	FILE* fp = fopen("Sample.txt", "w"); // w = write a = add(추가를 해서 파일에 출력)
	FILE* fpTmp = fopen("SampleTmp.txt", "w");
	char cValue;
	int   iValue = 0;
	float fValue = 0.0;
	
	// [2] 파일에 임의의 데이터를 쓰기(write)
	printf("You are the best.\n"); // 화면 출력 
	fprintf(fp, "You are the best.\n"); // 파일 출력
	fprintf(fpTmp, "You are the best.\n"); // 파일 출력
	
	//문자에 대한 화면입출력 실습코드
	printf("Input your favorite character\n");
	scanf(" %c", &cValue); 
	printf("Your favorite character is %c\n", cValue);
	fprintf(fp, "Your favorite character is %c\n", cValue);
	fprintf(fpTmp, "Your favorite character is %c\n", cValue);
	
	//int 타입 숫자에 대한 화면입출력 실습코드
	printf("Input your favorite int number\n");
	scanf("%d", &iValue); 
	printf("Your favorite number is %d\n", iValue);
	fprintf(fp, "Your favorite number is %d\n", iValue);
	fprintf(fpTmp, "Your favorite number is %d\n", iValue);
	
	//float 타입 숫자에 대한 화면입출력 실습코드
	printf("Input your favorite float number\n");
	scanf("%f", &fValue);
	printf("Your favorite number is %d\n", fValue);
	fprintf(fp, "Your favorite number is %d\n", fValue);
	fprintf(fpTmp, "Your favorite number is %d\n", fValue);
	
	// [3] 파일 종료 
	fclose(fp);
	
	return 0;
} 
