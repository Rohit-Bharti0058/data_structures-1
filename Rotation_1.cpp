#include <iostream>
using namespace std;
void Right_Rotation(int arr[],int k,int n);
void Print(int arr[],int n);

void Left_Rotation(int arr[],int k,int n)
{
int temp[k];
for(int i=0;i<k;i++)
{
temp[i]=arr[i];
}
for(int i=0;i<(n-k);i++)
{
arr[i]=arr[i+k];
}
for(int i=(n-k);i<n;i++)
{
static int x=0;
arr[i]=temp[x++];
}
Print(arr,n);
}
void Print(int arr[],int n)
{
cout<<"Rotated Array is : ";
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
void Right_Rotation(int arr[],int k,int n)
{
int temp[k];
for(int i=0;i<k;i++)
{
temp[i]=arr[n-k+i];
}
for(int i=0;i<(n-k);i++)
{
arr[n-1-i]=arr[n-1-i-k];
}
for(int i=0;i<k;i++)
{
static int x=0;
arr[i]=temp[x++];
}
Print(arr,n);
}
int main()
{
int n;
cout<<"Enter size of Array following by Elements :";cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int k;
cout<<endl<<"Enter Number of Rotations :";
cin>>k;
char flag;
cout<<"Enter L for Left Rotation or R for Right Rotation : ";
cin>>flag;
if(flag=='L')
Left_Rotation(arr,k,n);
else
Right_Rotation(arr,k,n);
}
