#include<stdio.h>

void main()
{
    long long int M,N,i,j;
    scanf("%lli",&M);
    scanf("%lli",&N);

    long long int data[N][3];

    for(i=0 ; i<N ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
           scanf("%lli",&data[i][j]);
        }
    }

    long long int rows=0,cols=0,Max_ROWS=70,Max_COLS=M,k;
    for(cols=0 ; cols<Max_COLS ; cols++)
    {
        for(rows=0 ; rows<Max_ROWS ; rows++)
        {
            for(i=0 ; i<N ; i++)
            {
                for(j=0 ; j<2 ; j++)
                {
                    if(cols==data[i][0]-1 && rows<=(data[i][1]-1)+data[i][2] && rows>=data[i][1]-1  )
                    {
                        for(k=0; rows<=(data[i][1]-1)+data[i][2]-1 ;k++)
                        {
                            printf("x");
                            rows++;
                        }
                    }
                }

            }
            printf("o");

        }
        if(cols+1<Max_COLS)
        {
            printf("\n");
        }

    }

}

