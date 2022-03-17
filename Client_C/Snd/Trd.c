#include <stdio.h>


int main(void) {

	//키워드 (예약어)
	// '지료형' '식별자이름(변수이름)'
	// 변수 이름으로 키워드는 사용할수 없다(대소문자 구별가능)

	int STR = 10;
	int DEX = 5;
	int CON = 10;
	int INT = 5;

	// 정수형 변수
	int a; // 4byte, 부호가 있는 정수 자료형
	//un signed : 다른자료형에도 앞에 붙어서 부호있는 형태로 사용가능
	unsigned int ua; //4byte 부호가 없는 정수 자료형
	short s; // 2byte, 부호가 있는 정수 자료형
	long l; // 4byte, 부호가 있는 정수 자료
	long long ll; // 8byte, 이상, 부호가 있는 정수 자료형
	char c; // 1byte(대부분), 문자 자료형


	// = : 대업연산자 오른쪽에있는 값을 왼쪽에 있난 변수에 대입하는 연산자
	// 초기화 : 선언된 변수에 가장 처음으로 값을 대입하는 행위
	printf("%d\n", STR);

	a = 4;
	ua = 0;
	s = 1232; 
	c = 1232; // -128 ~ 128 까지가 한계 한계를 넘을시 오버플로우 즉 처음으로 돌아가게됨
	
	printf("%d\n", a);
	printf("%d\n", ua);
	printf("%d\n", s);
	printf("%d\n", c);

	// 변수 선언과 동시에 초기화
	int a2 = 3;

	// 실수형 변수 선언
	float f; //4byt, 부호가 있는 실수 자료형
	double d; // 8byte, 부호가 있는 실수 자료형
	long double ld;, // 8byte이상 , 운영 체대에 따라 다름





}