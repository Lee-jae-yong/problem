#include <iostream>
using namespace std;
int main() {
	int n, k;
	int last = 0;
	int total = 1;
	int sub = 1;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		total = total * (n - i);
		sub = sub * (i + 1);
	}
	last = total / sub;
	cout << last;
}