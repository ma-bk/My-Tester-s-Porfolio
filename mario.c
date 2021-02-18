/*This program builds a pyramid with # in C 
It allows user to decide just how tall the pyramid should be by first asking for a positive integer between 1 and 8 inclusive*/ 
#include <cs50.h> 
#include <stdio.h>

int main(void)

{
    int height;
    int row;
    int lenght;

    do
    {
        height = get_int ("Height: ");
    }
    while (height < 1 || height > 8);
    for (lenght = 0; lenght < height; lenght++){
        for (row = 0; row < height ; row++) {
            if ((lenght + 2 ) > height-row)
             {
                printf("#");
             } else { 
                    printf (" ");
    }
}
                printf ("\n");
}
}
