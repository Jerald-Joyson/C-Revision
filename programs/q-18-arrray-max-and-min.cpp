#include <bits/stdc++.h>

using namespace std;


int main(){
	int arr[] = {10,12,70,48,22,8};
	// int aSize = size(arr);
	int aSize = sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Maximum is : "<<*max_element(arr,arr+aSize)<<endl;
	cout<<"Minimum is : "<<*min_element(arr,arr+aSize)<<endl;
	
	return 0;
}


/*
int main(){
	
	int arr[] = {10,12,100,48,22,18};
	int larg = -999,min = 999;
	for(int i=0;i<size(arr);i++){
		if(arr[i] > larg){
			larg = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
		
	}
	cout<<"largest is : "<< larg <<endl;
	cout<<"Smallest is : "<< min <<endl;
	
	return 0;
}
*/
