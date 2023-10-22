#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//使时间复杂度为O(N)
int main() {
	int arr[9] = { 8,4,3,2,1,0,7,6};
	//qsort()时间复杂度为NlogN，时间复杂度不满足
	//算出0到n所有数的和，再算数组中所有数的和，再做差即可算出缺失的数
	int count = 0;
	int i = 0;
	int a= 0;
	for (i = 0; i < 9; i++) {
		count += i;
		a += arr[i];
	}
	int n = count - a;
	printf("%d\n", n);
	return 0;
}