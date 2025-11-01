static int _sqrt_guess(int n, int g)
{
	if (g > n / g)
		return (-1);

	if (g == n / g && (g * g) == n)
		return (g);

	return (_sqrt_guess(n, g + 1));
}

/**
 * _sqrt_recursion - devuelve la raíz cuadrada natural de n
 * @n: número entero
 * Return: raíz cuadrada natural de n; si no existe, -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_guess(n, 1));
}
