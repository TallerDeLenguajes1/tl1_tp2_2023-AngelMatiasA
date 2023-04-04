#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main()
{
    srand(time(NULL));
    int aleatorio= rand();
    int i, j;
    int mt[N][M];
    int *pMatriz;
    pMatriz = (int*) mt;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *(pMatriz + (i*M +j)) = 1 + aleatorio%100;
            mt[i][j] = 1 + rand() % 100;
            printf("%4d ", *(pMatriz + (i*M +j)));
        }
        printf("\n");
    }
   

    return 0;
}
