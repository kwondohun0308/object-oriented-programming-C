#include <stdio.h>

typedef unsigned int UINT; 

void GOGODAN_output(UINT uiInput);
void GOGODAN_input(UINT uiInput);

int main(void){
	//변수 선언부
	UINT uiInput = 0;
	UINT uiMultiply = 0;
	
	GOGODAN_input(uiInput);

	return 0;
}
void GOGODAN_input(UINT uiInput){
	//원하는 단수를 화면에서 입력 받기
	printf("Please, input your number: \n");
	scanf("%d", &uiInput);
	GOGODAN_output(uiInput);
}
void GOGODAN_output(UINT uiInput){
	UINT uiMultiply = 0;
	//입력받은 단수를 기반으로 구구단을 화면으로 출력
	uiMultiply++;
	printf("%d X %d = %d\n", uiInput, uiMultiply, uiInput*uiMultiply);
	uiMultiply++;
	printf("%d X %d = %d\n", uiInput, uiMultiply, uiInput*uiMultiply);
	uiMultiply++;
	printf("%d X %d = %d\n", uiInput, uiMultiply, uiInput*uiMultiply);
	uiMultiply++;
	printf("%d X %d = %d\n", uiInput, uiMultiply, uiInput*uiMultiply);
	uiMultiply++;
	printf("%d X %d = %d\n", uiInput, uiMultiply, uiInput*uiMultiply);
	uiMultiply++;
	printf("%d X %d = %d\n", uiInput, uiMultiply, uiInput*uiMultiply);
	uiMultiply++;
	printf("%d X %d = %d\n", uiInput, uiMultiply, uiInput*uiMultiply);
	uiMultiply++;
	printf("%d X %d = %d\n", uiInput, uiMultiply, uiInput*uiMultiply);
	uiMultiply++;
	printf("%d X %d = %d\n", uiInput, uiMultiply, uiInput*uiMultiply);
}
