#include <iostream>
using namespace std;

void rotateArray(int arr[],int s,int k){
	int l=0;
	while(l<k){
		int temp = arr[s-1];
		for(int i=s-1;i>0;i--){
			arr[i] = arr[i-1];
		}
		arr[0] = temp;
		l++;
	}

}


int main(){
	int arr[]={10,7,33,4,9};
	int s = size(arr);
	for(int i=0;i<s;i++){
                cout<<arr[i]<<"\t";
        }
	cout<<endl;
	rotateArray(arr,s,3);

	for(int i=0;i<s;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<endl;

	return 0;
}
