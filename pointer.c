
#include <stdio.h>
#include <stdio.h>
int main()
{
int arr[]={1,2,3,4,5,'\0'};
int *ptr=arr;

for(int i=0;i<5;i++)
{
printf("%d ",*(ptr+i));
}
printf("\n");
/*for(int i=0;i<5;i++)
{
printf("%d ",*ptr++);
}
printf("\n");
*/while(*ptr != '\0')
{
printf("%d ",*ptr);
ptr++;
}
return 0;
}
