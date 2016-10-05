#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    
    

    float change;
    int coins = 0;

    do
    {
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    
    while(change < 0);

    int amount = round(change *100);

    while(amount >= 25)
        {
            coins++;
            amount -= 25;
        }
            
    while(amount >= 10)
        {
            coins++;
            amount -= 10;
        }
        
    while(amount >= 5)
        {
            coins++;
            amount -= 5;
        }
        
    while(amount >= 1)
        {
            coins++;
            amount -= 1;
        }
    
    printf("%d\n", coins );

return 0;
}
