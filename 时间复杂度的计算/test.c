#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){

int M = 0;
     int N = 0;
	int count = 0;
	for (int k = 0; k < M; k++) {
		++count;
	}

	for (int k = 0; k < N; k++) {
		++count;
	}
	//大o的渐进表示法
	//M远大于N->O（M）
	//N远大与M->O(N)
	//M和N差不多大->O(M) O(N)
	return 0;
}