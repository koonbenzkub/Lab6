#include<iostream>
using namespace std;

char before(char x){
	char before(char X){
	if(X == 65){
		return X = 'Z';
	}
	if (x >= 65 && x <= 90){
		x--;
	}else{
		return '0';
	}
	return X;
}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
