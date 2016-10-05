#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    int k = 0;
    bool valid = false;
    
    
        if(argc != 2)
        {
            
            printf("Try again\n");
            return 1;
        }
        else
        {
            (k = atoi(argv[1]));
            valid = true;
        }
        
  

    string text = GetString();

    for(int x = 0, y = strlen(text); x < y; x++)
       {
           if(isalpha (text[x]))
            {       
            
                if(isupper(text[x]))
                    {
                    printf("%c", (((text[x] - 64) + k)%26) + 64);
                    }
            
                else
                    {
                    printf("%c", (((text[x] - 97) + k)%26) + 97);
                    }
            }
        
            else
                {
                printf("%c",text[x]);
                
                }
       }
    printf("\n");
}
