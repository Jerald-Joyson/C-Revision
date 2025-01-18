#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[] = {5,3,6,7,5,3};	
	int count=0, aSize=size(arr);
	double avg;	
	
	for(int i=0;i<aSize;i++){
		count += arr[i];		
	}	
	avg = (double)count/aSize;	
	cout<<"average is : "<<avg<<endl;
	return 0;
}
