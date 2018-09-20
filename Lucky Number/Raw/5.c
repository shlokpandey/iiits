#include <stdio.h>
#include <string.h>
#include <math.h>

int luckynum(char nm[100]){
    int s=0;

    for(int i=0; i<strlen(nm);i++)
    {
        s=s+nm[i];
    }

    printf("%d\n",s);

    int p=0, s2=0;

    if(s>10000)
    {
        for(int i=1;i<=6;i++)
            {
                p=s%10;
                s2=s2+p;
                s=s/10;
            }
    }

    else if(s>1000)
    {
        for(int i=1;i<=5;i++)
            {
                p=s%10;
                s2=s2+p;
                s=s/10;
            }
    }
    else if(s>100)
    {
        for(int i=1;i<=4;i++)
            {
                p=s%10;
                s2=s2+p;
                s=s/10;
            }
    }
    else if(s>10)
    {
        for(int i=1;i<=3;i++)
            {
                p=s%10;
                s2=s2+p;
                s=s/10;
            }
    }

    if(s2>9)
    {
        int s3=0;
        for(int i=1;i<=2;i++)
        {
            p=s2%10;
            s3=s3+p;
            s2=s2/10;
        }
        s2=s3;

    }

    return s2;
}


int main(){
    char nm[100];

    printf("Please enter your name: ");
    fgets(nm,"%s",stdin);

    printf("%s, your lucky number is %d.",nm,luckynum(nm));

    return 0;
}
