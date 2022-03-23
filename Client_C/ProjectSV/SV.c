#include <stdio.h>

// switch - case 조건문 : 경우에 따라 흐름을 제어함
// 형태 : 
// switch ( 조건 매개 변수 )
//		case 조건1 : 조건 매개변수 = 조건1 일떄 실행할 경우
//		case 조건2 : 조건 매개변수 = 조건2 일떄 실행할 경우
//		case 조건3 : 조건 매개변수 = 조건3 일떄 실행할 경우
//		defult : 그 외

int main() {

	//n 부터 5까지 더하는 문장
	int n = 3;
	int sum = 0;
	
	switch (n)
	{
	case 1:
		sum += 1;
	case 2:
		sum += 2;
	case 3:
		sum += 3;
	case 4:
		sum += 4;
	case 5:
		sum += 5;
		default:
			break;
	}
	printf("%d\n", sum);

	//알파벳 불흐기
	char character = 'A';
	switch (character)
	{
	case 'A':
		printf("%c says : I'm here! \n", character);
		break;
	case 'B':
		printf("%c says : I'm here! \n", character);
		break;
	case 'C':
		printf("%c says : I'm here! \n", character);
		break;
	case 'D':
		printf("%c says : I'm here! \n", character);
		break;
	default:
		printf("Who r you ? %c \n", character);
		break;
	}

}