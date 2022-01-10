#include<stdio.h>
int main(void) {
	int a = 1000;
	//포인터 변수 b는 a를 가리킨다
	int* b;
	b = &a; //포인터 변수가 누구를 가리키는지 확실하게 알아야함 *중요
	*b += 50;
	printf("a=%d, *b=%d\n", a, *b);

	int num, tmp = 0, * ptr;
	ptr = &num; //num의 주소가 들어있다
	num = 100;
	printf("num=%d, tmp=%d, *ptr=%d\n", num, tmp, *ptr);
	tmp = ++(*ptr); //101
	printf("tmp=%d, num=%d, *ptr=%d\n", tmp, num, *ptr);
	//*ptr++; //우선순위가  ++가 높다
	(*ptr)++; //포인터 변수의 값 1증가
	printf("tmp=%d, num=%d, *ptr=%d\n", tmp, num, *ptr);
	system("pause");
}