#include <iostream>
#include <stdlib.h>
using namespace std;

void swap1(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main(int argc,char *argv[])
{
int arr[argc-1];
int x=0,y=0;
for(int i=1;i<argc;i++)
{
arr[y]=atoi(argv[i]);
y++;
}
int mindex;
for(int i=0;i<argc-1;i++)
{
mindex=i;
for(int j=i+1;j<argc-1;j++)
if(arr[j]<arr[mindex])
mindex=j;

swap1(&arr[mindex],&arr[i]);
}


for(int i=0;i<argc-1;i++)
cout<<arr[i]<<" ";
}

