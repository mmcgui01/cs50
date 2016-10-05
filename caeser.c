#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    int k = 0;
    bool valid = false;
    
    
        if(argc != 2)              /*Must only take one argument*/
        {
            
            printf("Try again\n");
            return 1;
        }
        else
        {
            (k = atoi(argv[1]));      /*takes string k and turns it into an integer to be used later*/
            valid = true;            /**/
        }
        
  

    string text = GetString();    /*Get text to crypt*/

    for(int x = 0, y = strlen(text); x < y; x++)
       {
           if(isalpha (text[x]))   /*Text must be alpha*/
            {       
              if(isupper(text[x]))  /*If text is upper*/
                    {
                    printf("%c", (((text[x] - 64) + k)%26) + 64);  /*Prints each letter -64 to get to '0' adds k, wrapping it around
                    }                                             the text up to 26 times for alpha chars. adds 64 to get back to ASCII*/
            
                else
                    {
                    printf("%c", (((text[x] - 97) + k)%26) + 97); /*If lower, repeat above, but with 97 which is lowercase a*/
                    }
            }
        
            else
                {
                printf("%c",text[x]);   /*Print is text is not alpha*/
                
                }
       }
    printf("\n");
}
