#include <stdio.h>

void swap(int *pOne, int *pTwo);

int main(void){
	int iOne = 100;
	int iTwo = 200;
	
	int *pOne = &iOne;//주솟값 저장
	int *pTwo = &iTwo;//주솟값 저장 
	
	printf("One = %d, Two = %d\n", iOne, iTwo);
	//swap 함수 호출
	swap(pOne, pTwo); 
	printf("One = %d, Two = %d\n", iOne, iTwo);
	
	return 0;
} 

void swap(int *pOne, int *pTwo){
	int Tmp = 0;
	Tmp     = *pOne;
	*pOne   = *pTwo;
	*pTwo   = Tmp;
	
}
/*
int a = 1;
int *b = &a;
a == *b;
의 경우, a에는 1 이 있다. 그리고 현재 b에는 a의 주솟값이 저장되어 있다. 
이 b 를 *로 호출하게되면(즉 *b라면) b에는 a의 주솟값이므로 그 주솟값으로 가서 값을 가져오라는 뜻이다.
a의 값과 *b의 값은 같아진다. 

배열: 정적 메모리 할당
포인터: 동적 메모리 할당 
*/
