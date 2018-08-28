#include <conio.h>
#include <stdio.h>

int main()
{
    printf("<< ** Created by- Shlok Pandey ** B_HASH- s#0007 ** >> \n\n");
    int chld,chco,c;
    chco=72;
    printf("The number of chocolates are: %d \n",chco);
    printf("Enter the number of children: \n");
    scanf("%d",&chld);
    if(chld<=chco)
        {
            if(chco%chld==0)
                c=chco/chld;
            else
                c=(chco/chld)+1;
            printf("Since there are %d chocolates and %d children, there is at least one child who gets at least %d chocolates.",chco,chld,c);
        }
    else
        printf("Since number of children are more, every child can not get at least one chocolate.");
    getch();
    return 0;
}
