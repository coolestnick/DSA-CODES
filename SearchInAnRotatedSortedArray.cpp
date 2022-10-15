#include<iostream>
using namespace std;
int GetPivot(int arr[],int size){

    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int BinarySearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2
    }
    return -1;
}

int main(){
    int arr[5]={};
    int pivot=GetPivot(arr,5);
    if(k>=arr[pivot] && k<=arr[4]){
        
    }

}