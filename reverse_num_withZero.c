#include<stdio.h>
void main()
{
    int revnum[30],rem,num,i;
    printf("enter num\n");
    scanf("%d",&num);
    i=0;
    while(num>0)
    {
        rem=num%10;
        revnum[i]=rem;
        num=num/10;
        i++;
    }
    printf("reversed num is:\n");
    for(int j=0;j<i;j++)
    {
        printf("%d",revnum[j]);
    }
}