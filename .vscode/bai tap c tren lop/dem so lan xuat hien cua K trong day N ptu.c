#include <stdio.h>
int main(){
    int K;
    printf("So K cho truoc la ");
    scanf("%d",&K);
    int dem=0;
    int n;
    printf("\nNhap vao so n la: ");
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        printf("Nhap vao so thu %d ",i+1);
        scanf("%f",&a[i]);
    }
    for(int y=0;y<n;y++){
        if(a[y]==K){
            dem=dem+1;
        }
    }
    printf("So lan xuat hien cua so %d la %d",K,dem);


}