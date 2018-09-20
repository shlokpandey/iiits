#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    // Assignment:2 __ v1.3.1

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

    printf("%s, your lucky number is %d.\n\n",nm,s);


    char a[5][100];
    int n=5;

    printf("Please enter the cities with which you wish to match:\n");

    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        gets(a[i]);
    }

    printf("\n\n");

    int b[5]; //adding digits

    printf("The lucky numbers are:\n");
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

            ab[i]=abs(s-b[i]);
    }

    int t=0;
    for(int i=0;i<n;i++)
    {
        if(ab[t]>ab[i])
            t=i;
    }
    printf("\n\nYou will do well, if you join %s.",a[t]);


    printf("\n\n\n\n<< ** Name- Shlok Pandey :: Roll Number- S20180010165 :: Section- B (UG-1) ** >>\n\n");
    getch();
    return 0;
}
