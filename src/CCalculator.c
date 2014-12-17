#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cCalculatorMain(int argc, char** argv) {
	int i, j;
	if(argc == 3) {
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		//if(i < 0) printf("i is negative");
		//if(j < 0) printf("j is negative");
		printf("Add %d", i+j);
	} else {
		printf("Please pass valid number arguments");
	}
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, char** argv){
    cCalculatorMain(argc, argv);
    return 0;
}

#endif
