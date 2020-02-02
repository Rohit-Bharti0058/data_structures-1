#include <iostream>

using namespace std;

void TOH(char a,char b,char c,int n)//a as source,b as helper,c as destination and n as No. of discs to move
{
if(n==1)
{
cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
return;
}
TOH(a,c,b,n-1);
cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
TOH(b,a,c,n-1);
}
int main()
{
char a,b,c;
int n;
cin>>n;
TOH('a','b','c',n);
}
