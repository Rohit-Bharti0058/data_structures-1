#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc,char *argv[])
{
int arr[argc-1];
int y=0,j=0;
for(int i=1;i<argc;i++)
{
arr[y]=atoi(argv[i]);
y++;
}

for(int i=1;i<argc-1;i++)
{
int temp=arr[i];
j=i-1;
while(temp<arr[j] && j>=0)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=temp;
}
for(int i=0;i<argc-1;i++)
cout<<arr[i]<<" ";
}

