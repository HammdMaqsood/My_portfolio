#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
typedef struct{int p_id;char p_name[30];float p_price;int p_stock;}product_t;
int main()
{
    FILE *fptr;
    fptr=fopen("file3.txt","r+");
    if(fptr==NULL)
        printf("file not opened\n\n");
    do
 {
     system("cls");
    int id;
    product_t product={0,"",0.0,0};
    int i;
   for(i=0;i<100;i++)
    fwrite(&product,sizeof(product_t),1,fptr);
    printf("All Inventory is cleared\n");
    printf("*****************************************************************************");
    printf("\n\nPress ENTER go back to main menu ");
}while(_getch()!='\r');
char n;
   do
   {
       system("cls");
    printf("These are the products currently in our inventory\n\n");
    printf("************************************************************\n");
    printf("Id |  Name |  Price  | Stock");
    product_t product;

    while(!feof(fptr))
        {
            fread(&product,sizeof(product_t),1,fptr);
           if(product.p_id!=0)
            {

                    printf("\n%d  | %s   |  %0.2f  | %d",product.p_id,product.p_name,product.p_price,product.p_stock);
            }
        }
        printf("\n********************************************************\n");
        printf("\n PRESS ENTER KEY TO CONTINUE");
   }while(_getch()!='\r');
return 0;
}

