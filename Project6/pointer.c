#include<stdio.h>
int main(void) {
	int a = 1000;
	//������ ���� b�� a�� ����Ų��
	int* b;
	b = &a; //������ ������ ������ ����Ű���� Ȯ���ϰ� �˾ƾ��� *�߿�
	*b += 50;
	printf("a=%d, *b=%d\n", a, *b);

	int num, tmp = 0, * ptr;
	ptr = &num; //num�� �ּҰ� ����ִ�
	num = 100;
	printf("num=%d, tmp=%d, *ptr=%d\n", num, tmp, *ptr);
	tmp = ++(*ptr); //101
	printf("tmp=%d, num=%d, *ptr=%d\n", tmp, num, *ptr);
	//*ptr++; //�켱������  ++�� ����
	(*ptr)++; //������ ������ �� 1����
	printf("tmp=%d, num=%d, *ptr=%d\n", tmp, num, *ptr);
	system("pause");
}