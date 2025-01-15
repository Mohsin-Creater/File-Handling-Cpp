#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	try {
	cout<<"Enter the first number :";
	if (!(cin>>num1)) {
		throw "not integer !";
	}
	cout<<"Enter the second number :";
	if (!(cin>>num2)) {
		throw "not integer !";
	}
	int sum=num1 + num2;
	cout<<"The sum of"<<"  "<<num1<<"  "<<"and"<<"  "<<num2<<"  "<<"is :" <<sum<<endl;
} catch (const char* e) {
	cout<<"Exception :" << e <<endl;
}
	return 0;
}