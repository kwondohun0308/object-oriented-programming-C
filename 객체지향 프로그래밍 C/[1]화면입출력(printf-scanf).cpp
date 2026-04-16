#include <stdio.h> /*stdio = standard input/output
.h (header file)-> printf, scanf */
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;
int main(void) //main이라는 함수는 입력이 없고, 출력의 타입은 정수형이다. 
{
	UINT a = 0; // 이렇게 선언 가능
	/* 1 */
	printf("Hello World!\n"); //화면에 출력 (\n = 엔터키) 
	
	/* 2 */
	int iNumber = 0;
	iNumber = 100;
	printf("The number is %d\n", iNumber); //The number is 100 출력  
	  
	/* 3 */
	int iOne = 100;
	int iTwo = 200;
	int iSum = 0;
	iSum = iOne + iTwo;
	printf("%d + %d = %d\n", iOne, iTwo, iSum);
	
	/* 4 */
	int iInput = 0;
	printf("0~10까지의 숫자중 하나를 입력하시오: \n");
	scanf("%d",&iInput);
	printf("당신이 입력한 숫자는 %d입니다.\n",iInput);
	
	/* 5 */
	//변수 선언부 
	char cCharacter;
	char cNumber = 0;
	int  INumber = 0;
	float fNumber = 0.0;
	
	//문자에 대한 화면입출력 실습코드
	printf("Input your favorite character\n");
	scanf(" %c", &cCharacter); 
	printf("Your favorite character is %c\n", cCharacter);
	
	//char 타입 숫자에 대한 화면입출력 실습코드
	printf("Input your favorite number\n");
	scanf(" %c", &cNumber); 
	printf("Your favorite number is %c\n", cNumber);
	
	//int 타입 숫자에 대한 화면입출력 실습코드
	printf("Input your favorite int number\n");
	scanf("%d", &INumber); 
	printf("Your favorite number is %d\n", INumber);
	
	//float 타입 숫자에 대한 화면입출력 실습코드
	printf("Input your favorite float number\n");
	scanf("%f", &fNumber);
	printf("Your favorite number is %.2f\n", fNumber);//소수점 둘째자리까지 출력
	return 0; //실질적인 출력값 
} 
//기본적인 함수의 뼈대 

/* 변수 : variable number /상수 : constant number
char(8bit) - -128 ~ 127(256)
short(16bit) - -32768 ~ 32767
unsigned char(양수, 8bit) - 0 ~ 255
*/
/* 내가 쓸수 있는 값의 범위를 확인하고 변수를 선언.
unsigned char 의 범위 : 0 ~ 255
unsigned int 의 범위 : 0 ~ 2^32 - 1 
만약 267을 선언한다면 overflow
-3을 선언한다면 underflow
*/ 
