#include<stdio.h>

int main() {
	int arr[10] = { 1,1,2,2,2,3,3,3,4,4};
	int*des = arr;
	int* k = arr;
	int* j = arr;
	int i = 0;
	for (i = 0; i < 10; i++) {
		if (k == j) {
			j++;
			*des =* j;
		}
		else if (k != j) {
			des++;
			i = j;
		}
	}
	return 0;
}
	//无建立新空间，空间复杂度为O（1）
    //遍历一次数组，时间复杂度为O(N)
