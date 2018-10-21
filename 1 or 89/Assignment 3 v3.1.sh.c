#include <stdio.h>

int chk(int t){
	int arr[100000], c=0;
	arr[0]=t;
	for(int i=1; ;i++)
	{
		int s=0;
		while(t){
			int rem=t%10;
			s=s+(rem*rem);
			t=t/10;
		}
		arr[i]=s;
		printf("%d,  ",arr[i]);
		for(int j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
			{
				c=1;
				break;
			}
		}
		if(c==1)
			break;
		t=arr[i];
	}
}

int main(){
	int n;
	scanf("%d",&n);
	chk(n);
	printf("\n");
	return 0;
}
