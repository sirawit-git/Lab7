#include<iostream>
using namespace std;

	//ไม่ต้องเติม function main()
char before(char A) {
    if (A < 'A' || A > 'Z') {
        return '0';
    }

    if (A == 'A') {
        return 'Z';
    }

    return A - 1;
}


int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
