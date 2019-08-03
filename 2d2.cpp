#include <iostream>
#define M 4
#define N 4
using namespace std;
void Rotate(int arr[M][N],int r,int c);
int main()
{
int arr[M][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
for(int i=0;i<M;i++)
{
cout<<endl;
for(int j=0;j<N;j++)
cout<<arr[i][j]<<" ";
}
Rotate(arr,M,N);
}
void Rotate(int arr[M][N],int r,int c)
{
int prev=0,curr=0;
int rp=0,cp=0;

while(rp<r && cp<c)
{

prev=arr[rp+1][cp];
for(int i=cp;i<c;i++)
{
curr=arr[rp][i];
arr[rp][i]=prev;
prev=curr;
}
rp++;
for(int i=rp;i<r;i++)
{
curr=arr[i][c-1];
arr[i][c-1]=prev;
prev=curr;
}
c--;

if(rp<r)
{
for(int i=c-1;i>=cp;i--)
{
curr=arr[r-1][i];
arr[r-1][i]=prev;
prev=curr;
}
r--;
}

if(cp<c)
{
for(int i=r-1;i>=rp;i--)
{
curr=arr[i][cp];
arr[i][cp]=prev;
prev=curr;
}
cp++;
}
}

for(int i=0;i<M;i++)
{
cout<<endl;
for(int j=0;j<N;j++)
{
cout<<arr[i][j]<<" ";
}
}

} 
