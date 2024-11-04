// Winner Game

#include <stdio.h>
int main()
{
    int Joys, Bob, Lilly;
    printf("Enter score the score of Jay,Bob,Lilly: ");
    scanf("%d%d%d", &Joys, &Bob, &Lilly);
    if ((Joys > Bob) && (Joys > Lilly))
    {
        printf("Winner is Joys");
    }
    else
    {
        printf("Winner is Bob");
    }
    if ((Lilly > Bob) && (Lilly > Joys))
    {
        printf("\nWinner is Lilly\n");
    }
    else
    {
        printf("\nWinner is Joys");
    }
    return 0;
}