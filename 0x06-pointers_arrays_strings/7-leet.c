char *leet(char *s)
{
int j;
int u;
char a[] = "AaEeOoTtLl";
char b[] = "4433007711";

for (j = 0 ; *(s + j) != '\0' ; j++)
{
	for (u = 0 ; *(a + u) != '\0' ; u++)
	{
		if ((*(s + j) == *(a + u)))
		{
			*(s + j) = *(b + u);
		}
	}
}
return (s);
}
