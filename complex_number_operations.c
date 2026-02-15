#include <stdio.h>

// Define structure using typedef
typedef struct
{
    float real;
    float imag;
} Complex;

// Function declarations
Complex input();
Complex Add(Complex a, Complex b);
Complex Sub(Complex a, Complex b);
Complex Mul(Complex a, Complex b);
void display(Complex c);

int main()
{
    Complex num1, num2, num3;

    printf("Enter First Complex Number:\n");
    num1 = input();

    printf("\nEnter Second Complex Number:\n");
    num2 = input();

    num3 = Add(num1, num2);
    printf("\nAddition Result: ");
    display(num3);

    num3 = Sub(num1, num2);
    printf("\nSubtraction Result: ");
    display(num3);

    num3 = Mul(num1, num2);
    printf("\nMultiplication Result: ");
    display(num3);

    return 0;
}

// Input function
Complex input()
{
    Complex c;

    printf("Enter real part: ");
    scanf("%f", &c.real);

    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);

    return c;
}

// Addition
Complex Add(Complex a, Complex b)
{
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Subtraction
Complex Sub(Complex a, Complex b)
{
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

// Multiplication
Complex Mul(Complex a, Complex b)
{
    Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

// Display function
void display(Complex c)
{
    if(c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}
