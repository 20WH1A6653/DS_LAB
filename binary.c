#include<stdio.h>
int binary_search(int a[],int n,int key){
int mid,low=0,high = n-1;
while(low<=high){
    mid = (low+high)/2;
      if(key < a[mid])
        high = mid-1;
      else if(key > a[mid])
        low = mid+1;
      else
        return mid;
}return -1;
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
        ans = binary_search(a,n,key);
        if(ans == -1)
          printf("element not found");
        else
          printf("element found at %d",ans+1);
}







