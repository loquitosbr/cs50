#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
    
int main(void)
{
                                                        // Setando os contadores
    int ponto = 0;
    int maiusculo = 0;
    int minusculo = 0;
    int palavra = 1;
    int letra = 0;
                                                        // Lendo o texto
    string s = get_string("Input:  ");
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')   // contar o número de pontos
        {
            ponto++;
        }
        if (islower(s[i]))                              // contar o número de letras
        {
            minusculo++;
        }
        if (isupper(s[i]))
        {
            maiusculo++;
        }
        if (s[i] == ' ')                                // contar o número de espaços/palavras
        {
            palavra++;
        }
    }
    
    letra = maiusculo + minusculo;
                                                        // calculando o índice
    float indice = (0.0588 * letra / palavra * 100) - (0.296 * ponto / palavra * 100) - 15.8;
    int index = round(indice);
                                                        // printando o resultado
    if (index > 0 && index <= 16)
    {
        printf("Grade %i\n", index);
    }
    else if (index < 1)
    {
        printf("Before grade 1 \n");
    }
    else if(index > 16)
    {
        printf("Grade 16+\n");
    }
}
