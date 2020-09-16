#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	int stl = 0, alpha = 0;
	char input[500], output[500];
	scanf("%[^\n]s", &input);
	stl = strlen(input);
	for (int i = 0; i < stl; i++) {
		if (islower(input[i]) || input[i] == ' ') {
			if (input[0] == ' ' || input[stl - 1] == ' ') {
				printf("Can't enter space at the start or the end of text\n");
				return 0;
			}
			else if (islower(input[i])) alpha++;
		}
		else {
			printf("Enter lowercase alphabet and space only\n");
			return 0;
		}
	}
	if (alpha > 100) {
		printf("Enter the text that has equal or less than 100 alphabets\n");
		return 0;
	}
	else {
		int k = 0, t = 0;
		while (k <= stl) {
			if (k != stl - 1 && input[k] == 'a' || input[k] == 'e' || input[k] == 'i' || input[k] == 'o' || input[k] == 'u') {
				if (input[k + 1] == 'p' && input[k + 2] == input[k]) {
					output[t] = input[k];
					k += 2;
				}
			}
			else {
				output[t] = input[k];
			}
			k++;
			t++;
		}
	}
	printf("%s\n", output);
	return 0;
}