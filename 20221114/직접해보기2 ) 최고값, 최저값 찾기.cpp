#include <stdio.h>

int max(int data[], int size) {
	
	int i;
	int max_s = 0;
	
	for (i = 0; i < size; i++) {
		
		if (max_s < data[i]) {
			
			max_s = data[i];
		}
	}
	
	return max_s;
}

int min(int data[], int size) {
	
	int i;
	int min_s = 101;
	
	for (i = 0; i < size; i++) {
		
		if (min_s > data[i]) {
			
			min_s = data[i];
		}
	}
	
	return min_s;
}

int main(void) {
	
	int ary[10] = {0, };
	
	for (int i = 0; i < 10; i++) {
		
		printf("값을 입력하세요 : ");
		scanf("%d", &ary[i]);
	}
	
	printf("\n");
	printf("최고값 : %d\n", max(ary, 10));
	printf("최저값 : %d\n", min(ary, 10));
	
	return 0;
}

// 값을 입력하세요 : 10
// 값을 입력하세요 : 20
// 값을 입력하세요 : 30
// 값을 입력하세요 : 40
// 값을 입력하세요 : 50
// 값을 입력하세요 : 60
// 값을 입력하세요 : 70
// 값을 입력하세요 : 80
// 값을 입력하세요 : 90
// 값을 입력하세요 : 99

// 최고값 : 99
// 최저값 : 10