#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
  /*  int a[5];
    a[0]=3;
    a[1]=1;
    a[2]=6;
    a[3]=5;
    a[4]=1;

    for(int i=0;i<5;i++)
    {
        printf("%d, ",a[i]);
    }
    printf("\n\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<(5-i);j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }

    for(int i=0;i<5;i++)
    {
        printf("%d, ",a[i]);
    }
*/

    char a[5][100]={"Chennai","Chdnnbi","Sri City","Kanpur","Lucknow"};
  /*  char a[0][100]="Chennai";
    char a[1][100]="Chdnnbi";
    char a[2][100]="Sri City";
    char a[3][100]="Kanpur";
    char a[4][100]="Lucknow";*/
   /* char a[5][100];
    for(int i=0;i<5;i++)
    {
        fflush(stdin);
        gets(a[i]);
    }*/
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



    int b[5]; //adding digits
    for(int i=0;i<5;i++)
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


    printf("\nAbsolute: \n");
    int ab[5];
    for(int i=0;i<5;i++)
        {
            ab[i]=abs(s-b[i]);
            printf("%s = %d\n",a[i],ab[i]);
        }

    int min_index=0;
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            if(ab[min_index]>ab[j])
            min_index=j;
            else if(ab[min_index]==ab[j])
            {
                if(strcmp(ab[min_index],ab[j])>0)
                min_index=j;
            }
        }
    }

    printf("->>%s::%d",a[min_index],ab[min_index]);

    return 0;
}
