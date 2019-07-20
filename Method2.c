

#include <stdio.h>
#include <stdlib.h>
void Rot(int arr[],int n,int l);
int main(int argc,char *argv[])
{
int arr[argc-1];
int x=0;
//int length=sizeof(arr)/sizeof(arr[0]);
for(int i=1;i<argc;i++)
{
arr[x]=atoi(argv[i]);
x++;
}
int l;
scanf("%d",&l);
Rot(arr,x,l);
}
void Rot(int arr[],int size,int No_of_Rotations)
{
int r=size-No_of_Rotations;
int temp[No_of_Rotations];
int p=size-1;
for(int i=0;i<No_of_Rotations;i++)
{
temp[i]=arr[size-No_of_Rotations+i];
}
for(int i=0;i<r;i++)
{
arr[p]=arr[p-No_of_Rotations];
p--;
}
for(int i=0;i<No_of_Rotations;i++)
{
arr[i]=temp[i];
}
for(int i=0;i<size;i++)
{
printf("%d ",arr[i]);
}
}
