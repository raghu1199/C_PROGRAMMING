#include<stdio.h>
int digits(int num)
{
    int i=0;
    while(num>0)
    {
        num=num/10;
        i++;
    }
    printf("total digits:%d\n",i);
    return i;
}
int powD(int rem,int no_ofdigits)
{
    int base=1;
    for(int i=0;i<no_ofdigits;i++)
    {
        base=base*rem;
    }
    printf("%d * %d:%d\n",rem,no_ofdigits,base);
    return base;
}
void main()
{
    int rem,sum=0,pow,d,num,n;
    printf("enter num:\n");
    scanf("%d",&num);
    n=num;
    d=digits(num);
    while(num>0)
    {
        rem=num%10;
        pow=powD(rem,d);
        sum=sum+pow;
        num/=10;
    }
    if(sum==n)
    {
        printf("sum of power of digits is:%d\n",sum);
        printf("%d is Armstrong number\n",n);
    }
    else
    {
        printf("%d is NOT armstrong number\n",n);
    }
    
}