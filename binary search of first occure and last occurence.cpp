#include <iostream>
using namespace std;
int firstoccurence(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){//right me jao
            s=mid+1;
        }
        else if(key<arr[mid]){//left me jao
            e=mid-1;
        }
          mid=s+(e-s)/2;
    }
    return ans;
}
int lastoccurence(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){//right me jao
            s=mid+1;
        }
        else if(key<arr[mid]){//left me jao
            e=mid-1;
        }
          mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
   int even[5]={1,2,3,3,5};
   cout<<"at index"<<firstoccurence(even,5,3);
   cout<<"at index"<<lastoccurence(even,5,3);
   

    return 0;
}