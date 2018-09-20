#include <stdio.h>
#include <string.h>

int luckynum(char ch[]){
    int s=0;
    for(int i=0;i<strlen(ch);i++)
    {
        s=s+ch[i];
    }
    int t=s%9;
    if(t==0)
        return 9;
    else
        return t;

    return s;
}

int main(){
    char nm[100],city[6][100];
    int a[6];
    printf("Please enter your name: ");
    scanf("%s",&nm);

    printf("%s, your lucky number is %d.\n\n",nm,luckynum(nm));

/*    -2d array of city
    -array of lucknum of each city
    -difference
    -selection sort*/
    for(int i=0;i<=2;i++)
    {
        gets(city[i]);
       // printf("\n%d\n",city[i][1]);
    }
    printf("\n\n\n");
    for(int j=1;j<=2;j++)
    {
            int s=0;
            for(int i=0;i<strlen(city[j]);i++)
            {
                s=s+city[j][i];
            }

            a[j]=s%9;
            if(a[j]==0)
                a[j]=9;
        printf("%s = %d\n",city[j],a[j]);
    }
    for(j=1;j)
    return 0;
}
