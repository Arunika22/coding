// hollow square
/* n= 4
****
*  *
****
*/
#include<stdio.h>

int main(){
    int n ;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            if(i == 0 || i == n-1){
                printf("*");
            }else{
                if(j ==1|| j==n-1){
                    printf("* ");
                }else{
                    printf(" ");
                }
            }


        }
         printf("\n");
    }
}