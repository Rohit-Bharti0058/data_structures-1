#include <iostream>
using namespace std;

int fact(int n)
{
if(n==0)
return 1;
int small=fact(n-1);
return n*small;
}

int main()
{
int a;
cin>>a;
cout<<"Factorial of "<<a<<" is "<<fact(a);
}
