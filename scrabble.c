#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    int upper1 = 0, upper2 = 0, lower1 = 0, lower2 = 0;
    int compute_score1 = 0;
    int compute_score2 = 0;
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Replace each letter to the POINTS[] array for word1

    for (int i = 0; i < strlen(word1); i++)
    {
        if (isupper(word1[i]))
        {
            upper1 = word1[i] - 65;
            compute_score1 += POINTS[upper1]; // Add the current character value of the upper1 to the upper1 sum
        }

        if (islower(word1[i]))
        {
            lower1 = word1[i] - 97;
            compute_score1 += POINTS[lower1]; // Add the current character value of the lower1 to the score1 sum
        }

    }

    // Replace each letter to the POINTS[] array for word2

    for (int k = 0; k < strlen(word2); k++)
    {
        if (isupper(word2[k]))
        {
            upper2 = word2[k] - 65;
            compute_score2 += POINTS[upper2];
        }

        if (islower(word2[k]))
        {
            lower2 = word2[k] - 97;
            compute_score2 += POINTS[lower2];
        }
    }

    // Prints the result

    if (compute_score1 > compute_score2)
    {
        printf("Player 1 wins!\n");
    }

    if (compute_score2 > compute_score1)
    {
        printf("Player 2 wins!\n");
    }

    if (compute_score1 == compute_score2)
    {
        printf("Tie!\n");
    }

}
