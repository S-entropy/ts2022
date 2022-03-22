#include <stdio.h>
#include <limits.h>

int main() {
	float a;
	double b;

	a = 3.14159;
	b = 1.79e+308;
	printf("%f\n", a);
	printf("%lf\n", b);
}