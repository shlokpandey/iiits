#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    char a[5][100];
    int n=5;
    char nm[100];

    printf("Enter Your Name: ");
    scanf("%s",&nm);
    int s=0;
    for(int i=0;i<strlen(nm);i++)
    {
        s=s+nm[i];
    }
    s=s%9;
    if(s==0)
        s=9;
    printf("Your lucky number is %d.\n\n",s);

    printf("Enter names of cities: \n");

    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        gets(a[i]);
    }

    char c[100]; //sorting
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((strcasecmp(a[i],a[j]))>0)
            {
                strcpy(c,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],c);
            }
        }
    }


    int b[5]; //adding digits
    int ab[5]; //absolute
    for(int i=0;i<n;i++)
    {
            b[i]=0;
            for(int j=0;j<strlen(a[i]);j++)
            {
                b[i]=b[i]+a[i][j];
            }
            b[i]=b[i]%9;
            if(b[i]==0)
                b[i]=9;

            printf("%s = %d\n",a[i],b[i]);
            ab[i]=abs(s-b[i]);
    }

    int t=0;
    for(int i=0;i<n;i++)
    {
        if(ab[t]>ab[i])
            t=i;
    }
    printf("\n\n->>%s::%d",a[t],ab[t]);

    return 0;
}
