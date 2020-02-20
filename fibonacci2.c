#include<stdio.h>
void main()
{
    int t1=0,t2=1,next=t1+t2,n;
    printf("enter num till fibonacci u want\n");
    scanf("%d",&n);
    while(next<=n)
    {
        printf("%d ",next);
        t1=t2;
        t2=next;
        next=t1+t2;
    }

}