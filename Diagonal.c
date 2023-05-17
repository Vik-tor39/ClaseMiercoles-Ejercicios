#include<stdio.h>
int main(){
    int fil,col;
    int matriz[fil][col];
    scanf("%d",&fil);
    scanf("%d",&col);
    for(int i=0;i<=fil;i++){
        for(int j=0;j<=col;j++){
            matriz[i][j]=0;
        }
    }
    for(int i=0;i<=fil;i++){
        for(int j=0;j<=col;j++){
            if(i==j){
                matriz[fil][col]=1;
            }
        }
    }
    for(int i=0;i<=fil;i++){
        for(int j=0;j<=col;j++){
            printf("%d",matriz[fil][col]);
        }
        printf("\n");
    }
    return 0;
}