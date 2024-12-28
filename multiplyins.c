#include<stdio.h>
int main(){
  int n,m,p,q;
  printf("enter the value of n and m");
  scanf("%d%d",&n,&m);
  printf("enter the value of p and q:");
  scanf("%d%d",&p,&q);
  int A[n][m],B[p][q],C[n][q];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      scanf("%d",&A[i][j]);
    }
  }
  printf("entring the value of p and q value");
   for(int i=0; i<p; i++){
    for(int j=0; j<q; j++){
      scanf("%d",&A[i][j]);
    }
  }
     for(int i=0; i<n; i++){
    for(int j=i+1; j<q; j++){
  C[i][j]=0;
    for(int k=0; k<m; k++){
     C[i][j] =A[i][k]*B[k][j];
    }
    }
  }
   for(int i=0; i<n; i++){
    for(int j=0; j<q; j++){
     printf("%d\t",C[i][j]);
    }
    printf("\n");
  }
return 0;
}