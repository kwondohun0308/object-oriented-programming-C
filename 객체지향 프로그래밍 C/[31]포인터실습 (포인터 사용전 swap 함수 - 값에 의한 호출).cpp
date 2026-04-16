#include <stdio.h>
/* swap 함수를 호출할때 값이 전달만 되고, swap 함수에서 바꾼 값들은 메인 함수에서는 영향을 미치지 못한다(값에 의한 호출) */
void swap(int one, int two);

int main(void){
	int iOne = 100;
	int iTwo = 200;
	
	//swap 함수 호출
	printf("One = %d, Two = %d\n", iOne, iTwo);
	swap(iOne, iTwo); 
	printf("One = %d, Two = %d\n", iOne, iTwo);
	
	return 0;
} 

void swap(int one, int two){
	int Tmp = 0;
	Tmp     = one;
	one     = two;
	two     = Tmp;
	
}
