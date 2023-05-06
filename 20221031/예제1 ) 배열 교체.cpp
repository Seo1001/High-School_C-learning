#include <stdio.h>

int main(void) {
	
	char str[80] = "hwiwon";
	
	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n", str);
	
	return 0;
}

// 최초 문자열 : hwiwon
// 문자열 입력 : hello
// 입력 후 문자열 : hello