#include<iostream>
using namespace std;
int Partition(int *arr,int s,int e){
    int cnt=0,pivotIndex=0;
    int pivotElement=arr[s];
    for (int i = s+1; i <=e; i++) {
        if(arr[i]<arr[pivotElement])
            cnt++;
    }
    pivotIndex=s+cnt;
    swap(arr[s],arr[pivotIndex]);
    int i=s,j=e;

    while(i<pivotIndex && j> pivotIndex){
        while(arr[i]<= pivotElement){
            i++;
    }
        while(arr[j]>pivotElement){
            j--;
    }

    if(i<pivotIndex && j> pivotIndex)
        swap(arr[i++],arr[j--]);
}
return pivotIndex;
}
// int Partition(int *arr,int ,int);
void QuickSort(int *arr,int s,int e){
    if(s>=e)
        return;
    int pi=Partition(arr,s,e);
    QuickSort(arr,s,pi-1);
    QuickSort(arr,pi+1,e);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    QuickSort(arr,0,n-1);

    cout<<"Your Sorted Array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}