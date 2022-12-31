#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[]={1,2,3,4,5};
    int i;

    printf("\t Array Index \t Address \t value\n");
    for(i=0;i<5;i++)
    {
        printf("\t arr[%d] \t %p \t %d\n",i,&arr[i],arr[i]);
    }


}