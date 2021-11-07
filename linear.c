#include<stdio.h>
int linear_search(int a[],int n,int key){
int i;
for(i=0;i<n;i++){
 if(a[i] == key){
    return i;
 }
}
 return -1;
}
int main(){
         int a[50],n,i,ans,key;
         printf("enter array size:");
         scanf("%d",&n);
         printf("enter array elements");
         for(i=0;i<n;i++){
           scanf("%d",&a[i]);
        }
        printf("enter element to be searched");
        scanf("%d",&key);
        ans = linear_search(a,n,key);
        if(ans == -1)
          printf("element not found");
        else
          printf("element found at %d",ans+1);
}
















