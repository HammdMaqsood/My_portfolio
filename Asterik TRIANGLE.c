#include<stdio.h>
int main()
{
    int n1,n2,n3=1;
    for(n1=1;n1<=10;n1++)
    {

        for(n2=10;n2>=n3;n3++)
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
