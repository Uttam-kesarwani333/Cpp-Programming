#include<iostream>
using namespace std;

void DecToBinary(int n){
    int rev=0;
    int digit;
    int cnt=0;
    while(n){
        digit=n%2;
        if (digit==1){
            cnt++;
        }
        n/=2;
        rev=rev*10 +digit;
    }
    cout<<rev;
    cout<<endl<<cnt<<endl;
}
    int main(){
        
        DecToBinary(15);
        return 0;
    }
