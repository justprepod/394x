#include <stdio.h>

#define BUFFER_SIZE 1024

int main(int argc, char **argv) {
	FILE *f;
	char *filename;
	char mode[] = "r";
	char buffer[BUFFER_SIZE];

	if (argc != 2) {
		puts("files by 394x");
		puts("Puts contents of text file into stdout");
		puts("Usage: files.exe <filename>");
		puts("Example: files.exe file.txt");
		return 2;
	}

	filename = argv[1];
		
	f = fopen(filename, mode);

	if (f == NULL) {
		printf("Cannot open file '%s'\n", filename);
		return 1;
	}

	while (!feof(f)) {
		fgets(buffer, BUFFER_SIZE, f);
		printf("%s", buffer);
	}

	fclose(f);

	return 0;
}