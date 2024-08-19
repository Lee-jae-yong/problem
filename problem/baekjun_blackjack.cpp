#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int cardc, blackj;
	int card[100];
	
	
	cin >> cardc >> blackj;
	for (int i = 0; i < cardc; i++)
		cin >> card[i];
	int sum = 0;
    int bestsum = 0;

 
    for (int i = 0; i < cardc - 2; i++) {
        for (int j = i + 1; j < cardc - 1; j++) {
            for (int k = j + 1; k < cardc; k++) {
                int sum = card[i] + card[j] + card[k];
                if (sum <= blackj && sum > bestsum) {
                    bestsum = sum;
                }
            }
        }
    }
	cout << bestsum;
}