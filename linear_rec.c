#include<stdio.h>
int i=0;
int linear_search(int a[],int n,int key){
if(i>n)
  return -1;
else if(a[i] ==  key)
  return i+1;
else
  ++i;
  return linear_search(a,n,key);
}
int main(){
         int a[50],n,i,ans,key,x=0;
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
          printf("element found at %d",ans);
}
