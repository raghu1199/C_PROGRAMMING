#include<stdio.h>
void main()
{
    int age;
    printf("enter age\n");
    scanf("%d",&age);
    if(age<18)
    {
        printf("You are not elible for voting");
    }
    else 
    {
        printf("Now you can vote");
    }
    
    

}