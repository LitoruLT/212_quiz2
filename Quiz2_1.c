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
    j=n-j+1;
    while(1)
    {
        printf("j == %lli\n",j);
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
    long long int i,j=3,pos=2;
    while(j<=n)
    {
        if(!check_CUBE_NUM(n))
        {
            pos++;
        }
        j++;
    }
    printf("%lli",pos);
}
