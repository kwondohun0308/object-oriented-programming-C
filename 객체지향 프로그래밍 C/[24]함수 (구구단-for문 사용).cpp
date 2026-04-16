#include <stdio.h>
#define GOGODAN 9
typedef unsigned int UINT; 

//함수를 만들기 위해 3가디 단계가 있음. 
//(1) 함수를 선언
int GetNumber(void);
void Show(int uiInput);

int main(void){
	//변수 선언부
	UINT uiInput = 0;

	//(3) 함수를 호출 
	uiInput = GetNumber();
	Show(uiInput);

	return 0;
}

//(2) 함수를 정의
int GetNumber(void){
	UINT uiInput = 0; // 위에 메인 함수의 uiInput와는 다른 변수이다.(메모리에서 다른 위치에 저장) 
	//원하는 단수를 화면에서 입력 받기
	printf("Please, input your number: \n");
	scanf("%d", &uiInput); // 저장만 해둔 상태
	
	return uiInput; // 리턴을 해야지만 메인함수에서 쓸수 있음 
}
void Show(int uiInput){ // Show 함수의 출력의 타입이 void이기 때문에 return에 대한 코딩이 불필요함. 
	UINT uiMultiply = 0;
	UINT uiIdx = 0;  
	//입력받은 단수를 기반으로 구구단을 화면으로 출력
	for(uiIdx; uiIdx<GOGODAN; uiIdx++){
		uiMultiply++;
		printf("%d X %d = %d\n", uiInput, uiMultiply, uiInput*uiMultiply);
	}
}
