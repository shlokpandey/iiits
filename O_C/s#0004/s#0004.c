#include <stdio.h>
#include <conio.h>

int main(){
    printf("<< ** Created by- Shlok Pandey ** B_HASH- s#0004 ** >> \n\n");
    printf("Enter a five digit number: \n>>");
    int num,a,s,cnt;
    s=0;
    cnt=0;
    scanf("%d",&num);
    for(int i=10000;i>=1;i/=10)
    {
        a=num/i;
        cnt++;
        if((cnt%2)!=0)
            s=s+a;
        num%=i;
    }
    printf("\n >>> %d", s);
    getch();
    return 0;
}
