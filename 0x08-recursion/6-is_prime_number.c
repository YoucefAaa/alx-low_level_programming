int rer(int x, int y)
{
    if (x <= 1)
        return 0;
    if (x == 1)
        return 1;
    else
    {
        if (x % y == 0)
            return 0;
        else
            return rer(y, y - 1);
    }
}
int is_prime_number(int n)
{
	return (rer(n, 2));
}
