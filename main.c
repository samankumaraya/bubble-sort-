#include <stdio.h>
#include <stdlib.h>

int binarysearch(int arr[],int first,int last,int x){
 if(last<=first){
    int middle;
    middle=(first+last)/2;
    if(arr[middle]==x)
        return middle;
    if(x>arr[middle])
        return binarysearch(arr,,middle+1,last,x);
    if(x<arr[middle])
        return binarysearch(arr,,first,middle-1,x);
 }
 return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n=sizeof(arr)/sizeof(arr[0]);

    int x=15;
    int ans=binarysearch(arr,0,n-1,x)

    if(ans==-1){
        printf("Item not found");
    }else
       printf("item pound at %d position",ans+1);

    return 0;
}
