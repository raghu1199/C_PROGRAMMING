#include<stdio.h>
int gcd(int n1,int n2)
{
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
                n2=n2-n1;
        } 
    }
    return n1;
}
void main()
{
    int a,b,c,gcd1,gcd2;
printf("enter threee num:\n");
scanf("%d %d %d",&a,&b,&c);
gcd1=gcd(a,b);
gcd2=gcd(gcd1,c);
printf("gcd of %d %d %d is:%d\n",a,b,c,gcd2);


}