#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Give an integer x: ");
    int y = get_int("Give an integer y: ");

    if (x < y)
    {
        printf("%n is less than %n",x,y);
    }
    else if (x > y)
    {
        printf("%n is greater than %n",x,y);
    }
    else
    {
        printf("%n is equal to %n",x,y);
    }
    
}