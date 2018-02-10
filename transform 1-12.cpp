#include<iostream>
#include<cmath>
#include<string>
using namespace std;
const char *number_name(int n)
{
    const char *number[]={                         //常量字符型数组
    "illegal number",                             //invalid number
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    "ten",
    "eleven",
    "twelve"};
    return (n>0&&n<12)?number[n]:number[0];
}
int main()
{
    int n;
    cin>>n;
    cout<<n<<"-"<<number_name(n)<<endl;
	return 0;
}

