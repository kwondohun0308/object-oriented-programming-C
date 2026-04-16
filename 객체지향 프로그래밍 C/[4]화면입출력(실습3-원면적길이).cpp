#include <stdio.h>
#define PI 3.141592 //PI에 대한 상수 선언 

int main(void){
	//[1] 변수 선언부
	float fRadious = 0;
	float fArea    = 0.0;
	float fLength  = 0.0;
	 
	//[2] 반지름을 입력받는 부분
	printf("Input radious: \n");
	scanf("%f", &fRadious);
	printf("Your radious is %f\n", fRadious);
	
	//[3] 원의 면적 및 길이를 구하는 부분
	fArea = PI * fRadious * fRadious;
	fLength = 2 * PI * fRadious;
	
	//[4] 원의 면적과 길이를 출력하는 부분 
	printf("Area : %.2f, Length : %.2f\n",fArea, fLength);
	return 0;
}
