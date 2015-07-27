#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "watchdog.h"

using namespace std;

int main(void)
{
	if (processCheck == true) {
		printf("good\n");
	}
	else printf("bad\n");
	return 0;
}