#include <iostream>
using namespace std;
 int fact=1;
int factorial(int n){
     if (n<0)
     cout<<"Error";
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main() {
    //Write your code here
	int num;
    cin >>num;
    
    int result=factorial(num);
    cout <<result;
    return 0;
}
