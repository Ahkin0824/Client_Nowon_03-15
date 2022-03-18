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
	long double ld; // 8byte이상 , 운영 체대에 따라 다름

	f = 1.23456789123456789123456789;
	d = 1.23456789123456789123456789;
	ld = 1.23456789123456789123456789;


	printf("%.30f\n", f);
	printf("%.30lf\n", d);
	printf("%.30Lf\n", ld);



	//배열

	//---------------------------------------------
	int arrlx_1[3] = { 1, 2, 3 };
	int arrlx_2[3] = { 1, 2, };
	double arrlx_3[3] = { 4.4, 5.5, 6.2 };

	printf("%d\n", arrlx_1[0]);
	printf("%d\n", arrlx_1[1]);
	printf("%d\n", arrlx_1[2]);

	// 2차원 배열
	short arr2x_1[4][3] = { {1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{0, 1, 2} };
	short arr2x_2[2][3] = { 1, 2, 3, 4, 5, 6, };
	short arr2x_3[][2] = { 1, 2, 3, 4, 5, 6, 7 };
	// 1 3 5 7
	// 2 4 6 ? ( ? = 0 )   

	printf("%d\n", arr2x_3[0][1]); // 배열이름[열 인덱스][행 인덱스]
	//short arr2x_4[2][] = { 1, 2, 3, 4, };  는 error
	//배열은 초기화할때 열의 크기를 정해주면
	//컴파일러가 배열의 크기는 알아서 확보한다

	//문자열 ( 문자의 배열 )
	//문자열은 배열 마지막에 null 문자가 붙는다.
	//-------------------------------------------
	char str1[20] = "hello";
	char str2[6] = "hello";
	char str3[5] = "hello"; // null 문자가 들어갈 공간이 확보되지 않음
	char str4[] = "hello";
	char str5[6] = { 'h', 'e', 'l', 'l', 'o', '\0' };

	printf("%c\n", str5[0]);
	printf("%s\n", str5);

	//함수 호출 형태
	//함수이름 (인자);

	//strcpy(문자열 값)
	printf("%d\n", strlen(str1));
	printf("%d\n", strlen("I don't now you"));
	// strcmp(문자열값1, 문자열값2) :문자열을
	//문자열값1이 더 크면 양수 변환, 같으면 0 반환, 적으면 -1 반환


}