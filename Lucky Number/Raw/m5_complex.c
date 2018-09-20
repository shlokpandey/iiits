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
        int t;
        if((p<q)&&(p<r)&&(p<s)&&(p<t))
        {
            if(p==q)
            {
                t=strcmp(c1,c2);
                if(t==1)
                    return c2;
                else if(t==-1)
                    return c1;
            }
            else if(p==r)
            {
                t=strcmp(c1,c3);
                if(t==1)
                    return c3;
                else if(t==-1)
                    return c1;
            }
            else if(p==s)
            {
                t=strcmp(c1,c4);
                if(t==1)
                    return c4;
                else if(t==-1)
                    return c1;
            }
            else if(p==t)
            {
                t=strcmp(c1,c5);
                if(t==1)
                    return c5;
                else if(t==-1)
                    return c1;
            }
            else
            {
                return c1;
            }
        }
        else if((q<r)&&(q<s)&&(q<t))
        {
            if(q==r)
            {
                t=strcmp(c2,c3);
                if(t==1)
                    return c3;
                else if(t==-1)
                    return c2;
            }
            else if(q==s)
            {
                t=strcmp(c2,c4);
                if(t==1)
                    return c4;
                else if(t==-1)
                    return c2;
            }
            else if(q==t)
            {
                t=strcmp(c2,c5);
                if(t==1)
                    return c5;
                else if(t==-1)
                    return c2;
            }
            else
            {
                return c2;
            }
        }
        else if((r<s)&&(r<t))
        {
            if(r==s)
            {
                t=strcmp(c3,c4);
                if(t==1)
                    return c4;
                else if(t==-1)
                    return c3;
            }
            else if(r==t)
            {
                t=strcmp(c3,c5);
                if(t==1)
                    return c5;
                else if(t==-1)
                    return c3;
            }
            else
            {
                return c3;
            }
        }
        else if(s<t)
        {
            if(s==t)
            {
                t=strcmp(c4,c5);
                if(t==1)
                    return c5;
                else if(t==-1)
                    return c4;
            }
            else
            {
                return c4;
            }
        }
        else
            return c5;
    }

    printf("\nYou will do well if you join %s.",city());

    return 0;
}
