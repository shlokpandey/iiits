#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int T,N,A[100001],s=0;
    scanf("%d",&T);
    if((T>=1) && (T<=100))
    {
        for(int i=0;i<T;i++)
        {
            scanf("%d",&N);
            if((N>=1) && (N<=10000))
            {
                for(int j=0;j<N;j++)
                {
                    scanf("%d",&A[j]);
                   // if(s>=0 && s<=100000)
                  //      A[j]=s;
                }
                
                //int arr_len=sizeof(A) / sizeof(int);
       /*         for(int t=0;t<N;t++)
                {
                    for(int u=1;u<(N-t);u++)
                        if(A[u]>A[u+1])
                        {
                            A[u]=A[u]+A[u+1];
                            A[u+1]=A[u]-A[u+1];
                            A[u]=A[u]-A[u+1];
                        }   
                }*/


            for (int t = 0; t <N; ++t) 
            {
                for (int j = t + 1; j < N; ++j)
                {
                if (A[t] > A[j]) 

                {
                    int a =  A[t];
                    A[t] = A[j];
                    A[j] = a;

                }
                }
            }
           
                    if(N%2==0)
                        printf("%d %0.1f %d", A[0],(float)((A[(N/2)-1]+A[(N/2)])/2),A[N-1]);
                    else 
                        printf("%d %0.1f %d", A[0],(float)A[(N/2)],A[N-1]);
            
            }
        }
        
    }
    
    return 0;
}
