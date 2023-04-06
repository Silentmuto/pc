// Ce se afiseaza?

int functie(int x)
{
	if (x + 2)
	{
		printf("DA!\n");
	}
	else
	{
		printf("BA!\n");
	}
}

int main(void)
{
	functie(2);
	functie(-2);
	functie(-1);
	functie(0);
	return 0;
}
