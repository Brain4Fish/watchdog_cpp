#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	char process_check;
	char proc = system("ps afx | grep "dpi-engine" | grep -v grep");
	if (!process_check.compare(proc) {
		cout << "dont find dpi process" << endl;
	}
	else {
		cout << "find dpi process" << endl;
	}
	return 0;
}
