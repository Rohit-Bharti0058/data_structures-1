#include <iostream>
#include <cstring>
using namespace std;

int main(int argc,char *argv[])
{
char *c1=argv[1];
char *c2=argv[2];
cout<<"strings are "<<c1<<" and "<<c2<<endl; 
char *temp;
temp=c1;
c1=c2;
c2=temp;
cout<<"strings after Swaping are ";
cout<<c1<<" and  "<<c2;
}
