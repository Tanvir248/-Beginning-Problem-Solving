#include<stdio.h>
int main(){
int arr[10],i,j,temp,m[10];
for(i=0;i<3;i++){
scanf("%d",&m[i]);
arr[i]=m[i];
}

for(i=0;i<3;i++){
for(j=i+1;j<3;j++){
if(arr[i]>arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(i=0;i<3;i++){
printf("%d\n",arr[i]);
}
for(i=0;i<3;i++){
printf("%d\n",m[i]);
}
}

