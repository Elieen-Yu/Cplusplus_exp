//matching parentheses 
// input : a string using cin.getline() 
// output: the string in first line and the unmatched '(' or ')' as marked as '$' or '?' under the position of unmatched parentheses
#include <iostream>
using namespace std;
char temp[101];

bool match_left(char str[], int n) {
	if (n>=0){
		if (str[n] == '(') {
			temp[n] = '!';
			return 1;
		}			
		else
			return match_left(str, n - 1);
	}
	else
		return 0;
}

int main() {
	char string[101];
	int c = 0;
	cin.getline(string, 101);
	while (string[c] != '\0') {
		temp[c] = string[c];
		c++;
	}
	int left=0,right = 0;
	for (int i = 0; string[i] != '\0'; i++) {
		cout << string[i];
		if (temp[i] == ')'&& match_left(temp, i - 1)) temp[i] = '!';
	}
	cout << endl;
	for (int i = 0; temp[i] != '\0'; i++) {
		if (temp[i] == '(')
			temp[i] = '$';
		else if (temp[i] == ')')
			temp[i] = '?';
		else
			temp[i] = ' ';
	}
	for (int i = 0; temp[i] != '\0'; i++) {
		cout<<temp[i];
	}
	cout << endl;
}