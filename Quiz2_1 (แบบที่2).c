#include<stdio.h>

long long int check_CUBE_NUM(long long int n);
void check_POS_CUBE_FREE(long long int n);

void main()
{
    long long int n;
    scanf("%lli",&n);
    if(n==1)
    {
        printf("1");
    }
    else if(n==2)
    {
        printf("2");
    }
    else if(check_CUBE_NUM(n))
    {
        printf("Not Cube Free");
    }
    else
    {
        check_POS_CUBE_FREE(n);
    }


}

long long int check_CUBE_NUM(long long int n)
{
    long long int i,j=n;
    while(1)
    {
        if(j*j*j == n)
        {
            return 1;
        }
        else if(j*j*j<n)
        {
            return 0;
        }
        j=j-1;
    }
}

void check_POS_CUBE_FREE(long long int n)
{

    long long int i=0,j=3,pos=2,saveCUBE[n],k,wrong=0;
    for(k=0; k<n ; k++)
        saveCUBE[k]=0;
    while(j<=n)
    {
        if(!check_CUBE_NUM(j))
        {
            if(saveCUBE[0]!=0)
            {
                for(k=0; saveCUBE[k]!=0 ; k++)
                {
                    if( !(j%saveCUBE[k]==0) && saveCUBE[k]!=0)
                    {
                        pos++;
                    }
                    else
                    {
                        break;break;
                    }
                }
            }
            else
            {
                pos++;
            }

        }
        else
        {
            saveCUBE[i]=j;
            i++;
        }
        j++;
    }
    printf("%lli",pos);
}
