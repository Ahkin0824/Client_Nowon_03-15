#include <stdio.h>

// if�� : Ư�� ������ ��/���� ���ο� ���� �帧�� ������
// ���� : if (����) { ������ ���϶� ������ ���� }


//if else��
// ���� : if (����) {������ ���ϋ� ������ ����}
//        else { ������ �����ϋ� ������ ���� }


int main(void) {

	int isTrue = 0;
	
	if (1) {
		printf("this is true");
	}
	else{
		printf("this is false");
	}

	int num = 0;

	if (num == 0) {
		printf("this is 0");
	}
	else if (num == 1) {
		printf("this is 1");
	}
	else if (num == 2) {
		printf("this is 2");
	}
	else{
		printf("i don't now this number");
	}
	

}