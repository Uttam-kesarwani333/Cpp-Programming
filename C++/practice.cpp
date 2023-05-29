
 
#include<iostream>
using namespace std;
int main()
{
  //Type your code here
	int arr[100]={0};
	int n;
	int temp=0;
	cin>>n;
	for (int i=0;i<n;i++){
	cin>>arr[i];
	}
	for (int i=0;i<n;i++){
		for (int j=1;j<=n;j++){
				if (arr[i]>arr[j]){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
	cout<<"Largest Element in the Array :"<<arr[1];
	
	return 0;
		
}
 