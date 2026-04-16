#include <stdio.h>

#define  GAME_NUMBER   5 
#define  MINIMUM       1
#define  MAXIMUM       10

typedef unsigned int UINT;     

int main(void)
{
	// -----------------------------------------------------------------------------------
	// 숫자 맞추기 게임 (제안자가 설정한 숫자를 실험자가 5번만에 맞추기)
	// -----------------------------------------------------------------------------------
	
	// (Step 1) 게임 결과를 저장할 파일 및 변수 선언! 
	UINT uiGameCounter = 0;		// for문에 사용될 게임 회수를 카운터 
	UINT uiAnswer	   = 0; 	// 제안자가 설정한 숫자 
	UINT uiPredictor   = 0; 	// 실험자가 예측한 숫자 
	bool NumValidCheck = 1;     // bool 타입은 0은 거짓, 1은 참 (보통 거짓 "0"으로 초기화)
	FILE* fp = fopen("GameResult.txt", "w"); 
	
	// (Step 2) 제안자가 숫자를 먼저 설정 (숫자의 범위는 1~10만 가능)
	while(NumValidCheck){
		printf("\nPlease, input answer: ");
		scanf("%d", &uiAnswer);
		fprintf(fp, "\nPlease, input answer: %d", uiAnswer);
		if(uiAnswer >= MINIMUM && uiAnswer <= MAXIMUM){
			NumValidCheck = 0;
		}
		else{
			printf("\n");
			fprintf(fp, "\n");
			printf("[Error] This is an invalid number. You should input the number whose range is from 1 to 10\n");
			printf("[Retry] Try again!");
			fprintf(fp, "[Error] This is an invalid number. You should input the number whose range is from 1 to 10\n");
			fprintf(fp, "[Retry] Try again!");
		}
	}
	
	printf("\n");
	fprintf(fp, "\n");
	printf("\n");
	fprintf(fp, "\n");
	printf("Game Start! Good luck!\n");
	fprintf(fp, "Game Start! Good luck!\n");
	printf("\n");
	fprintf(fp, "\n");
	printf("\n");
	fprintf(fp, "\n");
	// (Step 3) 단일 for 반복문을 통해 게임 진행 (최대 회수는 GAME_NUMBER) 
	for(uiGameCounter=0; uiGameCounter<GAME_NUMBER; uiGameCounter++)  
	{
		printf("Please, input predictor: ");
		scanf("%d", &uiPredictor);
		fprintf(fp, "Please, input predictor: %d", uiPredictor);
		printf("\n");
		fprintf(fp, "\n");
		if(uiPredictor != uiAnswer){
			if (GAME_NUMBER - uiGameCounter - 1 != 0){
				printf("Don't be disappointed! You have still %d chances\n", GAME_NUMBER - uiGameCounter - 1);
				fprintf(fp, "Don't be disappointed! You have still %d chances\n", GAME_NUMBER - uiGameCounter - 1);
			}
		}
		else{
			break;
		}
		
	}
	if(uiGameCounter == 5){
		printf("\n");
		fprintf(fp, "\n");
		printf("You failed!");	
		fprintf(fp, "You failed!");
		}
	else{
		printf("Congratulation! You win!");
		fprintf(fp, "Congratulation! You win!");
	}

	return 0;
}
