#include<stdio.h>
int main(){
  int n, m,p,q,max;
  printf("enter the value of n ,m, p, q:");
  scanf("%d%d%d%d",&n,&m,&p,&q);
  int A[n][m],B[p][q];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      scanf("%d",&A[i][j]);
    }
  }

  for(int i=0; i<p; i++){
    for(int j=0; j<q; j++){
      scanf("%d",&B[i][j]);
    }
  }
   for(int i=0; i<n; i++){
    for(int j=i+1; j<m; j++){
      if(A[i][j]>B[i][j]){
        max=A[i][j];
        A[i][j]=B[i][j];
        B[i][j]=max;

      }

    }
  }
  printf("%d",max);
  return 0;
  }


