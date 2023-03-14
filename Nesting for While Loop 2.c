#include<stdio.h>

int main(){

int r,c,num,mul,sum;

num=1;
mul=1;
r=0;

while(r<4){

    c=0;

    while(c<5){
        printf("%3d",(mul*num));



mul++;
    num++;
    c++;


    }


    printf("\n");

    r++;

}

return 0;}
