#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    
    
        if(argc != 2)                        /*Only one argument is accepted*/
            {
                printf("Try again\n");
                return 1;
            }
        string k = (argv[1]);

        int klen = strlen(k);
    
    
        for(int x = 0; x < klen; x++)      /*Processing k, can only be alpha, forced to lowercase*/
            {
                if(isalpha(k[x]))
                    {
                        if(isupper(k[x]))
                            {
                                k[x] = tolower(k[x]);
                            }
                            
                            k[x] -= 'a';
                    }
                else
                    {
                        printf("Try again\n");
                        return 1;
                    }
            }
            
        string code = GetString();
        
        int clen = strlen(code);
        
        for(int a = 0, b = 0; a < clen; a++)     /*The code loop*/
            {
                if(isalpha(code[a]))
                    {
                        int key = k[b%klen];     /*k wraps around the code*/
                        if(isupper(code[a]))     /*If code character is uppercase*/
                            {
                                printf("%c", (((code[a] - 'A') + key)%26) + 'A');
                                b++;
                            }
                        else                     /*If code character is lower*/
                            {
                                printf("%c", (((code[a] - 'a') + key)%26) + 'a');
                                b++;
                            }
                    }
                else
                    {
                        printf("%c", code[a]);  /*If code character is not alpha*/
                    }
            }
        printf("\n");
}
