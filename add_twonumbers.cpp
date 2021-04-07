/*Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.

Program is very simple, given two integers A and B, write a program to add these two numbers.

Input

The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains two Integers A and B.

Output

For each test case, add A and B and display it in a new line.*/



#include<iostream>
using namespace std;

int main(){
	//variables declaration :-
	int T,num1,num2,total;
	cin >> total;
	
	
	//algorithim:-
	for(int i = 0 ; i< total; i++){
		cin>>num1>>num2;
		T = num1+num2;
		cout<<T<<endl;
	}
		
		
	return 0;
	

}
