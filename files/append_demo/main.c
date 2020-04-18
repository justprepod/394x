#include <stdio.h>

#define BUFFER_SIZE 1024

int main(int argc, char **argv) {
	FILE *f;
	char *filename;
	char mode[] = "a";
	char buffer[BUFFER_SIZE];

	if (argc != 2) {
		puts("appender by 394x");
		puts("Puts data from stdin to text file");
		puts("Usage: append.exe <filename>");
		puts("Example: append.exe file.txt");
		return 2;
	}

	filename = argv[1];

	f = fopen(filename, mode);

	if (f == NULL) {
		printf("Cannot open file '%s' for appending\n", filename);
		return 1;
	}

	fgets(buffer, BUFFER_SIZE, stdin);

	while (strlen(buffer) > 2) {
		fprintf(f, "%s", buffer);
		fflush(f);
		fgets(buffer, BUFFER_SIZE, stdin);
	}

	fclose(f);

	return 0;
}