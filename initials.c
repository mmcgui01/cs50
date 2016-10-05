#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void){
   
    string n = GetString();               /*Gets name*/
    printf("%c", toupper(n[0]));          /*Prints first character in upper*/
    
    for(int x = 0, y = strlen(n); x < y; x++)  /*Loop to find a blank character*/
    {
        if( isblank(n[x]))              /*If a blank character is found*/
            {
                printf("%c", toupper(n[x + 1]));  /*Prints the next character after blank in upper*/
            }
    
    }printf("\n");
}
