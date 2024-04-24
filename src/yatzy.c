#include <stdio.h>

int main()
{
    int dice = 1;

    while (dice <= 6)
    {
        if (dice < 6)
        {
            printf("no yatzy\n");
        }
        else
        {
            printf("yatzy\n");
        }
        dice = dice + 1;
    }
    return 0;
}