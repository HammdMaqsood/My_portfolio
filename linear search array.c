#include<stdio.h>
int main()
{
    int size=50;
    int a1[40]={1,2,5,9,5,8,5,8,5,8,12,15,18,9,20,51,200,595,465,9,6,49,55,9,6,5,56,22,5,9,2,6,1,1,32,4};
    int p[9];
    int len=0;
    int key=18;
    int m=0;
    for(int i=0;i<size;i++)
    {
        if(a1[i]==key)
        {
            p[m]=i+1;
            len++;
            m++;
        }
    }
    printf("Value found at the positions are given as  ");
    for(int j=0;j<len;j++)
    {
        if(p[j]==1)
        {
            printf("1st ,");
        }
        else if(p[j]==2)
        {
            printf("2nd ,");
        }
        else if(p[j]==3)
        {
            printf("3rd ,");
        }
        else
        {
            printf("%dth ,",p[j]);
        }

    }
    return 0;
}

