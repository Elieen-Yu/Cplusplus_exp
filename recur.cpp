#include<iostream>
#include<stdio.h>
using namespace std;
char a[501];
int i = 0;
int recur() {
	char c = a[i];
	i++;
	if (c == ' ')
		return 1;
	if (c != ' '&&c != '\0') {
		recur();
		cout << c;
	}
	return 1;
}
	
int main() {	
	cin.getline(a,501);
	while (a[i] != '\0') {
		if (recur() == 1)  
			cout << ' ';
	}
	if (a[i] == '\0') {
		cout << endl; 
		return 0;
	}

	return 0;
}