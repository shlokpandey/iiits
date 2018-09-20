#include <stdio.h>
#include <string.h>

int lkynm(char t[]){
    int s;
    s=0;
    for(int i=0;i<(strlen(t)-1);i++)
        s=s+t[i];
    if(s%9==0)
        return 9;
    else
        return (s%9);
}

int main(){
    char a[100];
    int i=0;
    while(a){
        gets(a);
        printf("\n%s = %d\n\n",a,lkynm(a));
        if(a[strlen(a)-1]=='.')
            break;
        }

    return 0;
}
