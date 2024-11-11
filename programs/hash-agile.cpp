#include<iostream>
using namespace std;

bool fibonacci(int num){

	int a=0,b=1,c=0;

	if(num==a || num==b){
		return true;
		
	}
	c=a+b;
	if(c==num){return true;}
	while(c<=100){
		a=b;
		b=c;
		c=a+b;
		if(c==num){return true;}
	}
	return false;
}

bool prime(int num){
	if(num == 0 || num == 1){
		return false;
	}
	for(int j = 2; j<=num/2; j++ ){
		if(num % j == 0){
			return false;
		}
	}
	return true;
}

int main(){

	for(int i=1;i<=100;i++){

		if(fibonacci(i) && prime(i)){
			cout<<"HashAgile "<<endl;
		}
		else{
			if(fibonacci(i)){
                        	cout<<"Agile "<<endl;
                	}
                	else if(prime(i)){
        	                cout<<"Hash "<<endl;
	                }
		}
	}


	return 0;
}
