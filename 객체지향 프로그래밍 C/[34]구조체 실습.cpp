#include <stdio.h>
#include <string.h> 

struct STUDENT{
	int   iNumber;
	char  cName[10];
	float fGrade;
};

//string -> str (문자열)
//copy -> cpy (복사)
//strcpy -> 문자열을 복사하는 명령 (#include string.h 정의) 
int main(void){
	//STUDENT 구조체(객체) 에 대한 변수선언
	struct STUDENT sHONG;
	
	//구조체(객체) 변수에 데이터 입력
	sHONG.iNumber = 20201234;
	sHONG.fGrade = 4.5;
	strcpy(sHONG.cName, "홍길동");
	
	printf("학번: %d\n", sHONG.iNumber);
	printf("이름: %s\n", sHONG.cName);
	printf("학번: %.2f\n", sHONG.fGrade);
	
	return 0;
}
