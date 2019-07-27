#include <iostream>
#include <cstring>

using namespace std;

int main(int argc,char *argv[])
{
char *c1=argv[1];
char *c2=argv[2];

int l=strcmp(c1,c2);

if(l==0)
cout<<"String are Same";
else
cout<<"Strings are not same";

}
