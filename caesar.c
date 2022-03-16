#include <cs50.h>
#include <stdio.h>
#include <stdlib.h> //atoi, converte string em int
#include <ctype.h> //isdigit
#include <string.h>

int main(int argc, string argv[])
{    
    if(argc != 2)
    {
        printf ("Usage ./caesar key\n");
        return 1;
    }
    
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if(isalpha(argv[1][i]))
        {
        printf ("Usage: ./caesar key\n");
        return 1;
        }
    }
    
    int k = atoi(argv[1]) % 26;
    string plaintext = get_string("plaintext: ");
    
    printf("ciphertext: ");
    
    for (int j = 0, n = strlen(plaintext); j < n; j++)
    {
       if (!isalpha(plaintext[j]))
       {
           printf("%c", plaintext[j]);
           continue;
       }
       int ascii_offset = isupper(plaintext[j]) ? 65 : 97;
       
       int pi = plaintext[j] - ascii_offset;
       int ci = (pi + k) % 26;
       
       printf("%c\n", ci + ascii_offset);
    }
}
