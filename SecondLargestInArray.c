#include<stdio.h>
#include<stdlib.h>
int maxi(int arr[],int n);

int maxi(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}

int main() {
    int n,k=0,c=0;
    printf("Enter the size of the Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int max1,max2;
    max1=maxi(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]==max1)
        c++;
    }
    if(n==c){
        printf("Does Not Exist");
        exit(0);
    }
    int a[n-c];
    for(int i=0;i<n;i++){
        if(arr[i]==max1)
        continue;
        a[k]=arr[i];
        k++;
    }
    max2=maxi(a,n-c);
    printf("2nd Largest element in the array is %d\n",max2);
 
    return 0;
}