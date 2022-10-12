#include<iostream>
using namespace std;

int firstocc(int arr[],int size,int key){
    int s=0,e=size-1;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;

        }
        if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int Lastocc(int arr[],int size,int key){
    int s=0,e=size-1;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;

        }
        if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[8]={1,2,3,3,3,3,4,5};
    int index = firstocc(arr,8,3);

    int index1 = Lastocc(arr,8,3);
    cout<<"No. of occurences of any number is "<<(index1-index)+1<<endl;
    return 0;

}