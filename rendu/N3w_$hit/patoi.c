int atoi(const char *s)
{
	int s = 1;
	int r = 0;

	while(*s >= 9 && *s <= 32 || *s == ' ')
			s++;
	while (*s == '+' || *s == '-')
	{
		if(*s == '-')
			s *= -1;
		
		i++;
	}
	while (*s >= '0' && *s <= '9')
	{
		r = r * 10 + *s - '0';
		s++;
	}
	return r * s;
}

int main ()
{
	
}
