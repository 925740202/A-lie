#include<iostream>
#include<cmath>
using namespace std;
void mystrrev(char str[])
{
  char str1[101];
  int i=0;
  while(str[i]!='\0')
  {
      i++;
  }
  for(;i-1>=0;i--)
  {
      cout<<str[i-1];
  }
//  int j;
//  for(j=0;i-1>=0;i--,j++)
//  {
//      str1[j]=str[i-1];
//  }
//   str1[j+1]='\0';
//    cout<<str1;
}
int main()
{
    const int N=101;
    char str[N];
    cout<<"请输入需要反转的字符串："<<endl;
    cin.getline(str,N);
    cout<<"反转后的字符串为："<<endl;
    mystrrev(str);
	return 0;
}

