#include <stdio.h>
#include <string.h>
#include <math.h>


int luckynum(char nm[100]){
    int s=0;

    for(int i=0; i<strlen(nm);i++)
    {
        s=s+nm[i];
    }
    int t=s%9;
    if(t==0)
        return 9;
    else
        return t;

}


int main(){
    char nm[100],c1[100],c2[100],c3[100],c4[100],c5[100];

    printf("Please enter your name: ");
    scanf("%s",&nm);

    int lnum=luckynum(nm);

    printf("%s, your lucky number is %d.",nm,lnum);

    printf("\nPlease enter the cities with which you wish to match: \n");
    gets(c1);
    printf(", ");
    gets(c2);
    printf(", ");
    gets(c3);
    printf(", ");
    gets(c4);
    printf(", ");
    gets(c5);
    printf(".\n");

    int a,b,c,d,e;
    a=luckynum(c1);
    b=luckynum(c2);
    c=luckynum(c3);
    d=luckynum(c4);
    e=luckynum(c5);

    printf("\nThe lucky numbers are: \n ");
    printf("%s = %d\n",c1,a);
    printf("%s = %d\n",c2,b);
    printf("%s = %d\n",c3,c);
    printf("%s = %d\n",c4,d);
    printf("%s = %d\n",c5,e);

    int p,q,r,s,t,u;
    p= abs(a-lnum);
    q= abs(b-lnum);
    r= abs(c-lnum);
    s= abs(d-lnum);
    t= abs(e-lnum);

    int city()
    {

        if((p<q)&&(p<r)&&(p<s)&&(p<t))
            return c1;
        else if((q<r)&&(q<s)&&(q<t))
            return c2;
        else if((r<s)&&(r<t))
            return c3;
        else if(s<t)
            return c4;
        else
            return c5;
    }

    printf("\nYou will do well if you join %s.",city());

    return 0;
}
