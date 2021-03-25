#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

long long int checkPALIN(long long int n);

void main()
{
    long long int n,i,j,count=0;
    scanf("%lli",&n);
    for(i=10; i<=n ;i++)
    {
        if(checkPALIN(i))
        {
            count++;
        }
    }
    printf("%lli",count);


}


long long int checkPALIN(long long int n)
{
    long long int i,j,temp=1;
    long long int n2;
    while(n)
    {
        n2=n2+((n%10)*temp);
        n=n2/10;
        i++;
        temp=temp*10;
    }
    printf("%lli,%lli",n,n2);

    if(n==n2)
        return 1;
    else
        return 0;
}
