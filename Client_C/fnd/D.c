#include <stdio.h>

int main()
{
	// scanf
	// scanf (서식문자열, 변수값 참조)
	// 입력이 들어올떄까지 대기하다가 들어오면 참조한변수에 해당 입력값을 대입함

	int n;
	n = 0;
	scanf_s("%d", &n);

	// & = 참조 연산자
	// 변수 앞에 붙여서 해당변수
	printf("n : %d\n", n);
	
	float f;
	scanf_s("%f", &f);
	printf("f : %f\n", f);
	
	char str[20];
	scanf_s("%s", str, 10 * sizeof(char));

	printf("str : %s", str);

	return 0;




}