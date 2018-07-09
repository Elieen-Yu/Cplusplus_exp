#include<iostream>
#include<stdio.h>
using namespace std;

void infection(int n, char obj[101][101]) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (obj[i][j] == '!') obj[i][j] = '@';
			}
		}
	}

int main() {
	char a[101][101];
	int n, m, sum=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	cin >> m;
	for (int d = 1; d <= m; d++) {
		infection(n, a);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] == '@') {
					if (i > 0 && a[i - 1][j] == '.')
						a[i - 1][j] = '!';
					if (i + 1 <n && a[i + 1][j] == '.')
						a[i + 1][j] = '!';
					if (j > 0 && a[i][j - 1] == '.')
						a[i][j - 1] = '!';
					if (j + 1 < n && a[i][j + 1] == '.')
						a[i][j + 1] = '!';
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == '@') sum++;
		}
	}
	cout << sum << endl;
	return 0;
}