/*You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!*/

#include<iostream>
using namespace std;

int main(){
	//variables declarations  :-
	
	long double cases,num,fac=1;
	cin>>cases;
	//algorithim :-
	
	for(int i = 0 ; i< cases; i++){
		
	cin>>num;
		
	for(int j =1; j<=num; j++){
		
		fac = fac*j;
		
		}

	cout<<fac<<endl;
	fac = 1 ;
		
	}

	return 0;
}
