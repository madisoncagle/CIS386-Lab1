#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char input[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin); // read string
    strlwr(input);                      // convert to lowercase

    // remove everything that's not a letter
    for (int i = 0; input[i]; i++)
    {
        if (isalpha(input[i]))
        {
            input[count++] = input[i];
        }
    }
    input[count] = '\0';

    int i = 0;
    int j = strlen(input) - 1;

    // compare letters from outside in
    while (j > i)
    {
        if (input[i] != input[j])
        {
            printf("false");
            return 0;
        }
        
        i++;
        j--;
    }

    printf("true");

    return 0;
}