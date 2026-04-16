#include <stdio.h>

typedef unsigned int UINT; 

int main(void){
	//변수 선언부
	UINT uiInput    = 0;
	UINT uiMultiply = 0;
	
	//원하는 단수를 화면에서 입력 받기
	printf("Please, input your number: \n");
	scanf("%d", &uiInput);
	
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
	return 0;
}
