#include<iostream>
using namespace std;

int main(){
	int num1, num2;
	int sum, difference, product, quotient;
	
	cout<<"Enter two Integers:\n";
	cin>>num1>>num2;
	
	sum = num1 + num2;
	difference = num1 - num2;
	product = num1 * num2;
	quotient = num1 / num2;
	
	cout<<"The sum of num1 and num2 is:"<<sum<<endl;
	cout<<"The sum of num1 and num2 is:"<<difference<<endl;
	cout<<"The sum of num1 and num2 is:"<<product<<endl;
	cout<<"The sum of num1 and num2 is:"<<quotient<<endl;
}
