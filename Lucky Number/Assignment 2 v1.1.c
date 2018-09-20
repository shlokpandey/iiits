#include <stdio.h>
#include <string.h>

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

    printf("%s, your lucky number is %d.",nm,luckynum(nm));

    printf("\nPlease enter the cities with which you wish to match: \n");
    scanf("%s",&c1);
    printf(", ");
    scanf("%s",&c2);
    printf(", ");
    scanf("%s",&c3);
    printf(", ");
    scanf("%s",&c4);
    printf(", ");
    scanf("%s",&c5);
    printf(".\n");

    printf("\nThe lucky numbers are: \n ");
    printf("%s = %d\n",c1,luckynum(c1));
    printf("%s = %d\n",c2,luckynum(c2));
    printf("%s = %d\n",c3,luckynum(c3));
    printf("%s = %d\n",c4,luckynum(c4));
    printf("%s = %d\n",c5,luckynum(c5));

    return 0;
}
