#include <stdio.h>
#include <stdlib.h>


//Funktion zur Einstellung des Boards
void setupboard(int board[20][20])
{

    for (int y = 0; y < 20; y++)
    {
        for (int x = 0; x < 20; x++)
        {
            printf("%d ", board[y][x]);
        }
        printf("\n");
    }
}

int main()
{

    system("start cmd /k \"echo This is a separate window! && pause\"");

    
// Initialisierung des Boards und der Startposition
    int board[20][20] = {0};
    board[0][0] = 1;
    setupboard(board);
    getchar();

    return 0;
}