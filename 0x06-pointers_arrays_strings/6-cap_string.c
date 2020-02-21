char *cap_string(char *s)
{
	int j;
	int u;
	char l[] = ",;.!?\"(){} \n\t";
	int i;

	for (j = 0 ; *(s + j) != '\0' ; j++)
	{}
	for (u = 0 ; *(s + u) != '\0' ; u++)
	{
		for (i = 0 ; i < 13 ; i++)
		{
			if((*(s + u) == l[i]))
			{ 
				*(s + (u+1) ) = *(s + (u + 1)) - 32;
			}
			if(*(s + (u+1)) == l[i])
			{ *(s + (u + 2)) = *(s + (u +2)) - 32;
			}
      
		}
		return (s);
	}
}



int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *p;

	p = cap_string(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
