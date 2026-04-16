#include <stdio.h>

#define  GAME_NUMBER   5 
#define  MINIMUM       1
#define  MAXIMUM       10

typedef unsigned int UINT;    
UINT GetNumber(void); 
void PlayGame(UINT uiGameAnswer);
//Message Function
void StartMessage(void);

int main(void)
{
	// -----------------------------------------------------------------------------------
	// 숫자 맞추기 게임 (제안자가 설정한 숫자를 실험자가 5번만에 맞추기)
	// -----------------------------------------------------------------------------------
	
	UINT uiAnswer = GetNumber(); //정답 숫자를 생성하는 부분 
	PlayGame(uiAnswer); //게임 시작 

	return 0;
}

UINT GetNumber(void){
	bool NumValidCheck = 0;     // bool 타입은 0은 거짓, 1은 참 (보통 거짓 "0"으로 초기화)
	UINT uiResult	   = 0; 	// 제안자가 설정한 숫자
	// (Step 2) 제안자가 숫자를 먼저 설정 (숫자의 범위는 1~10만 가능)	 
	do // [do while문] 일단 do 내부에 코딩된 내용을 무조건 한번 실행 --> while 조건이 참인 경우 계속 반복(무한)실행, 거짓이면 빠져나옴. 
	{		
	    NumValidCheck = 0; // 초기화는 매우 중요!  
		printf("\nPlease, input answer: ");  
		scanf("%d", &uiResult); 		
		
		// 제안자가 설정한 숫자가 기존에 가정한 범위에 포함되는지에 대한 유효성 검사 
		if( (uiResult > MAXIMUM) || (uiResult < MINIMUM) )	 
		{
			printf("\n[Error] This is an invalid number. You should input the number whose range is from %d to %d", MINIMUM, MAXIMUM);
			printf("\n[Retry] Try again!");
			NumValidCheck = 1;	 	
		}
	}while( NumValidCheck ); 
	return uiResult;
}

void PlayGame(UINT uiGameAnswer){
	UINT uiGameCounter = 0;		// for문에 사용될 게임 회수를 카운터
	UINT uiPredictor   = 0; 	// 실험자가 예측한 숫자 	
	for(uiGameCounter=0; uiGameCounter<GAME_NUMBER; uiGameCounter++)  
	{
		// 친절한 안내를 printf를 통해 지속적으로 보여줌.
		if(uiGameCounter == 0)
		{
			StartMessage();
		}
		

 		uiPredictor = GetNumber();
		// if-else 조건문을 통해 비교
		if(uiGameAnswer==uiPredictor)	
		{
			printf("\n\nCongratulation! You win!");
			break;	 	
		} 
		else	 
		{
			if(uiGameCounter==(GAME_NUMBER-1))
			{
				printf("\n\nYou failed!");
				break;	
			}
			
			printf("\nDon't be disappointed! You have still %d chances", (GAME_NUMBER-uiGameCounter-1));				
		}
	}
}
void StartMessage(void){
	printf("\n\nGame Start! Good luck!\n\n");
}
