int rer(int x, int y)
{
    if (x <= 1)
        return 0;
    if (x == 1)
        return 1;
    else
    {
        if (x % i == 0)
            return 0;
        else
            return is_prime(x, i - 1);
    }
}
int is_prime_number(int n)
{
	return (rer(n, 2));
}