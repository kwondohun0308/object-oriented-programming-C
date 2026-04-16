#include <stdio.h>

int main(void){
	// [1] 파일 열기 
	FILE* fp_int   = fopen("Data_int.txt", "r"); // r = read 
	FILE* fp_float = fopen("Data_float.txt", "r");
	FILE* fp_char  = fopen("Data_char.txt", "r");
	
	// [2]변수 선언
	char cFirst;
	char cSecond;
	char cThird;
	
	int iFirst  = 0;
	int iSecond = 0;
	int iThird  = 0;
	
	float fFirst  = 0.0;
	float fSecond = 0.0;
	float fThird  = 0.0;
	
	// [3] 파일의 데이터를 읽기 
	fscanf(fp_int, "%d %d %d", &iFirst, &iSecond, &iThird);
	fscanf(fp_float, "%f %f %f", &fFirst, &fSecond, &fThird);
	fscanf(fp_char, "%c %c %c", &cFirst, &cSecond, &cThird);
	
	// [4] 검증 차원에서 화면 출력
	printf("First: %d, Second: %d, Third: %d\n", iFirst, iSecond, iThird);
	printf("First: %.2f, Second: %.2f, Third: %.2f\n", fFirst, fSecond, fThird);
	printf("First: %c, Second: %c, Third: %c\n", cFirst, cSecond, cThird);
	
	// [5] 파일 종료 
	fclose(fp_int);
	fclose(fp_float);
	
	return 0;
} 
