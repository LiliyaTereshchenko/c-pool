char *ft_strupcase(char *str);
void ft_putstr(char *str);
void	ft_putchar(char c);

int main()
{ 
	char str[100] = "bre FG fghrHGKJHV khh";

	ft_putstr(str);
	ft_putstr("  ");
	ft_putstr(ft_strupcase(str));
	return (0);	
}
