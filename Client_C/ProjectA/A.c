#include <stdio.h>

// while : Ư�� ���ǿ� ���� ������ �ݺ� ����
// ���� : while(����) { ������ ���϶� �ݺ��� ���� }


int main(void) {

	//������ �׻� ���� �ݺ����� ���ѷ�Ʈ �����
	while (0)
	{
		printf("ahahahahah1111");
		continue; // �б⹮, ���� ����� �ݺ����� ã�Ƽ� �ش� �ݺ����� ���� ���ٷ� ���ư�
		printf("ahahahahah2222");
	}
	printf("while statement is over\n");

	int count = 0;
	while (count < 5)
	{
		printf("while count : %d\n", count);
		count++;
	}
	printf("while statement is over\n");
	
	do {
		printf("do while test");
	} while (0);
	
	
	
	
	
	return 0;
}