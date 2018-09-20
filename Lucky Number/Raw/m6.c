#include <stdio.h>
#include <string.h>
#include <math.h>


int loop(int t, int s){
        int p=0,s2=0;

        for(int i=1;i<=t;i++)
            {
                p=s%10;
                s2=s2+p;
                s=s/10;
            }
        return s2;
}

int luckynum(char nm[100]){
    int s=0;

    for(int i=0; i<strlen(nm);i++)
    {
        s=s+nm[i];
    }

    int s2=0;

    if(s>10000)
    {
        s2=loop(5,s);
    }

    else if(s>1000)
    {
        s2=loop(4,s);
    }
    else if(s>100)
    {
        s2=loop(3,s);
    }
    else if(s>10)
    {
        s2=loop(2,s);
    }

    if(s2>99)
    {
        s2=loop(3,s2);
    }

    int chk(){
        if(s2>9)
        {
            s2=loop(2,s2);
            chk();
        }
    }

    chk();


    return s2;
}


int main(){
    char nm[100],c1[100],c2[100],c3[100],c4[100],c5[100];

    printf("Please enter your name: ");
    scanf("%s",&nm);

    int lnum=luckynum(nm);

    printf("%s, your lucky number is %d.",nm,lnum);

    char a[5];

    for(int i=0;i<5;i++)
    {
        scanf(a[i]);
        printf("%d",a[i]);
    }

    return 0;
}
