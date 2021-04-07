/*Write a program to find the remainder when an integer A is divided by an integer B.

Input
The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.

Output
For each test case, find the remainder when A is divided by B, and display it in a new line.*/

#include<iostream>
using namespace std;

int main(){
	//variables declaration :-
	int cases,num1,num2,remainder;
	
	cin>>cases;
	
	//algorithim :-
	for(int i=0; i<cases;i++){
	cin>>num1>>num2;
	remainder = num1%num2;
	cout<<remainder<<endl;
	}
	return 0;	
}
