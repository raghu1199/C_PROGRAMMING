#include<stdio.h>
void main()
{
     int size,arr[100],sLargest,sSmallest,fLargest,fSmallest;
    printf("enter size of arry\n");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    fLargest=sLargest=arr[0];
    fSmallest=sSmallest=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>fLargest)
        {
            sLargest=fLargest;
            fLargest=arr[i];
        }
        else if(arr[i]>sLargest && arr[i]!=fLargest)
        {
            sLargest=arr[i];
        }
        if(arr[i]<fSmallest)
        {
            sSmallest=fSmallest;
            fSmallest=arr[i];
        }
        else if(arr[i]<sSmallest && arr[i]!=fSmallest)
        {
            sSmallest=arr[i];
        }
    }

    printf("SecondLargest:%d \t\tSecondSmallest:%d\n",sLargest,sSmallest);
}