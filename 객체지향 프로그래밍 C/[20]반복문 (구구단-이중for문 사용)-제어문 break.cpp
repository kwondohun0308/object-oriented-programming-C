#include <stdio.h>
#define GOGODAN 9 
typedef unsigned int UINT;

int main(void){
	//[1] 변수 선언부
	UINT uiInput    = 0;
	UINT uiMultiply = 0;
	UINT uiIdxOne   = 0;
	UINT uiIdxTwo   = 0;
	UINT uiDan      = 0; 
	  
	//[2] 화면입출력을 통한 사용자 단수 입력
//	printf("원하는 구구단 단수를 입력하시오. \n");
//	scanf("%d", &uiInput);
//	fprintf(fp, "원하는 구구단 단수를 입력하시오. %d\n", uiInput);
	
	//[3] 이중 for문을 통해 구구단을 화면에 출력 
	for(uiIdxOne = 0; uiIdxOne < GOGODAN; uiIdxOne++){// 이 for문은 구구단 첫번째 인자에 대한 반복문 
		uiDan++;
		uiMultiply = 0;
		
		//제어문 break 예시(1) : 3단 까지만 구구단을 출력 
		if(uiDan == 4){
			break;
		} 
		for(uiIdxTwo = 0; uiIdxTwo < GOGODAN; uiIdxTwo++){// 이 for문은 구구단 두번째 인자에 대한 반복문 
			uiMultiply++;
			printf("%d X %d = %d\n", uiDan, uiMultiply, uiDan*uiMultiply);
			
			//제어문 break 예시(2) : 각 단별로 5까지만 구구단을 출력
			if(uiMultiply == 5){
				break;
			} 
		}
		printf("\n");

	}

	return 0;
}
