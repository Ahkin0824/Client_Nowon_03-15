#include <stdio.h>

// switch - case ���ǹ� : ��쿡 ���� �帧�� ������
// ���� : 
// switch ( ���� �Ű� ���� )
//		case ����1 : ���� �Ű����� = ����1 �ϋ� ������ ���
//		case ����2 : ���� �Ű����� = ����2 �ϋ� ������ ���
//		case ����3 : ���� �Ű����� = ����3 �ϋ� ������ ���
//		defult : �� ��

int main() {

	//n ���� 5���� ���ϴ� ����
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

	//���ĺ� �����
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