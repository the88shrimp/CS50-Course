#include <cs50.h>
#include <stdio.h>

int is_prime(int a, int b);

int main(void)
{
    int min = 0;
    int max = 0;
    min = get_int("Min: ");
    max = get_int("Max: ");
    int prime;

    for (int i = min; i < max; i++)
    {
        int primetest = 0;
        int factorcount;
        factorcount = 0;
        for (int j = 1; j <= i; j++)
        {
            prime = is_prime(i,j);
           // printf("%i %% %i = %i\n", i, j, prime);
            //printf("factor = %i\n", factorcount);
            if (prime == 0)
            {
                factorcount++;
                if (factorcount >= 3)
                {
                    primetest = 0;
                    break;
                }
            }
            if (prime == 0)
            {
                continue;
            }
        }
        if (factorcount == 2)
        {
            printf("%i\n",i);
        }
        else
        {

        }
    }
}

int is_prime(int a,int b)
{
    if (a % b == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
