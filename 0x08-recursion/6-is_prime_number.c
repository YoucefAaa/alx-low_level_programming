

int rer(int x, int y)
{
    if (n <= 1)
        return 0;
    if (i == 1)
        return 1;
    else
    {
        if (n % i == 0)
            return 0;
        else
            return is_prime(n, i - 1);
    }
}
int is_prime_number(int n)
{
	return (rer(n, 2));
}
