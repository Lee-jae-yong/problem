#include<iostream>
#include<vector>
using namespace std;

void maxch(int a,int b) {
	int max = 1;
	vector<int> maxa;
	vector<int> maxb;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0) {
			maxa.push_back(i);
		}
	}
	for (int j = 1; j <= b; j++)
	{
		if (b % j == 0) {
			maxb.push_back(j);
		}
	}
	for (int i = 0; i < (int)maxa.size(); i++)
	{
		for (int j = 0; j < (int)maxb.size(); j++)
		{
			if (maxa[i] == maxb[j]) {
				max = maxa[i];

			}
		}

	}
	cout << max << endl;
}
void minch(int a, int b) {
	int min = a * b;
	vector<int> mina;
	vector<int> minb;
	for (int i = 1; i <= a; i++) {
		mina.push_back(a * i);
	}
	for (int j = 1; j <= b; j++) {
		minb.push_back(b * j);
	}
	for (int i = 0; i < (int)mina.size(); i++) {
		for (int j = 0; j < (int)minb.size(); j++) {
			if (mina[i] == minb[j]) {
				min = mina[i];
				cout <<  min << endl;
				return;
			}
		}
	}

	cout << min << endl;
}

int main() {
	int a, b;
	cin >> a >> b;
	maxch(a, b);
	minch(a, b);
	return 0;
}
