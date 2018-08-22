#include <iostream>
using namespace std;

int n[3];
int main() {
	cin >> n[0] >> n[1] >> n[2];
	while (n[0]&&n[1]&&n[2]){
		n[0] *= n[0]; n[1] *= n[1]; n[2] *= n[2];
		if (n[0]==n[1]+n[2] || n[1]==n[2]+n[0] || n[2]==n[1]+n[0]) cout << "right" << endl;
		else cout << "wrong" << endl;
		cin >> n[0] >> n[1] >> n[2];
	}
	return 0;
}