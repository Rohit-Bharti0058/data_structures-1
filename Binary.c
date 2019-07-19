#include <stdio.h>
#include <stdlib.h>

int binary(int arr[],int n,int l,int r);

int main(int argc,char *argv[])
{
int arr[argc],x=0;
for(int i=2;i<argc;i++)
{
arr[x]=atoi(argv[i]);
x++;
}
int n;
scanf("%d",&n);
int pos;
pos=binary(arr,n,0,argc-1);
printf("Position of Number is %d",pos);
}

int binary(int arr[],int n,int l,int r)
{
if(r>=l)
{
int mid;
mid=l+(r-l)/2;

if(arr[mid]==n)
return mid;

else if(arr[mid]>n)
{
return binary(arr,n,mid+1,r);
}
else
{
return binary(arr,n,l,mid-1);
}
}
}
