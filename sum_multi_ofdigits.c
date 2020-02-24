#include<stdio.h>
void main()
{
    int num,sum=0,multi=1,rem,n;
    printf("enter a num\n");
    scanf("%d",&num);
    n=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        multi=multi*rem;
        num=num/10;
    }
    printf("sum of digits:%d\nmultiplication of digits:%d\n",sum,multi);
}