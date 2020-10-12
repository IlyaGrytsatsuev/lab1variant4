//
//  main.c
//  lab1variant4
//
//  Created by gru gri on 17.09.2020.
//  Copyright © 2020 gru gri. All rights reserved.
//

#include<stdio.h>
int main()
{
    int a, i=1,x = 0;
    printf("enter the number in power: ");
    scanf("%d", &a);
    printf("enter the number:  ");
    scanf("%d", &x);
    if (a == -1&&x == 1){
        printf("false\n");
        return 0;
    }
    if((a!=1)&&(x==1)){
    printf("false\n");
        return 0;
    }
    if((a!=1)&&(x==-1)){
        printf("false\n");
        return 0;
    }
    if(a > 0){
        while(i<a){
        i*=x;
            }
    if (i==a||a==0||a==1) {
        printf("RESULT: true\n");
          }
    else {
        printf("false");
    }
    }
    else if (a < 0){
        while(i>a){
            i*=x;
                }
        if (i==a||a==0) {
            printf("RESULT: true\n");
              }
        else {
            printf("false\n");    }
}
}
    
