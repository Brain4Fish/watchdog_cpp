#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include "watchdog.h"

using namespace std;

int main() {
	
	if (isRunning("dpi-engine") == 0) {
		printf("Dpi process found\n");
	}
	else printf("Dpi process not found\n");
	return 0;
}
