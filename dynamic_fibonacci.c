#include<stdio.h>
int dynamic_fibo(int term)
{
    int f[term+2];
    int i;
    f[0]=0;
    f[1]=1;
    for(i=2;i<=term;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    printf("fibonacci sequence upto %d term:\n",term);
    for(int i=0;i<=term;i++)
    {
        printf("%d ",f[i]);
    }
    return f[term]; 
}
void main()
{
    int term,value;
    printf("enter fibo term u want\n");
    scanf("%d",&term);
    value=dynamic_fibo(term);
    printf("%dth term value is:%d \n",term,value);
}