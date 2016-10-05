#include <stdio.h>
#include <cs50.h>

int main(void)

{
    printf("minutes:");
    int x = GetInt();
    int y = 192;
    int z = 16;
    printf("bottles: %d\n", x * y/ z);
}
