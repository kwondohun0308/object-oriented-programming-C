#include <stdio.h>
#define GOGODAN 9
typedef unsigned int UINT;

int main(void){
	//변수 선언부
	UINT a = 0;
	UINT b = 1;
	
	//원하는 단수를 화면에서 입력 받기
	printf("원하는 단수를 입력하세요.\n");
	scanf("%d", &a);
	
	//입력받은 단수를 기반으로 구구단을 화면으로 출력
	for(b;b <= GOGODAN;b++){
		printf("%d X %d = %d\n", a, b, a*b );
	}
	
	return 0;
}
