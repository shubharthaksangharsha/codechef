#include<iostream>
using namespace std;
int main(){
	//variables declaration :-
	int num,cases,r,sum;
	cin>>cases;
	sum = 0;
	
	//algorithim:-
	for(int i = 0; i<cases; i++){
		
		cin>>num;
		for (int j = 0 ; num!=0; j++){
		
		r = num%10;
		sum = sum+r;
		num = num/10;

		}
		cout<<sum<<endl;
		sum = 0; 
	}
	
	
	return 0;
}
