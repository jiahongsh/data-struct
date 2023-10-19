#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int  Fib(int N) {
if (N < 3) {
	return 1;
	}
return Fib(N - 1) + Fib(N - 2);
}
int main() {
int N = 0;
scnaf("%d", &N);
Fib(N);


	return 0;
}//                       Fib(N)
//           Fib(N - 1)              Fib(N - 2)
//  Fib(N - 2)       Fib(N - 3)  Fib(N - 3)    Fib(N - 4)
//..............
//时间复杂度为 Fib(N)=2^0+2^1+....+2^n-1-x;