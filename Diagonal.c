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
            printf("%d",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}