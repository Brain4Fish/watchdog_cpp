#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include "watchdog.h"

using namespace std;

int main() {
	char proc = system("ps afx | grep 'dpi-engine | grep -v grep");
	if (!process_check.compare(proc)) {
		printf("dont find dpi process\n");
	}
	else {
		printf("find dpi process\n");
	}
	return 0;
}
