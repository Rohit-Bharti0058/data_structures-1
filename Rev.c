#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
int arr[argc];
int n;int x=0;
int flag=0;
int index=0;
for(int i=2;i<argc;i++)
{
arr[x]=atoi(argv[i]);
x++;
}
scanf("%d",&n);
for(int i=0;i<argc;i++)
{
if(arr[i]==n)
{
flag=1;
index=i;
break;
}
}
if(flag==1)
{
printf("No. is at position %d ",index);
}
else
{
printf("No. does not Exists");
}
}
