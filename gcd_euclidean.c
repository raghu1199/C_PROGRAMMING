#include<stdio.h>
int gcd(int a,int b)
{
    int max,min;
    int rem;
    max=a>b?a:b;
    min=a<b?a:b;

    while(min!=0)
    {
        rem=max%min;
        max=min;
        min=rem;
    }
    return max;
}
void main()
{
    int a,b,c,g1,g2;
printf("enter three nums:\n");
scanf("%d %d %d",&a,&b,&c);
g1=gcd(a,b);
g2=gcd(g1,c);
printf("gcd is:%d\n",g2);
}