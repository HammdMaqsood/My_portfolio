#include<stdio.h>
int main()
{
    int arr[2][3];
    int coloumn=0;
    int row=1;
    int i;
    for(i=0;i<7;i++)
    {
        printf("Enter Row no %d and coulumn no %d: ",row,coloumn);
        scanf("%d",&arr[row][coloumn]);
        coloumn=coloumn+1;
        if(coloumn==3)
        {
            coloumn=0;
            row=2;
        }
    }
    coloumn=0;
    row=1;
    int j=0;
    for(j=0;j<7;j++)
    {
        printf(" \n \nYour entered value in  Row no %d and coulumn no %d is = %d ",row,coloumn,arr[row][coloumn]);
        coloumn=coloumn+1;
        if(coloumn==4)
        {
            coloumn=0;
            row=2;
        }
        printf("\n");
    }
    return 0;
}
