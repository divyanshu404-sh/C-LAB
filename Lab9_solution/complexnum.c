//Typedef + Function Parameters: Use typedef to define a custom type Complex for complex numbers.
//Write functions to:
//• Input two complex numbers.
//• Add and multiply them.
//• Display results.

#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex add(Complex x, Complex y) {
    Complex r;
    r.real = x.real + y.real;
    r.imag = x.imag + y.imag;
    return r;
}

Complex multiply(Complex x, Complex y) {
    Complex r;
    r.real = x.real * y.real - x.imag * y.imag;
    r.imag = x.real * y.imag + x.imag * y.real;
    return r;
}

void display(Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    Complex a, b, sum, prod;

    printf("Enter first complex number (real imag): ");
    scanf("%f %f", &a.real, &a.imag);

    printf("Enter second complex number (real imag): ");
    scanf("%f %f", &b.real, &b.imag);

    sum = add(a, b);
    prod = multiply(a, b);

    printf("\nSum = ");
    display(sum);

    printf("Product = ");
    display(prod);

    return 0;
}