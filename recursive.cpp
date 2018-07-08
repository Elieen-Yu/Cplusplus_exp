// PKU programming exercise
// by Yijia Yu
#include "stdafx.h"
#include<iostream>
#include<vector>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<vector<char> > matrix(n, vector<char>(n));
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			cin >> matrix[row][col];
		}
	}
	int m = 0;
	cin >> m;
	for (int d = 1; d < m; d++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (matrix[i][j] = '!') matrix[i][j] = '@';
			}
		}
		for (int row = 0; row < n; row++) {
			for (int col = 0; col < n; col++) {
				if (matrix[row][col] == '@') {
					if (row < n - 1 && matrix[row + 1][col] == '.')matrix[row + 1][col] = '!';
					if (col > 0 && matrix[row][col - 1] == '.')matrix[row][col - 1] = '!';
					if (col < n - 1 && matrix[row][col + 1] == '.')matrix[row][col + 1] = '!';
					if (row > 0 && matrix[row - 1][col] == '.')matrix[row - 1][col] = '!';
				}
			}
		}
	}
	int sum = 0;
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			if (matrix[row][col] == '@')sum++;
		}
	}
	cout << sum << endl;
	return 0;
}
