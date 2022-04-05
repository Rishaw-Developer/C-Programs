// Not completed yet

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

// Functions
int check_winner();
int game_screen();

// Global Variables
static char game_board[9];

int main()
{
    char do_play;
    int winner;

    for (int i = 0; i < 9; i++) game_board[i] = '*';

    printf("Welcome, In the world of Tic-Tac-Toe. \n");
    printf("Press 'Y' to begin the game or 'N' for exit: ");
    scanf("%c", &do_play);

    if (toupper(do_play) == 'Y') {
        game_screen();
    } else {
        printf("Thank you! \n");
        return 0;
    }

    return 0;
}

int game_screen() {
    int game_board_index = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", game_board[game_board_index]);
            game_board_index++;
        }

        printf("\n");
    }
}

int check_winner()
{
    if (game_board[0] == game_board[1] && game_board[1] == game_board[2])
    {
        if (game_board[0] == 'x' && game_board[1] == 'x' &&
            game_board[2] == 'x')
        {
            return -1;
        }

        if (game_board[0] == 'o' && game_board[1] == 'o' &&
            game_board[2] == 'o')
        {
            return -2;
        }
    }
    else if (game_board[0] == game_board[4] && game_board[4] == game_board[8])
    {
        if (game_board[0] == 'x' && game_board[4] == 'x' &&
            game_board[8] == 'x')
        {
            return -1;
        }

        if (game_board[0] == 'o' && game_board[4] == 'o' &&
            game_board[8] == 'o')
        {
            return -2;
        }
    }
    else if (game_board[0] == game_board[3] && game_board[3] == game_board[6])
    {
        if (game_board[0] == 'x' && game_board[3] == 'x' &&
            game_board[6] == 'x')
        {
            return -1;
        }

        if (game_board[0] == 'o' && game_board[3] == 'o' &&
            game_board[6] == 'o')
        {
            return -2;
        }
    }
    else if (game_board[3] == game_board[4] && game_board[4] == game_board[5])
    {
        if (game_board[3] == 'x' && game_board[4] == 'x' &&
            game_board[5] == 'x')
        {
            return -1;
        }

        if (game_board[3] == 'o' && game_board[4] == 'o' &&
            game_board[5] == 'o')
        {
            return -2;
        }
    }
    else if (game_board[6] == game_board[7] && game_board[7] == game_board[8])
    {
        if (game_board[6] == 'x' && game_board[7] == 'x' &&
            game_board[8] == 'x')
        {
            return -1;
        }

        if (game_board[6] == 'o' && game_board[7] == 'o' &&
            game_board[8] == 'o')
        {
            return -2;
        }
    }
    else if (game_board[1] == game_board[4] && game_board[4] == game_board[7])
    {
        if (game_board[1] == 'x' && game_board[4] == 'x' &&
            game_board[7] == 'x')
        {
            return -1;
        }

        if (game_board[1] == 'o' && game_board[4] == 'o' &&
            game_board[7] == 'o')
        {
            return -2;
        }
    }
    else if (game_board[2] == game_board[5] && game_board[5] == game_board[8])
    {
        if (game_board[2] == 'x' && game_board[5] == 'x' &&
            game_board[8] == 'x')
        {
            return -1;
        }

        if (game_board[2] == 'o' && game_board[5] == 'o' &&
            game_board[8] == 'o')
        {
            return -2;
        }
    }
    else if (game_board[2] == game_board[4] && game_board[4] == game_board[6])
    {
        if (game_board[2] == 'x' && game_board[4] == 'x' &&
            game_board[6] == 'x')
        {
            return -1;
        }

        if (game_board[2] == 'o' && game_board[4] == 'o' &&
            game_board[6] == 'o')
        {
            return -2;
        }
    }
    return 0;
}


// write a program for tic-tac-toe game
// the game board should be represented as a 2D array
// the board should be printed out every time a player makes a move
// the game should end when a player wins or when there are no more moves left
// the game should be able to be reset
// the game should be able to be quit
