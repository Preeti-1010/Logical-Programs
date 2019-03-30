
#include <stdio.h>

int main()
{
    int i, j, k;
    
    for(i=0;i<=5;i++){
        
        for(j=0;j<=5;j++){
            
            if(i==j || i+j == 5-1 || i==0|| j==0 || j==5|| i==5 ){
                
                printf("*");
            }else{
                
                printf(" ");
            }
        }
        
        printf("\n");
    }

    return 0;
}
