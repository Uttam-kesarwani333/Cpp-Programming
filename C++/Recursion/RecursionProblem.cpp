#include<iostream>
using namespace std;
void NtoOne(int n){
    if (n==0)
        return ;
    NtoOne(n-1);
    cout<<n<<" ";
}

int fact(int n){
    if(n==0||n==1)
        return 1;
     return n*fact(n-1);
}
int fib(int n){
    if(n==0||n==1)
        return n;
    return fib(n-1)+fib(n-2);
}
void reverse(int n){
    if(n==0)
        return;
    cout<<n%10;
    reverse(n/10);
}
int sumDigit(int n){
    if(n==0)
        return 0;
    return n%10 + sumDigit(n/10);
}
void ArrayPrint(int *arr,int n){
    if (n==0)
        return ;
    cout<<*arr<<" ";
    ArrayPrint(arr+1,n-1);
}
int LS(int *arr,int n,int key=3){
    if(n<=0)
        return 0;
    else if (*arr== key)
        return 1;
    LS(arr+1,n-1);
}
bool Sorted(int *arr,int n){
    if(n<=1)
        return true;
    if(*arr>*(arr+1))
        return false;
    Sorted(arr+1,n-1);
} 
int getSum(int *arr,int n){
    if (n==0)
        return 0;
    return *arr+getSum(arr+1,n-1);
}
int maxi(int *arr,int n,int m=0){
    if(n==0)
        return m;
    else if (*arr>m){
        m=*arr;
    }
        maxi(arr+1,n-1,m);
 }
int mini(int *arr,int n,int m=10000){
    if(n==0)
        return m;
    else if (*arr<m){
        m=*arr;
    }
        mini(arr+1,n-1,m);
 }
int main(){
    int n;
    cout<< "Emter a Number : ";
    cin>>n;
    NtoOne(n);
    cout<<"Factorial Number -> "<<fact(n);
    cout<<"Fibonacci Number -> "<<fib(n);
    cout<<"Reverse Print ->"; 
    cout<< reverse(n);
    cout<<"sumDigit -> "<<sumDigit(n);



    int size;
    cout<<"Enter a Size";
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Your Array  : ";
    ArrayPrint(arr,size);
    cout<<"Element is present or not -> "<<LS(arr,size);
    cout<<"Element Sorted or not -> "<<Sorted(arr,size);
    cout<<"Sum of Element -> "<<getSum(arr,size);
    cout<<"Maximum Element -> "<<maxi(arr,size);
    cout<<"Minimum Element -> "<<mini(arr,size);

 
    return 0;
}