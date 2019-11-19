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

