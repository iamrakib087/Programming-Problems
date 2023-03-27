#include<stdio.h>
int main(){
int i,k,kp,count=0;
scanf("%d %d",&k,&kp);
int arr[k];
for(i=0; i<k; i++){
    scanf("%d",&arr[i]);
}
for(i=0; i<k; i++){
    if(arr[i]>=arr[kp-1] && arr[i]>0){
        count++;
    }
else break;
}
printf("%d",count);





return 0;}
