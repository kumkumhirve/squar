#include <stdio.h>
int squar(int num){
    return num*num;

}
int main(){
    int number ;
    printf("enter number:");
    scanf("%d",&number);
    printf("%d\n",squar(number));
    return 0;
}
void main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    checkevenodd( num);
    return num;

}
checkevenodd(num){
    if(num%2==0){
        printf("num is even",num);
    }
    else{
        printf("num is odd",num);

    }
    
     }



