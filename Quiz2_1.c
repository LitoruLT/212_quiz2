#include<stdio.h>

int check_CUBE_NUM(int n);

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

    }


}

int check_CUBE_NUM(int n)
{
    int i,j=n;
    for(i=0 ; i<3 ; i++)
    {
        if(j*j*j == n)
        {
            return 1;
            break;
        }
        else if(j*j*j<n)
        {
            return 0;
            break;
        }
        j=j-1;
    }
}
