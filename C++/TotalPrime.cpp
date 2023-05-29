// #include<iostream>
// using namespace std;
// int isPrime(int num){
//         for(int i=2;i<num;i++){
//             if (num%2==0){
//                 return 0;
//             }
//         }return 1;
//     }
// int TotalPrime(int S, int E){
//     int cnt=0;
//     for (int i=S;i<=E;i++){
//         if(isPrime(i)==1){
//             cnt++;
//         }
//     }
//     return cnt;
// }   
// int main() {
   
//     int S,E;  
//     cin>>S>>E;
// cout <<TotalPrime(S,E);
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int isprime(int num){
   if (num <= 1)
      return 0;
   for (int i = 2; i <= num/2; i++){
      if (num % i == 0)
         { return 0; }
   }
   return 1; //if both failed then num is prime
}
int countPrimes(int strt,int end){
   int count=0;
   for(int i=strt;i<=end;i++){
      if(isprime(i)==1)
         { count++; }
   }
   return count;
}
int main(){
   int START=2, END=10;
   cout <<endl<<"Primes in Ranges : "<<countPrimes(START,END);
   return 0;
}