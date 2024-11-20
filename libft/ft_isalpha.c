/*
isalpha()
    checks  for  an alphabetic character; in the standard "C" lo‐
    cale, it is equivalent to  (isupper(c)  ||  islower(c)).   In
    some  locales,  there  may be additional characters for which
    isalpha() is true—letters which  are  neither  uppercase  nor
    lowercase.
 */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
