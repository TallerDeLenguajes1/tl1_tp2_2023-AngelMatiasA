#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define N 20
int main()
{
    int i=0;
    double vt[N];
    double *pVt; 
    pVt = vt;
    // for (i = 0; i < N; i++)
    // {
    //     vt[i] = 1 + rand() % 10001;
    //     vt[i] = vt[i] /100;
    //     // printf("%.2f \n ", vt[i]);
    // }
    //    for (i = 0; i < N; i++)
    // {
    //    *(pVt+i) = 1 + rand() % 10001;
    //     // vt[i] = vt[i] /100;
        
    //     printf("%.2f \n ", pVt);

    //  pVt++;
    // }



    while (i < N )
    {
        
     *pVt = 1 + rand() % 10001;
     *pVt = *(pVt)/100;
       printf("%.2f \n ", *pVt);

     pVt++;
     i++;
      
    }
    
   

    return 0;
}