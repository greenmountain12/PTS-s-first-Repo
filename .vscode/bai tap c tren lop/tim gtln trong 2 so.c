#include <stdio.h>
int main(){
    float a,b;
    printf("Nhap vao so a: ");
    scanf("%f",&a);
    printf("Nhap vao so b: ");
    scanf("%f",&b);
    if(a>=b){
        printf("So lon nhat la %.2f",a);
    }else{
        printf("So lon nhat la %.2f",b);
    }
}