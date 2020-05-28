#include <iostream>
using namespace std;

int main(int argv, char **argc){
	cout << "Please input two integers" << endl;
	long a, b;
	cin >> a >> b;
	if(argv != 3) return -1;
	return a+b;
}
