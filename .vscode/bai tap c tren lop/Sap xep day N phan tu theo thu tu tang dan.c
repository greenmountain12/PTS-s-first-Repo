#include <stdio.h>
int main(){
    int n;
    printf("Nhap vao so n: ");
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        printf("Nhap vao so thu %d ",i+1);
        scanf("%f",&a[i]);
    }
    for(int y=0;y<n-1;y++){
        for(int j=y+1;j<n;j++){
            if(a[y]>a[j]){
                float temp=a[y];
                a[y]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Day so sau khi xep tang dan la ");
    for(int i=0;i<n;i++){
        printf("%.2f ",a[i]);
    }
}