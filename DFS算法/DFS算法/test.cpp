#include<iostream>
using namespace std;
const int N = 10;
int line[N];//�洢��ǰ����״̬
int n;
bool flag[N];//�жϵ�ǰ���Ƿ��ù�


int arr[N] = {4,5,8,2,6,8,8,3};
void dfs(int start)
{
    if (start == n)//���������������ʱ������λ���Ѿ�������
    {
        for (int i = 0; i < n; i++)  printf("%d ", line[i]);//������
        puts("");
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!flag[i])//���û�б��ù�
        {
            line[start] =arr[i];//��¼�µ�ǰ��
            flag[i] = true;//��ʾ�Ѿ����
            dfs(start + 1);//�ݹ鵽��һ����
            flag[i] = false;//���ݻָ�
        }
    }

}

int main()
{   
    cin >> n;//����n
    dfs(0);//�ӵ�0����������
    return 0;
}