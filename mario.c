#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n, i, j, k, l, m;
	
    do
    {
        n = get_int("Height: ");
    }
    while(n < 1 || n > 8);
	
	
    for (i = 0; i < (n+1); i++)
    {
   
    	    for (k = n; k > i; --k)
    	    {   
    	        printf(" ");
    	    }
	        for (j = 0; j < i; j++)
    	    {
         	    printf("#"); 
    	    }
    	printf("  ");
    	    for (m = 0; m < i; m++)
    	    {
    	        printf("#");
    	    }
        printf("\n");
    }

}	
