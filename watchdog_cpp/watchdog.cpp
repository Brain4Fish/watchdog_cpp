#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	string process_check = system("ps afx | grep "dpi - engine" | grep -v grep");
	if (process_check == "") {
		cout << "dont find dpi process" << endl;
	}
	else {
		cout << "find dpi process" << endl;
	}
	return 0;
}
