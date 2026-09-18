#include <stdio.h>
int main(){
    int n;
    float tong;
    printf("Nhap vao so n la: ");
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        printf("Nhap vao so thu %d ",i+1);
        scanf("%f",&a[i]);
    }
    for(int y=0;y<n;y++){
        tong=tong+a[y];

    }
    printf("Tong cua day la %.2f",tong);
    float tbc=tong/n;
    printf("\nTrung binh cong cua day la %.2f",tbc);
}