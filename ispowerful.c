#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// bool isprime(int num)
// {
//     if (num < 2)
//     {
//         return false;
//     }

//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }

//     return true;
// }

int main(int argc, char *argv[])
{
    // extract integer from command line, stack overflow solution
    char *a = argv[1];
    int num = atoi(a);

    return 0;
}