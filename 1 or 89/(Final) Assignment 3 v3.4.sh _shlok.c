#include <stdio.h>
#include <conio.h>
#include <string.h>

// Assignment: 3 ___  Version: 3.4.sh

int luck(char nm[]){
	int s=0;
	for(int i=0; i<strlen(nm); i++)
	{
		s=s+nm[i];
	}
	if(s%9 == 0)
		return 9;
	else
		return (s%9);
}

int sqr(int x){

	int s=0;
        while(x){
                int rem=x%10;
                s=s+(rem*rem);
        	x=x/10;
        }
	return s;

}

int chk(int t){
	if(t<=0)
	{
		return 0;

	}

	int raw,i=1;
	while(i>0)
	{
		raw=sqr(t);

		if(raw==1 || raw==89)
		{
			return raw;
		}
		else
			t=raw;
	}
}

int main(){

	char name[1000];
	printf("Please enter your name: ");
	fflush(stdin);
	gets(name);

	int lnum= luck(name);
	printf("%s, your lucky number is %d.\n",name,lnum);

	printf("%s, you belong to the %d-kind.\n\n",name,chk(lnum));


	int num, i=0;
	printf("Please enter a number: ");
	scanf("%d",&num);

	for(int n=1;n<=num;n++)
	{
		int grp=chk(n);
		if(grp==1)
		{
			i++;
		}
	}
	printf("Following %d numbers between 1 and %d end in 1:\n",i,num);
	int c=0;
	for(int j=1;j<=num;j++)
	{
        int grp=chk(j);
        if(grp==1 && ++c)
            {
                printf("%d",j);
                if(c==i)
                    printf(".");
                else
                    printf(", ");
            }
	}

	printf("\n");

	printf("\n\n\n\n<< ** Name- Shlok Pandey :: Roll Number- S20180010165 :: Section- B (UG-1) ** >>\n\n");

	getch();

	return 0;
}
