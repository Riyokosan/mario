#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)
{
    //ask user for a pyramid size between 1 and 8
    int height = get_positive_int("Height: ");
    
    //creation of the pyramid
    for (int i = 0; i < height; i++)
    {
        //add spaces
        for (int spaces = height - i; spaces > 1; spaces --)
        {
            printf(" ");
        }
        //add hashes
        for (int hashes = 0; hashes <= i; hashes++)
        {
            printf("#");
        }
        //go back to line
        printf("\n");
    }    
}

//insure the size of the pyramid is within the required amounts
int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1 || n > 8);
    return n;
}