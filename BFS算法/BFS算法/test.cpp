//有N*N像素的海域图，.表示海域，#表示岛屿。
// 由于全球变暖，岛屿边缘像素会被海水淹没，
// 如果一块陆地像素与海洋相邻，它就会被淹没。
//请计算有多少个岛屿会被完全淹没

#include<iostream>
#include < queue >

using namespace std;
#define  N 1010
int d[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
char mp[N][N];
int vis[N][N];
int flag;

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x, y });//将岛屿点入队
	vis[x][y] = 1;
	while (q.size()) {
		pair<int, int> t = q.front();
		q.pop();
		int tx = t.first;
		int ty = t.second;
		if (mp[tx][ty + 1] == '#' && mp[tx][ty - 1] == '#' &&
			mp[tx + 1][ty] == '#' && mp[tx - 1][ty] == '#') {
			flag = 1;//此陆地不会被淹没
		}

		//向四周扩展四个邻居
		for (int i = 0; i < 4; i++) {
			int nx = tx+d[i][0];  
			int ny = ny+d[i][1];
			if (vis[nx][ny] == 0 && mp[nx][ny] == '#') {
				q.push({ nx,ny });
				vis[nx][ny] = 1;

			}
		}
	}

}
int main() 
{
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (mp[i][j] == '#' && vis[i][j] == 0) {
				bfs(i, j);
				if (flag == 0) {//flag==0,有一个岛屿被淹没
					ans++;
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}