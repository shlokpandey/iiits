#include <stdio.h>
#include <conio.h>

int main(){
    printf("<< ** Created by- Shlok Pandey ** B_HASH- s#0003 ** >> \n\n");
    printf("Enter a five digit number: \n>>");
    int num,a,b,c,d,e;
    scanf("%d",&num);
    a=num/10000;
    num=num%10000;
    b=num/1000;
    num=num%1000;
    c=num/100;
    num=num%100;
    d=num/10;
    e=num%10;
    printf("The sum of digits at odd places is %d.",(a+c+e));
    getch();
    return 0;
}
