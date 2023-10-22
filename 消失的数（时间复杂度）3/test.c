#include<stdio.h>

int main() {
	int arr[10] = { 0,2,4,6,1,8,7,5 };
	int i = 0;
	int x = 0;
	for (i = 0; i <= 8; i++) {
		x ^= i;
	}
	for (i = 0; i < 8; i++) {
		x ^= arr[i];
	}
	printf("%d\n", x);
}
//该算法的时间复杂度为o(N),空间复杂度为O(1)