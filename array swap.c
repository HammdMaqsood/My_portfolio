#include<stdio.h>
void fun (int arr[]);
int main ()
{
    int arr1[3]={5,2,3};
    fun(arr1);
    printf("%d", arr1[2]);
}
void fun (int arr[])
{
    if(arr[0]>arr[1])
    {
        arr[2]=4;
    }

}
