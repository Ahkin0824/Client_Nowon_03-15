#include <stdio.h>

// for : 특정 조건에 따라 반복하면서 반복 할떄마다 특정 함수를 수정할 수 있는 반복문
// 형태 : for초기값: 조건식: 증감식){ 조건이 참일떄 실행할 내용 {
int main(void) {

	for (int i = 0; ; i++)
	{
		if (i < 5) {
			printf("%d", i);
			continue;
		}
		else {
			printf("\n");
		}
		if (1 > 10) {
			printf("index is bigger than 10, exit for loop");
			break;
		}
		printf("for loop is on going");
	}


}