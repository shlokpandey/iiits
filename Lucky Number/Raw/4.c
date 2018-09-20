#include <stdio.h>
#include <string.h>

int main(){
    int s=0;
    char b[100];
   // fgets(&b,"%s",stdin);
    scanf("%[^\n]s",&b);
   // printf("%c = %d",b,(int)b);
    for(int i=0; i<strlen(b);i++)
    {
        s=s+b[i];
    }
    printf("%d\n",s);

    int p;

    int s2=0;

    if(s>10000)
    {
        for(int i=1;i<=5;i++)
            {
                p=s%10;
                s2=s2+p;
                s=s/10;
            }
    }

    else if(s>1000)
    {
        for(int i=1;i<=4;i++)
            {
                p=s%10;
                s2=s2+p;
                s=s/10;
            }
    }
    else if(s>100)
    {
        for(int i=1;i<=3;i++)
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

    printf("%d\n",s2);


    return 0;
}
