/*����n��ש��Ҫ��n��һ�ΰ��꣬�ٶ�����һ�ο��԰�4�飬Ů��һ�ο��԰�3�飬����С����1�飬������n�������ˡ�Ů�˺�С��������������������ש��n��������ܵĽ��������
�������н�����£�
50
men0
women10
children40
men5
women3
children42
���û��������������ʾ��ʾ��Ϣ��no result!��
�������н�����£�
1
no result!*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,n;
    int man=0,woman=0,children=0;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            if(7*i+5*j==n)
            {cout<<"man"<<i<<endl;
            cout<<"woman"<<j<<endl;
            cout<<"children"<<n-j-i<<endl;
            man=i,woman=j,children=n-i-j;
            }
        }
    }
    if(man+woman+children==0)
    cout<<"no result";
	return 0;
}

