#include<stdio.h>
int main(int argc, char** argv){
        int given_number, i, flag=0;
        printf("Enter a positive number: ");
        scanf("%d",&given_number);
        for(i=2; i<=given_number/2;++i){
                if(given_number%i==0){
                        flag=1;
                        break;
                }
        }
        if (given_number==0 || given_number==1){
                printf("%d is not prime or composite.", given_number);
        }
        else{
                if (flag==0){
                        printf("%d is prime",given_number);

                }
                else
                        printf("%d is not prime",given_number);
                }
        return 0;
}
