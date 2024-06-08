#include<iostream>
using namespace std;
//this function is to reverse the array
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
//this function is to print the array
void print(int arr[],int n){
    cout<<"Reversed Array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//this is the main function
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"original array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,n);
    print(arr,n);
    return 0;
}
