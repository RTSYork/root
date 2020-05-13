int b, c;
int d[2];

int main(int argc, char **argv)
{
	int a = 1 + 2;
	b = a + 3 + 4 + 5;
	c = (a * b++ + 6 - 7) / 8;
	a += 1;
	b++;
	a = b + c;
	d[0] = 1;
	char x = 0xFF;
	*(d + 1) = 2;
	return a = 1, b = 2;
	// Error: assignment to 1,b /Users/russell/root/root/c-tests/expressions.c:15:
	// Allocating memory for variable: 1,b
	// Warning: Automatic variable 1,b is allocated /Users/russell/root/root/c-tests/expressions.c:15:
	return a = 1;

	a = b++;
}
