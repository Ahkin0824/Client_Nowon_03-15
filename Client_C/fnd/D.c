#include <stdio.h>

int main()
{
	// scanf
	// scanf (���Ĺ��ڿ�, ������ ����)
	// �Է��� ���Ë����� ����ϴٰ� ������ �����Ѻ����� �ش� �Է°��� ������

	int n;
	n = 0;
	scanf_s("%d", &n);

	// & = ���� ������
	// ���� �տ� �ٿ��� �ش纯��
	printf("n : %d\n", n);
	
	float f;
	scanf_s("%f", &f);
	printf("f : %f\n", f);
	
	char str[20];
	scanf_s("%s", str, 10 * sizeof(char));

	printf("str : %s", str);

	return 0;




}