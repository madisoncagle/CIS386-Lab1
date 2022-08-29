#include <stdio.h>
#include <stdlib.h>

// TODO
int main(int argc, char *argv[])
{
    // extract integer from command line, stack overflow solution
    char *a = argv[1];
    int num = atoi(a);

    // loop through every integer between 1 and given number
    // if factor, check if prime
    // if prime, square and modulo
    // if modulo != 0, print false and return 0

    for (int i = 0; i < num; i++)
    {
        if (num % i == 0) // is a factor
        {
            // check if prime
        }
    }

    // printf("true");

    return 0;
}