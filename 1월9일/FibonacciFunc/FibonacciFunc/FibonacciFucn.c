#include <stdio.h>

int Fibo(int n)
{
	printf("func call param %d \n", n);
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}													//피보나치 수열의 함수를 수학적으로 표현한것을 그대로 가져다 쓴것이다.

int main(void)
{
//	int i;
//	for (i = 1; i < 15; i++)
//		printf("%d ", Fibo(i));
//
//	return 0;

	Fibo(7);						//호출 순서를 나타낸 것. 가지치기를 한다고 생각하면 쉽게 알 수 있을 것이다.
	return 0;
}