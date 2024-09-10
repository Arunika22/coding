// holllow pyramid
/* 
  n = 4
    *
   * *
  *   *
 *******
 */
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=i+1;k<=n-1;k++){
            printf(" ");
        }
        for(int j=0;j<=2*i;j++){
            if(i == 0 || i == n-1 || j==0 || j == 2*i){
                printf("*");
            }else{
                printf(" ");
            }
           
        }
        printf("\n");
    }
}