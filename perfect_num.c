#include<stdio.h>
void  main()
{
    int sum=0,i,num,j=0;
    int bin[40];
    printf("enter num to check perfect or not?\n");
    scanf("%d",&num);
    i=1;
    while(i<=(num/2))
    {
        if(num%i==0)
        {
            sum+=i;
            bin[j]=i;
            j++;
        }
        i++;
    }
    if(num==sum)
    {
        printf("this is perfect number and its divisors are\n");
        for(int i=0;i<j;i++)
        {
            printf("%d ",bin[i]);
        }
        printf("\n");
    }
    else{
        printf("Not a perfect number\n");
    }
}