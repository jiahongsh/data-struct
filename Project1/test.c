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
//斐波那契数列的递归算法在计算过程中指数爆炸，在实际生活中是一个完全没有用的算法。