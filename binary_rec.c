#include<stdio.h>
int binary_search(int [],int,int,int );
int main(){
         int a[50],n  ,i,ans,key;
         printf("enter array size:");
         scanf("%d",&n);
         printf("enter array elements");
         for(i=0;i<n;i++){
           scanf("%d",&a[i]);
        }
        printf("enter element to be searched");
        scanf("%d",&key);
        ans = binary_search(a,0,n-1,key);
        if(ans == -1)
          printf("element not found");
        else
          printf("element found at %d",ans+1);
}
int binary_search(int a[],int low,int high,int key){
int mid;
    mid = (low+high)/2;
    while(low<=high){

      if(key < a[mid])
        binary_search(a,low,mid-1,key);
      else if(key > a[mid])
        binary_search(a,mid+1,high,key);
      else
        return mid;
}return -1;
}
