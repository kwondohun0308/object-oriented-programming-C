#include <stdio.h>
#define GOGODAN 9 
typedef unsigned int UINT;

// 본 프로그램은 구구단을 확장하여 최대 A * B를 출력하는 코드
// 이때 A는 첫번째 수, B는 두번째 수에 해당(1*1 ~ A*B) 

//(1) 함수의 선언
int GetNumber(void); 
void Display(int First, int Second);

int main(void){
	//[1] 변수 선언부
	UINT uiInput    = 0;    //첫번째 단수 A에 해당 
	UINT uiInputTwo = 0; //두번째 단수 B에 해당 
 
	  
	//[2] 화면입출력을 통한 사용자 단수 입력(함수 호출)
	uiInput = GetNumber();
	uiInputTwo = GetNumber();
	
	//[3] 이중 for문을 통해 구구단을 화면에 출력(함수 호출)
	Display(uiInput, uiInputTwo);
	
	return 0;
}

//(2) 함수의 정의
int GetNumber(void){
	UINT uiUserInput = 0;
	printf("원하는 수를 입력하시오. \n");
	scanf("%d", &uiUserInput);
	
	return uiUserInput;
} 
void Display(int First, int Second){
	UINT uiMultiply = 0;
	UINT uiIdxOne = 0;
	UINT uiIdxTwo = 0;
	UINT uiDan = 0;
	
	//[3] 이중 for문을 통해 구구단을 화면에 출력 
	for(uiIdxOne = 0; uiIdxOne < First; uiIdxOne++){// 이 for문은 구구단 첫번째 인자에 대한 반복문 
		uiDan++;
		uiMultiply = 0;
		for(uiIdxTwo = 0; uiIdxTwo < Second; uiIdxTwo++){// 이 for문은 구구단 두번째 인자에 대한 반복문 
			uiMultiply++;
			printf("%d X %d = %d\n", uiDan, uiMultiply, uiDan*uiMultiply);
		}
		printf("\n");
	}
}

