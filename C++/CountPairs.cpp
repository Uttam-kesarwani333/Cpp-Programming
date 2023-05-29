
// Wrong Method PLease Try Again

#include<iostream>
using namespace std;
int main(){
    int cnt=0;
    int sum;
    int size;
    int arr[100];
    cout<<"Enter a Size of an Array : ";
    cin>>size;

    for (int i =0;i<size;i++){
        cin>>arr[i];
    }
    for (int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Enter a Number of Count Pairs : "<<endl;
    cin>>sum;
    for(int i=0;i<size;i++){
        for (int j = 0; j <size; j++)
        {
           if(arr[i] + arr[j]==sum)
           cnt++;
        }
        
    }
cout<<"Numbers :"<<cnt;

    return 0;
    }