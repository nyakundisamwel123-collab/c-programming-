//simple program to display purchase of data bundles
/*
Name:SAMWEL NYAKUNDI
Reg No:PA106/G/28824/25
Description:program to display purchase of data bundles 
*/
#include<stdio.h>

int main(){
    int data_bundles;
    
    
    printf("select data bundle\n");
    printf("1.100mb @ 50KES\n");
    printf("2.500mb @ 200KES\n");
    printf("3.1GB @ 350KES\n");
    printf("4.2GB @ 600KES\n");
    
    printf("select your data bundle:(1-4)");
    scanf("%d,&data_bundles");
    
    if(data_bundles=1) {
       printf("you have bought 100mb @ 50KES");
       }
       else if(data_bundles=2){
       printf("you have bought 500mb @ 200KES");
       }
       else if(data_bundles=3){
       printf("you have bought 1GB @ 350KES");
       }
       else if(data_bundles=4){
       printf("you have bought 2GB @ 600KES");
       }
       else {
       printf("invalid choice");
       }
       return 0;
       }