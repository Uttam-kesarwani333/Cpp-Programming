#include<iostream>
using namespace std;

int main() {
    //Write your code here
    int totalsalary , allow ;
    float pf,hra,da;
    int basic;
    string grade;
    cin>>basic>>grade;
    hra=(float)(20/100)*basic;
    da=(float)(50/100)*basic;
    if (grade == "A"){
        allow = 1700;
    }
    else if (grade ==  "B") {
        allow = 1500;
    }
    else {
        allow = 1300;
    }

    pf = (float)(11/100)*basic;
    totalsalary = basic + hra + da + allow - pf;
    cout<<totalsalary<<endl;
    return 0;
}