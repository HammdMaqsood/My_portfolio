#include<stdio.h>
#include<math.h>
int main ()
{
    float down_payment=500.0,monthly_payment,purchase_price,monthly_interest_rate,time_period,amount_borrowed;
    printf("\nEnter the purchase price of the car : $");
    scanf("%f",&purchase_price);
    printf("\nEnter the Monthly interest rate : %%");
    scanf("%f",&monthly_interest_rate);
    monthly_interest_rate=monthly_interest_rate/100;
    printf("\nEnter the time period (m) :");
    scanf("%f",&time_period);
    amount_borrowed=purchase_price-down_payment;
    monthly_payment=((monthly_interest_rate*amount_borrowed)/(1-pow(1+monthly_interest_rate,-time_period)));
    printf("\nThe amount borrowed is :$ %.0f",amount_borrowed);
    printf("\nYour monthly payment will be : $ %.2f",monthly_payment);
}
