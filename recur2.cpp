#include<iostream>
using namespace std;

int recur(int num) {
	if (num == 1)
		cout << "End" << endl;
	else
	{
	if (num % 2 != 0) {
		int o = num;
		num = num * 3 + 1;
		cout << o << "*3+1="<< num<<'\n';
		recur(num);
	}
	else
	{
		int e = num;
		num = num / 2;
		cout << e <<"/2="<< num<<'\n';
		recur(num);
	}
	}
	return 0;
}

int main() {	
	int n,m=0;
	cin >> n;
	recur(n);
	return 0;
}