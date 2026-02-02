#include <stdio.h>

int main() {
	char line[100];
	char first[30], middle[30], last[30];
	int count;

	printf("Enter full name: ");
	fgets(line, sizeof(line), stdin);

	count = sscanf(line, "%s %s %s", first, middle, last);

	if (count == 2) printf("%c. %s\n", first[0], middle); 
    else if (count == 3) printf("%c. %c. %s\n", first[0], middle[0], last);

	return 0;
}