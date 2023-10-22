#include<stdio.h>

int main() {
	int arr1[10] = { 2,1,0,4,6,8,5 };
	int arr2[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {

		arr2[arr1[i]] = arr1[i];
	
	}
	for (i = 0; i < 10; i++) {
		if ((arr2[i]) == 0 && (i != 0)) {
			printf("%d\n", i);
			break;
		}
	}
	
	return 0;
}//该算法的时间复杂度为O(N)，空间复杂度也为O(N)