#include<stdio.h>

void main()
{
    long long int M,N,i,j;
    scanf("%lli",&M);
    scanf("%lli",&N);

    long long int data[N][M];

    for(i=0 ; i<N ; i++)
    {
        for(j=0 ; j<M ; j++)
        {
           scanf("%lli",data[i][j]);
        }
    }

    long long int rows=0,Max_ROWS=70;
    while(rows < Max_ROWS)
    {
        printf("o");


        rows++;
    }

}

