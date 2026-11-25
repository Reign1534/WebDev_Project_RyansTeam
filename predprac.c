#include <stdio.h>

#define ROW 3
#define COL 4

int main () {

    int myarray[ROW][COL];
    int i, j;

    printf("Enter %d numbers\n", ROW * COL);

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", & myarray [i][j]);

        }
    }
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
    }



}