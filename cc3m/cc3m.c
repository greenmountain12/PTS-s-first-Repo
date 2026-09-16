#include <stdio.h>
int main (){
    int tong=0;
    for(int i=1;i<=50;i++){
        int n;
        printf("Nhap vao so thu %d  ",i);
        scanf("%d",&n);
        if(n<0){
            break;
        }
        tong=tong+n;
    }
    printf("Tong cua cac so vua nhap la %d",tong);
}