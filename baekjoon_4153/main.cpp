#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int n[3];
int main() {
	cin >> n[0] >> n[1] >> n[2];
	while (n[0] != 0 && n[1] != 0 && n[2] != 0) {
		sort(n, n + 3);
		if (pow(n[2], 2) == pow(n[0], 2) + pow(n[1], 2)) cout << "right" << endl;
		else cout << "wrong" << endl;
		cin >> n[0] >> n[1] >> n[2];
	}
	return 0;
}