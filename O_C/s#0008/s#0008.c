#include <stdio.h>
#include <conio.h>

int calc(int a, int n)
{
    return (a/n);
}
int main(){

    printf("\n\n<< ** Created by- Shlok Pandey ** B_HASH- s#0008 ** >> \n\n");
    int a;
    printf("\nEnter amount: \n");
    scanf("%d",&a);

    if(a>=1 && a<=1000)
    {
        printf("\nThe denominations are: \n\n");
        printf(">> %d * 100 \n",calc(a,100));
        a=a%100;
        printf(">> %d * 50 \n",calc(a,50));
        a=a%50;
        printf(">> %d * 20 \n",calc(a,20));
        a=a%20;
        printf(">> %d * 10 \n",calc(a,10));
        a=a%10;
        printf(">> %d * 1 \n",calc(a,1));

        printf("\n\n::The End::");
    }
    else
    {
        printf("Please enter amount between 1 and 1000.");
        main();
    }
    getch();
    return 0;
}
