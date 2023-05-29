#include <iostream>
using namespace std;

void sort012(int arr[], int n) 
    //Write your code here
    {  
    int i = 0 ,  countzero = 0 , countone = 0 ,  counttwo = 0 ;  
    while ( i < n )  
    {  
        if ( arr [ i ] == 0 )  
        {  
            countzero = countzero + 1 ;  
        }  
        else if ( arr [ i ] == 1 )  
        {  
            countone = countone + 1 ;  
        }  
        else  
        {  
            counttwo = counttwo + 2 ;  
        }  
        i = i + 1 ;  
    }  
    for  ( i = 0 ; i < countzero ; i++ )  
    {  
        arr [ i ] = 0 ;  
    }  
    for ( i = countzero ; i < countzero + countone ; i++ )  
    {  
        arr [ i ] = 1 ;  
    }  
            for ( i = countzero + countone ; i < n ; i++ )  
    {  
        arr [ i ] = 2 ;  
    }  
}  

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}