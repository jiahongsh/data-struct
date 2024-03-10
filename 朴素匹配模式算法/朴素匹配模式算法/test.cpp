#include<iostream>

using namespace std;

//默认数组的0位置不存数据
//s1为主串
//字符串的0位置存储字符串的长度
int Index(string s1, string s2, int pos) {
	int  i = pos;
	s1[0] = s1.size();
	s2[0] = s2.size();

	int j = 1;
	while (i <= s1[0] && j <= s2[0]) {
		if (s1[i] == s2[j]) {
			++i;
			++j;
		}
		else {
			i = i - j + 2;//返回下一个开始匹配的地方
			j = 1;

		}
	}
	if (j > s2[0]) {
		return i - s2[0];//返回当前子串在主串中的起始位置；
	}
}
