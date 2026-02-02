#include <stdio.h>

int count_char(const char *s, char ch) {
	int count = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == ch) {
			count++;
		}
	}
	return count;
}

int count_words(const char *s) {
	int spaces = count_char(s, ' ');
	if (s[0] == '\0' || s[0] == '\n') {
		return 0;
	}
	return spaces + 1;
}

int main() {
	char str[200];
	char ch;

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	printf("Enter a character: ");
	scanf(" %c", &ch);

	printf("Frequency of '%c' = %d\n", ch, count_char(str, ch));
	printf("Words = %d\n", count_words(str));

	printf("Alphabet frequency:\n");
	for (char c = 'a'; c <= 'z'; c++) {
		int cnt = count_char(str, c);
		if (cnt > 0) printf("%c : %d\n", c, cnt);
	}
    
	return 0;
}
