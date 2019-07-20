
#include <stdio.h>
#include <stdlib.h>
void Rot(int arr[],int n,int l);
int main(int argc,char *argv[])
{
int arr[argc];
int x=0;
//int length=sizeof(arr)/sizeof(arr[0]);
for(int i=2;i<argc;i++)
{
arr[x]=atoi(argv[i]);
x++;
}
int l;
scanf("%d",&l);
Rot(arr,x,l);
}
void Rot(int arr[],int n,int l)
{
int last;
for(int i=0;i<l;i++)
{
last=arr[n-1];
for(int j=n-1;j>0;j--)
{
arr[j]=arr[j-1];
}
arr[0]=last;
}

for(int i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
