#include<stdio.h>
#include<conio.h>
int main(){
    int x;
    printf("Enter a no: ");
    scanf("%d",&x);
    if(x%5==0){
        printf("No is divisible by 5");
    }
    else{
        printf("No is not divisible by 5 ");
    }
}