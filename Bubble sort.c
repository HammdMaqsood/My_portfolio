#include<stdio.h>
int main()
{
    int arr[7]={5,9,1,2,7,6,5};
    int temp;
    int i, j;
    for(i=0;i<7;i++)
    {
        for(j=0;j<7-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int l=0;l<7;l++)
    {
        printf("%d,",arr[l]);
    }
    return 0;
}
