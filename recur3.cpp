#include <iostream>
#include <vector>
using namespace std;

int cons_position(char str[],int n) {
	if (str[n] != str[0]) {
		return n;
	}
	else
		return cons_position(str, n + 1);
}

int pros_position(char str[],int n, int m) {
	if (str[m] != '!'&&str[m] != str[n]) {
		str[m] = '!';
		return m;
	}
	else
	{
		return pros_position(str, n, m - 1);
	}
}

int main()
{
	char str[101] = {};
	cin.getline(str, 101);
	int con = 1;
	while (str[con]!='\0')
	{
		con = cons_position(str, con);
		int pro = pros_position(str, con, con-1);
		cout << pro << " " <<con << endl;
		con++;
	}
		
	return 0;
}
