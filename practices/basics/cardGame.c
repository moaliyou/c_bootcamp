#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    char card_name[3];
    int counter = 0;

    while (card_name[0] == 'X' || card_name[0] == 'x')
    {
        puts("Enter the card name: ");
        scanf("%2s", card_name);

        int val = 0;

        switch (card_name[0])
        {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        case 'X':
            val = 11;
            break;

        default:
            val = atoi(card_name);
            break;
        }
    }

    // printf("The card value is: %i\n", val);

    return 0;
}