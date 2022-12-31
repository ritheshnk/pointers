#include<stdio.h>
#include<stdlib.h>

int main()
{
    int temp=5;
    int *ptr=temp;

    printf("\t Address \t name \t value\n");
    printf("\t %p \t Temp \t %d \n",ptr,temp);
    printf("\t %p \t ptr \t %p \n",&ptr,ptr);
    printf("\t *ptr= %d",ptr);
}

/* temp is just a variable and ptr stores the address pf the variable 
ptr containsa address of the variable *ptr contains the reference to temp value
*/