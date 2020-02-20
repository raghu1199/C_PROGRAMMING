#include<stdio.h>
void prime(int n)
{
    int flag,i,j,num;
    for(i=2;i<=n;i++)
    {
        flag=0;
        num=i;
        for(j=2;j<=(num/2);j++)
        {
            if(num%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}
void main()
{
    prime(100);
    int flag,i=2,num=2,j,n;
    int count=0,prime1;
    printf("enter which prime num u want?\n");
    scanf("%d",&n);
    while(1)
    {
        num=i;
        j=2;
        flag=0;
        while(j<=(num/2))
        {
            if(num%j==0)
            {
                flag=1;
                break;
            }
            j++;
        }
        if(flag==0)
        {
            count++;
            prime1=i;
        }
        if(count==n)
        {
            break;
        }
        i++;
    }
    printf("%dth prime is:%d\n",n,prime1);

}