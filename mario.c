#include <stdio.h>
#include <cs50.h>

int main(void){
int height = 0;
do
{
    
    printf("Type a positive number under 23: \n");
    height = GetInt();
}
while (height < 0 || height > 23);

for(int x = 0; x < height; x++)
{
    for(int y = 0; y < height - x - 1; y++)
    {
        printf(" ");
    }
    for(int z = 0; z < x + 2; z++)
    {
        printf("#");
    }
    {
        printf("\n");
    }
}
return 0;
}
