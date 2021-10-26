#include "../include/cipher.h"

int main (int argc, char *argv[]) {
	if(argc == 1) {
		printf("%s\n", usage_str);
		return EXIT_FAILURE;
	}
	else if (strcmp(argv[1], "-h") == 0) {
		printf("%s\n", usage_str);
		return EXIT_SUCCESS;
	}
}