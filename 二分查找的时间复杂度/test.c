#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int low = 0;
	int high = 8;
	int mid = (low + high) / 2;
	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	int n = 0;
	printf("请输入查找数：");
	scanf("%d", &n);
	while (low != high) {
		if (arr[mid] == n) {
			printf("%d\n", n);
			break;
		}
		else if (arr[mid] > n) {
			high= mid;
			mid = (low + high) / 2;
		}
		else if (arr[mid] < n) {
			low = mid;
			mid = (low + high) / 2;
		}
	}
	printf("未找到查找数\n");
	return 0;
}
//有2个数，1*2*2*2...=N
//2^x=N
//x=logN;
//O(N)=logN;