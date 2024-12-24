#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex addComplex(Complex c1, Complex c2);

int main() {
    Complex c1, c2, sum;

    printf("Enter the first complex number (real and imaginary part): ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter the second complex number (real and imaginary part): ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = addComplex(c1, c2);

    printf("The sum of the two complex numbers is: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}

Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
