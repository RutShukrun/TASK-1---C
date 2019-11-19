#include <stdio.h>

float add (float x, float y);
	
float sub (float x, float y);

float mul (float x, float y);

float Div (float x, float y);

double Exp (int x);

double Pow (double x, int y);

int main()
{
    //getting number from the user
    printf("Please insert a real number: ");
	double number;
	scanf ("%lf", &number); 
	
	//calculating anf printing the f(x)s
	double ans1 = Exp((int)number) + Pow(number,3) - 2;
	double ans2 = mul(3,(float)number) + mul(2,(float)Pow(number,2));
	double ans3 = sub((float)Div(mul(4,(float)Pow(number,3)) ,5),(float)Pow(2,(int)number));
	
	printf("The value of f(x) = e^x + x^3 -2 at the point %0.2f is: %0.4f \n",number,ans1);
	printf("The value of f(x) = 3*x + 2*x^2 at the point %0.2f is: %0.4f \n",number,ans2);
	printf("The value of f(x) = (4*x^3) / 5 - 2*x at the point %0.2f is: %0.4f \n",number,ans3);

    return 0;
}
