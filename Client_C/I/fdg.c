#include <stdio.h>

// for : Ư�� ���ǿ� ���� �ݺ��ϸ鼭 �ݺ� �ҋ����� Ư�� �Լ��� ������ �� �ִ� �ݺ���
// ���� : for�ʱⰪ: ���ǽ�: ������){ ������ ���ϋ� ������ ���� {
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