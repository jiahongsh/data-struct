#include<iostream>
using namespace std;

void next_Get(string T, int* next) {
	int i, j;
	next[1] = 0;
	while (i < T[0]) {
		if (j == 0 || T[i] == T[j]) {
			next[i] = j;
			++i;
			++j;
		}
		else {
			j = next[i];
		}
	}
}

int Inex_KMP(string S,string T, int pos) {
	int i = pos;
	int j = 1;
	int next[255];
	next_Get(T, next);
	while (i < S[0] && j < T[0]) {
		if (j == 0 || S[i] == T[j]) {
			++i;
			++j;
		}
		else {
			j = next[j];
		}
	}
	if (j > T[0]) {//匹配成功
		return (i - T[0]);
	}
	else if (i > S[0]) {//匹配失败
         return 0;
	}
	
}