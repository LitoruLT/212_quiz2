#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{

    char data1[8],data2[8];

    long long int n,i,j;
    scanf("%s",data1);

    for(i=strlen(data1),j=0 ; i>=0 ;i=i-1,j++)
    {
        data2[0]=data1[i];
        j++;
    }

    printf("%s    %s",data1,data2);

}
