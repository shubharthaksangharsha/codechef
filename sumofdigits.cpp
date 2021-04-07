/*You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, calculate the sum of digits of N, and display it in a new line.*/



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
