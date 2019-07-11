#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //ask user for a pyramid size between 1 and 8
    int height;
    
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    
    //creation of each line of the pyramid
    for (int lines = 0; lines < height; lines++)
    {
        //add spaces
        for (int spaces = height - lines; spaces > 1; spaces --)
        {
            printf(" ");
        }
        //add hashes
        for (int hashes = 0; hashes <= lines; hashes++)
        {
            printf("#");
        }
        
        printf("  ");
        
        for (int hashes2 = 0; hashes2 <= lines; hashes2++)
        {
            printf("#");
        }
        //go back to line
        printf("\n");
    }    
}
