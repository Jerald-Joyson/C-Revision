#include <bits/stdc++.h>

using namespace std;
/*
bool checkArray(int arr1[],int arr2[],int s1,int s2){
	
	if(s1!=s2){
		return false;
	}
	int i=0;
	while(i!=s1){
		int j=0;
		while(j!=s2){
			if(arr1[i] == arr2[j]){
				break;
			}
			j++;
		}
		if(j == s2){
			return false;
		}
		i++;
	}
	return true;
}
*/

bool checkArray(int arr1[],int arr2[],int s1,int s2){
	if(s1!=s2) return false;
	sort(arr1,arr1+s1);
	sort(arr2,arr2+s2);
	
	for(int i=0;i<s1;i++){
		
		if(arr1[i]!=arr2[i]) return false;
		
	}
	return true;
}

int main(){
	
	int arr1[] = {1,5,2,7,3,8};
	int arr2[] = {8,2,3,5,7,1};
	
	int s1 = sizeof(arr1)/sizeof(arr1[0]);
	int s2 = sizeof(arr2)/sizeof(arr2[0]);
	
	if(checkArray(arr1,arr2,s1,s2)){
		cout<<"array are equal"<<endl;
	}else{
		cout<<"array are not equal"<<endl;
	}	
	return 0;
	
}
