#include<iostream>
using namespace std;

int fibonacciNumber(int n){
    // Write your code here.
    int nextnum;
    int a=0,b=1;
    if (n==0 || n==1){
        return n;
    }
 
	for(int i=1 ;i<n;i++ ){
        nextnum=a+b;
    a=b;
    b=nextnum;    
    }
    return b;
}

int main(){

    int n;
    cin>>n;
    int result=fibonacciNumber( n);
cout<<result;
    return 0;
}



// 5
// 95
// 93
// 22
// 93
// 9
// 407059028
// 720754435
// 17711
// 720754435
// 34