#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int compare(string a, string b) {
	if (size(a) == size(b))
		return a < b;
	else
		return size(a) < size(b);
}

int main() {
	int n;
	cin >> n;
	string word[20000];
	for (int i = 0; i < n; i++) {
		cin >> word[i];
	}
	sort(word, word + n, compare);
	for (int i = 0; i < n; i++)	
	{
		if (word[i] == word[i + 1])
			continue;
		cout << word[i] << endl;
	}
}