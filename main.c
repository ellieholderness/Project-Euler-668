#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool number_is_square_smooth(int *input_number) {
	int divisor = 2;
	int number = (int) *input_number;
	float square_root = sqrt(number);
	printf("number = %d\n", number);
	printf("root = %f\n", square_root);
	for (divisor = 2; divisor < square_root; divisor++) {
		while (number % divisor == 0 ) {
			number = number / divisor;
			printf("%d, %d\n", number, divisor);
		}
	}

	if (number == 1) {
		return true;
	}

	return false;
}

int main() {

	int c;
	bool smooth;

	printf( "Enter an integer :");
	scanf("%d", &c);
	printf("entered %d\n", c);

    smooth = number_is_square_smooth(&c);

	printf("Smooth: %s\n", smooth ? "true" : "false");

    return 0;
}

