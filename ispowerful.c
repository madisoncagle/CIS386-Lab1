#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isprime(int num)
{
    if (num < 2)
    {
        return false;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main(int argc, char *argv[]) //
{
    // extract integer from command line, stack overflow solution
    char *a = argv[1];
    int num = atoi(a);
    int pfact_ct = 0;

    if (num == 1)
    {
        printf("true");
        return 0;
    }
    

    // find prime factors
    for (int i = 1; i < num; i++)
    {
        // printf("%d %% %d = %d\n", num, i, num % i);

        if (num % i == 0) // is a factor
        {
            if (isprime(i)) // is prime
            {
                pfact_ct++;

                if (num % (i * i) != 0) // prime factor squared does not divide num
                {
                    printf("false");
                    return 0;
                }
            }
        }
    }

    if (pfact_ct == 0)
    {
        printf("false");
        return 0;
    }
    
    printf("true");

    return 0;
}