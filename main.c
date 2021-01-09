#include <stdio.h>

/*
  First comment
*/

void print_code(void)
{
	char	line_feed = 10;
	char	quotes = 34;
	char	tab = 9;
	char format[] = "#include <stdio.h>%1$c%1$c/*%1$c%3$cFirst comment%1$c*/%1$c%1$cvoid print_code(void)%1$c{%1$c%3$cchar%3$cline_feed = 10;%1$c%3$cchar%3$cquotes = 34;%1$c%3$c%3$cchar%3$ctab = 9;%1$c%3$c%3$cchar format[] = %3$c%4$s%2$c;%1$c%1$c%2$cprintf(format,line_feed, quotes, tab, format);%1$c}%1$c%1$c%1$cint main()%1$c{%1$c%2$c/*%1$c%2$c%2$cSecond comment%1$c%2$c*/%1$c%2$cprint_code();%1$c%2$creturn (0);%1$c}";

	printf(format,line_feed, quotes, tab, format);
}


int main()
{
	/*
		Second comment
	*/
	print_code();
	printf("%1$c%1$c%1$c%1$c", 10);
	printf("%2$d %1$d", 10, 34);
	return (0);
}
