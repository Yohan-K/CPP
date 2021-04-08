#include <stdio.h>

int main() {
	char str[3][10] = { "Hello", "World", "Yohan" };
	char *p_str[3];
	
	for (int i = 0; i < 3; i++) {
		p_str[i] = str[i];
	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n", p_str[i]);
	}
}
