#include <stdio.h>
#include <windows.h>

#define  GAME_NUMBER   15 // 숫자의 범위가 커짐에 따라서 5로 해두면 맞출 가능성이 희박하므로 15로 늘림 
#define  MINIMUM       1
#define  MAXIMUM       50 // 숫자의 범위를 50까지 늘림 

typedef unsigned int UINT;     

//콘솔 창의 크기와 제목을 지정하는 함수
//콘솔 창의 제목은 이 게임의 이름인 Guess the number로 지정하였음. 
void SetConsoleView()
{
	system("mode con:cols=130 lines=25");
	system("title Guess the number.");
}
//마우스 포인터라고 생각하면 편한 함수
//실행창에서는 마우스가 되진 않지만, 만약 어떤 그림을 그리게 될 경우에는
//왼쪽 맨위부터 시작하므로 어디서 부터 시작할것인지 지정하는 함수이다. 
void GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = 2 * x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

//게임 시작 화면 그려줌 
void DrawGamestart(void)
{
	system("cls"); //실행창에 나와있는 모든것 클리어 
	int x = 23;
	int y = 8;
	GotoXY(x, y);
	printf("====================================");
	GotoXY(x, y + 1);
	printf("======Game of Guess the number======");
	GotoXY(x, y + 2);	
	printf("====================================");
	GotoXY(19, y + 10);
	printf("There are two easter eggs in this game. Good Luck!");
	printf("\n\n\n\n\n\n\n\n\n");
	system("pause");
}

int main(void)
{
	// -----------------------------------------------------------------------------------
	// 숫자 맞추기 게임 (제안자가 설정한 숫자를 실험자가 5번만에 맞추기)
	// -----------------------------------------------------------------------------------
	
	SetConsoleView(); //콘솔 창의 크기와 제목을 지정하는 함수 호출
	
	DrawGamestart(); //게임 시작 화면 그려주는 함수 호출 

	system("cls"); //실행창에 나와있는 모든것 클리어 
	
	// (Step 1) 게임 결과를 저장할 파일 및 변수 선언! 
	UINT uiGameCounter      = 0;	// for문에 사용될 게임 회수를 카운터 
	UINT uiAnswer	        = 0; 	// 제안자가 설정한 숫자 
	UINT uiPredictor        = 0; 	// 실험자가 예측한 숫자
	UINT uieastereggCounter = 0;    // 이스터에그에 사용될 회수를 카운트 하는 변수 
	bool NumValidCheck      = 1;    // bool 타입은 0은 거짓, 1은 참 (보통 거짓 "0"으로 초기화)
	FILE* fp = fopen("GameResult.txt", "w"); 
	
	// (Step 2) 제안자가 숫자를 먼저 설정 (숫자의 범위는 1~50만 가능) 
	while(NumValidCheck){
		uieastereggCounter += 1; // while 문을 한번 돌때마다 이스터에그 카운터는 1증가 
		printf("\nPlease, input answer: ");
		scanf("%d", &uiAnswer);
		fprintf(fp, "\nPlease, input answer: %d", uiAnswer);
		if(uiAnswer >= MINIMUM && uiAnswer <= MAXIMUM){
			NumValidCheck = 0;
		}
		else if (uieastereggCounter < 15 && (uiAnswer <= MINIMUM || uiAnswer >= MAXIMUM) && uiAnswer != 77){
			printf("\n");
			fprintf(fp, "\n");
			printf("[Error] This is an invalid number. You should input the number whose range is from 1 to 50\n");
			printf("[Retry] Try again!\n");
			fprintf(fp, "[Error] This is an invalid number. You should input the number whose range is from 1 to 50\n");
			fprintf(fp, "[Retry] Try again!\n");
		}
		else if (uiAnswer == 77){ // 77이라는 숫자는 운이 좋은 숫자로 알려져있는 경우가 많으므로 이스터에그로 넣었음. 
			printf("\nYou seem to be in a good mood!");
			fprintf(fp, "\nYou seem to be in a good mood!");
			printf("It's a nice number but you should input the number whose range is from 1 to 50\n\n"); // 이스터에그 1
			fprintf(fp, "It's a nice number but you should input the number whose range is from 1 to 50\n\n"); // 이스터에그 1
			printf("[Error] This is an invalid number. You should input the number whose range is from 1 to 50\n\n");
			printf("[Retry] Try again!\n");
			fprintf(fp, "[Error] This is an invalid number. You should input the number whose range is from 1 to 50\n\n");
			fprintf(fp, "[Retry] Try again!\n"); 
		}
		else if (uieastereggCounter >= 15){ // 사용자가 악의적인 사용자라고 가정했을때, 그 사용자는 1 ~ 50 까지의 숫자를 넣지 않을것이기에, 만약 15번 넘게 정답을 범위 밖의 값을 입력했을경우 등장하는 이스터에그. 
			printf("\nPlease... Please don't bother me....\n"); // 이스터에그 2
			fprintf(fp, "\nPlease... Please don't bother me....\n"); // 이스터에그 2
			printf("\n");
			fprintf(fp, "\n");
			printf("[Error] This is an invalid number. You should input the number whose range is from 1 to 50\n\n");
			printf("[Retry] Try again!\n");
			fprintf(fp, "[Error] This is an invalid number. You should input the number whose range is from 1 to 50\n\n");
			fprintf(fp, "[Retry] Try again!\n");
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
				if(uiPredictor > uiAnswer){ // 숫자 범위가 크므로 원래 정답보다 큰지 작은지 판단하여 출력 
					printf("Your predict number is bigger than answer.\n");
					fprintf(fp, "Your predict number is bigger than answer.\n");
				}
				else{
					printf("Your predict number is smaller than answer.\n");
					fprintf(fp, "Your predict number is smaller than answer.\n");
				}
			}
		}
		else{
			break;
		}
		
	}
	if(uiGameCounter == 15){
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
