//S为主串 T为子串
int Index_kmp(Sstring S, SString T, int next[]) {
	int j = 1;//子串的下标
	int i = 1;//主串的下标
	while (i <= S.length && i <= T.length) {
		if (j == 0 || S.ch[i] == T.ch[j]) {
			j++;
			i++;
		}
		else {
			//根据next数组j回到相应位置，避免j多次回溯浪费时间
			j = next[j];
		}

		if (j > T.length) {
			return i - T.length;//返回相同字串在主串位置的第一个字符的位置
		}
		//匹配失败，返回0
		return 0;
	}
}