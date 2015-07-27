#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main();

bool processCheck(void) {
	if (system("ps afx | grep 'dpi-engine' | grep -v grep") == true) {
		printf("Dpi process found\n");
		return 0;
	}
	else {
		printf("Dpi process not found\n");
		return 1;
	}
}

