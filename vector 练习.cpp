#include<iostream>
#include<cmath>
#include<cstring>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> vi;
    for(int i=0;i<=5;i++)
    {
        vi.push_back(i);
    }
    vector<int>::iterator it=vi.begin();
    for(int i=0;i<=5;i++)
    {
        cout<<*(it+i)<<" ";
    }
	return 0;
}

