#include <iostream>
using namespace std;

int Sum(int n)
{
if(n==0)
return 0;
int s=Sum(n-1);
return n+s;
}

int main()
{
int a;
cin>>a;
cout<<"Sum of 1st "<<a<<" natural numbers is "<<Sum(a);
}
