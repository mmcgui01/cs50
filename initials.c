#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void){
   
    string n = GetString();
    printf("%c", toupper(n[0]));
    
    for(int x = 0, y = strlen(n); x < y; x++)
    {
        if( isblank(n[x]))
            {
                printf("%c", toupper(n[x + 1]));
            }
    
    }printf("\n");
}
