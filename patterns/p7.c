// parallelogram
/* n= 4 m = 4

    ****
   ****
  ****
 ****
  
*/
#include<stdio.h>

int main(){
    int n,m ;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int k=n-1;k>i;k--){
            printf(" ");
        }
        for(int j=0;j<m;j++){
            printf("*");
        }
         printf("\n");
    }
}