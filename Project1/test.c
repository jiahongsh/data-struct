#include<stdio.h>
long long Fib(size_t n) {
	if (n < 3) {
		return 1;

	}
	return Fib(n - 1) + Fib(n - 2);
}
int main() {
	printf("%d\n", Fib(10));
	return 0;
}