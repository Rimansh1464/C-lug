#include <stdio.h>

int main()
{
    int i, j;

   
    for(i=1; i<=5; i++)
    {
        // Logic to print numbers
        for(j=i; j>=1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
    
     for(i=4; i>=1; i--)
    {
        
        for(j=i; j>=1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
