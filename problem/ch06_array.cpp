#include <iostream>
using namespace std;
class array {
	int s1;
	int s2;
	int size;
	int& retsize;
	
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& resize);
};
static int* concat(int s1[], int s2[], int size) {
	int* con = new int[size * 2];
	for (int i = 0; i < size; i++) {
		con[i] = s1[i];
		con[size + i] = s2[i];

	}
	return con;
}

static int* remove(int s1[], int s2[], int size, int& resize) {
	int* con1 = new int[size];
	int k = 0;
	for (int i = 0;i < size;i++){
		for (int j = 0; j < size; j++) {
			if (s1[i] != s2[j]) {
				con1[k++] = s1[i];
			}
		}
	}
	resize = k;
	delete[] con1;
	return con1;
}


int main() {
	int s1[] = { 1, 2, 3, 4, 5 };
	int s2[] = { 4, 5, 6, 7, 8 };
	int size = 5;
	int newSize;
	cout << concat(s1, s2, size);
	cout << remove(s1, s2, size, newSize);
}
