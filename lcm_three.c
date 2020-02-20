#include<stdio.h>
int lcm(int a,int b)
{
    int max,lcm,i,temp;
    max=a>b?a:b;
    for(i=max;i<=(a*b);i++)
    {
        temp=i;
        if(temp%a==0 && temp%b==0)
        {
            lcm=temp;
            break;
        }
    }
    return lcm;
}
void main()
{
    int a,b,c,res1,l;
    printf("enter three nums:\n");
    scanf("%d %d %d",&a,&b,&c);
    res1=lcm(a,b);
    l=lcm(res1,c);
    printf("lcm of %d,%d,%d is:%d\n",a,b,c,l);


}