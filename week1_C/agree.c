#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree to the T/C [Y/N]: ");

    if (c == 'Y')
    {
        printf("Good boyy\n");
    }
    else if (c == 'N')
    {
        printf("you are not allowed here\n");
    }
    else 
    {
        printf("You either typed something other than Y/N or didn't type it in capitals, try it again\n");
    }
}