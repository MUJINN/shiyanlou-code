#include <stdio.h>
int main(){
    char id[20];
    printf("please enter your ID: ");
    scanf("%s",id);
    if (id!=NULL){
        printf("Welcome!");
    }
    else
    printf("please input again",id);
}