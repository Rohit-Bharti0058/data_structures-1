#include <stdio.h>
#include <stdlib.h>
int fibo(int n);
//Iteratively fibonici series using Arrays
/*void fibo(int n,int arr[]);
int main(int argc,char *argv[])
{
int arr1[argc-1];
arr1[0]=atoi(argv[1]);
int n=arr1[0];
int arr[100];
arr[0]=0;
arr[1]=1; 
fibo(n-1,arr);
}
void fibo(int n,int arr[])
{
int f,x=0;
printf("%d %d ",arr[0],arr[1]);
for(int i=1;i<n;i++)
{
arr[i+1]=arr[i]+arr[i-1];
printf("%d ",arr[i+1]);
}
}*/

//Simple Fibonicci Series
/*
int main()
{
int first=0,second=1,next,n;

scanf("%d",&n);

for(int i=0;i<n;i++)
{
if(i<=1)
next=i;
else
{
next=first+second;
first=second;
second=next;
}
printf("%d ",next);
}
}
*/

//Recursively
int main()
{
int a=0,n;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("%d\n",fibo(a));
a++;
}
}

int fibo(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return (fibo(n-1)+fibo(n-2));
}
