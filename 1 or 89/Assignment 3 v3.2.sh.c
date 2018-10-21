#include <stdio.h>

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
	int arr[100000];
	arr[0]=t;
	for(int i=1; ;i++)
	{
		arr[i]=sqr(t);

		if(arr[i]==1 || arr[i]==89)
		{
			return arr[i];
		}
		t=arr[i];
	}
}

int main(){
//	int n;
	for(int n=1;n<=1000;n++)
	{
		int grp=chk(n);
		if(grp==0)
			printf("\nThe number %d is invalid.",n);
		else
			printf("\nThe number %d is of %d group.",n,grp);
	}

	return 0;
}
