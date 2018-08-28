#include <conio.h>
#include <stdio.h>

int main()
{
    printf("<< ** Created by- Shlok Pandey ** B_HASH- s#0005 ** >> \n\n");
    int m=0;
    int k=0;
    int p=1;
    int q=1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf(" ");
        }
        printf("*");
        if(i>1)
            {
                for(int j=5;j>k;j--)
                {
                    printf("  ");
                }
                m++;
                k++;
                printf("*");
                for(int j=1;j<=p;j++)
                {
                    printf("  ");
                }
                printf("*");
                for(int j=3;j>=q;j--)
                {
                    printf("  ");
                }
                p++;
                q++;
                printf("*\n");
            }
        else
            {
                for(int j=5;j>k;j--)
                {
                    printf("  ");
                }
                m++;
                k++;
                printf("*\n");
            }
    }
    getch();
    return 0;
}
