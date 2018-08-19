#include<iostream>
#include<cmath>
#include<cstring>
#include<stdio.h>
#include<set>
using namespace std;
int main()
{
    set<int> st;
    st.insert(6);
    st.insert(6);
    st.insert(6);
    st.insert(6);
    for(int i=0;i<5;i++)
    {
        st.insert(i);
    }
    for(set<int>::iterator it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    set<int>::iterator it_2=st.find(2);
    cout<<*it_2;
	return 0;
}

