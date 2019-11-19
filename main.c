#include <stdio.h>
	
float add (float x, float y)
{
	return x+y;
}
	
float sub (float x, float y)
{
	return x-y;
}
	
float mul (float x, float y)
{
	return x*y;
}

float Div (float x, float y)	
{
	return x/y;
}
	
double Exp (int x) //e=2.71828
{
    double e=2.71828;
	if (x==1)
	{
		return e;
	}
	else if (x==0)
	{
		return 1;
	}
	else
	{
		double temp=e;
		for (int i=1; i<=x; i++)
		{
			temp=temp*e;
			i++;
		}
		return temp;
	}
}
	
double Pow (double x, int y)
{
	if (y==1)
	{
	return x;
	}
	else if (y==0)
	{
		return 1;
	}
	else
	{
		double temp=x;
		for (int i=1; i<=y; i++)
		{
			temp=temp*x;
			i++;
		}
		return temp;
	}
}

int main()
{
    printf("Please insert a real number: ");
	double number;
	scanf ("%lf", &number); //getting number from the user
	
	double temp1 = Pow(number,3);
	double temp2 = Exp((int)number);
	double temp3 = 0;
	double ans1 = temp1+temp2-2;
//	double ans1 = Exp((int)number) + Pow(number,3) - 2;
	double ans2 = mul(3,(float)number) + mul(2,(float)Pow(number,2));
	double ans3 = sub((float)Div(mul(4,(float)Pow(number,3)) ,5),(float)Pow(2,(int)number));
	
	printf("The value of f(x) = e^x + x^3 -2 at the point %f is: %0.4f \n",number,ans1);
	printf("The value of f(x) = 3*x + 2*x^2 at the point %f is: %0.4f \n",number,ans2);
	printf("The value of f(x) = (4*x^3) / 5 - 2*x at the point %f is: %0.4f \n",number,ans3);

    return 0;
}
