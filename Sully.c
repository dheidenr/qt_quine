#include <strings.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	FILE	*fd;
	char	*format = "#include <strings.h>%1$c#include <stdlib.h>%1$c#include <stdio.h>%1$c%1$cint main(){%1$c%3$cFILE%3$c*fd;%1$c%3$cchar%3$c*format = %2$c%5$s%2$c;%1$c%3$cint%3$c%3$ci = %6$d;%1$c%3$cchar%3$cline_feed = 10;%1$c%3$cchar%3$cquotes = 34;%1$c%3$cchar%3$ctab = 9;%1$c%3$cchar%3$cpercent = 37;%1$c%3$cchar%3$ccode[15];%1$c%3$cchar%3$cname[15];%1$c%3$cchar%3$ccommand_line[150];%1$c%3$cif (i < 1)%1$c%3$c%3$creturn(0);%1$c%3$cif (fopen(%2$cSully_5.c%2$c, %2$crb+%2$c))%1$c%3$c%3$ci--;%1$c%3$csprintf(code, %2$cSully_%4$cd.c%2$c, i);%1$c%3$csprintf(name, %2$cSully_%4$cd%2$c, i);%1$c%3$cif ((fd = fopen(code, %2$cw%2$c))) {%1$c%3$c%3$cfprintf(fd, format, line_feed, quotes, tab, percent, format, i);%1$c%3$c%3$cfclose(fd);%1$c%3$c%3$csprintf(command_line, %2$cgcc -o %4$cs %4$cs%2$c, name, code);%1$c%3$c%3$csystem(command_line);%1$c%3$c%3$cmemset(command_line, 0, 15);%1$c%3$c%3$csprintf(command_line, %2$c./%4$cs%2$c, name);%1$c%3$c%3$csystem(command_line);%1$c%3$c}%1$c%3$creturn(0);%1$c}%1$c";
	int		i = 5;
	char	line_feed = 10;
	char	quotes = 34;
	char	tab = 9;
	char	percent = 37;
	char	code[15];
	char	name[15];
	char	command_line[150];
	if (i < 1)
		return(0);
	if (fopen("Sully_5.c", "rb+"))
		i--;
	sprintf(code, "Sully_%d.c", i);
	sprintf(name, "Sully_%d", i);
	if ((fd = fopen(code, "w"))) {
		fprintf(fd, format, line_feed, quotes, tab, percent, format, i);
		fclose(fd);
		sprintf(command_line, "gcc -o %s %s", name, code);
		system(command_line);
		memset(command_line, 0, 15);
		sprintf(command_line, "./%s", name);
		system(command_line);
	}
	return(0);
}
