#include<iostream>
using namespace std;
const int N = 10;
int line[N];//存储当前搜索状态
int n;
bool flag[N];//判断当前点是否被用过


int arr[N] = {4,5,8,2,6,8,8,3};
void dfs(int start)
{
    if (start == n)//当我们搜索到最后时，所有位置已经填满了
    {
        for (int i = 0; i < n; i++)  printf("%d ", line[i]);//输出结果
        puts("");
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!flag[i])//如果没有被用过
        {
            line[start] =arr[i];//记录下当前数
            flag[i] = true;//表示已经填过
            dfs(start + 1);//递归到下一个数
            flag[i] = false;//回溯恢复
        }
    }

}

int main()
{   
    cin >> n;//输入n
    dfs(0);//从第0个数来搜索
    return 0;
}