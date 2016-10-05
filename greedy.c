#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    
    

    float change;
    int coins = 0;            /*Create a counter for coins*/

    do
    {
        printf("How much change is owed?\n");
        change = GetFloat();          /*Get change*/ 
    }
    
    while(change < 0);              /*Change must be at least .01*/

    int amount = round(change *100);   /*Taking the change, multiplying by 100 and rounding it so theres no decimals to deal with*/

    while(amount >= 25)
        {
            coins++;              /*If amount is less than or equal to 25, subtract 25 and add 1 to coin counter*/
            amount -= 25;
        }
            
    while(amount >= 10)
        {
            coins++;              /*repeat for 10*/
            amount -= 10;
        }
        
    while(amount >= 5)
        {
            coins++;              /*...*/
            amount -= 5;
        }
        
    while(amount >= 1)            /*...*/
        {
            coins++;
            amount -= 1;
        }
    
    printf("%d\n", coins );       /*Print the amount of coins*/

return 0;
}
