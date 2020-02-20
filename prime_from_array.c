#include<stdio.h>
void printArray(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}
void main()
{
    int a[]={5,6,7,9,12,13,17,19,18};
    int size=sizeof(a)/sizeof(int);
    int prime[size];
    int flag,k=0;
    for(int i=0;i<size;i++)
    {
        flag=0;
        for(int j=2;j<=(a[i]/2);j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            prime[k]=a[i];
            k++;
        }
    }
    printf("given aray:\n");
    printArray(a,size);
    printf("primes from above array:\n");
    printArray(prime,k);
    
}