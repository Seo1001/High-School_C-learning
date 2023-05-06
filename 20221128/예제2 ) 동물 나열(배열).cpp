#include <stdio.h>

int main(void) {
	
	char animal[5][20];
	int i;
	int count;
	
	count = sizeof(animal) / sizeof(animal[0]);
	
	for (i = 0; i < count; i++) {
		
		scanf("%s", animal[i]);
	}
	
	printf("\n");
	
	for (i = 0; i < count; i++) {
		
		printf("%s, ", animal[i]);
	}
	
	return 0;
	
} 

// 사자
// 코끼리
// 호랑이
// 기린
// 원숭이

// 사자, 코끼리, 호랑이, 기린, 원숭이,