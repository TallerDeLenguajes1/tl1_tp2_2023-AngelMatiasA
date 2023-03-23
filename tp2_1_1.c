#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define N 20
int main()
{
    int i;
    double vt[N];
    for (i = 0; i < N; i++)
    {
        vt[i] = 1 + rand() % 10001;
        vt[i] = vt[i] /100;
        printf("%.2f \n ", vt[i]);
    }

    return 0;
}