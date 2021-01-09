#include <stdio.h>
#define FORMAT "#include <stdio.h>%1$c#define FORMAT %2$c%3$s%2$c%1$c#define OUTPUT(fd) fprintf(fd, FORMAT, 10, 34, FORMAT)%1$c#define FT() int main(){/* Inside comment */FILE *fd = fopen(%2$cGrace_kid.c%2$c, %2$cw%2$c); if (fd != 0){OUTPUT(fd);}fclose(fd);return(0);}%1$c%1$c/*%1$c	Outside comment%1$c*/%1$cFT()"
#define OUTPUT(fd) fprintf(fd, FORMAT, 10, 34, FORMAT)
#define FT() int main(){/* Inside comment */FILE *fd = fopen("Grace_kid.c", "w"); if (fd != 0){OUTPUT(fd);}fclose(fd);return(0);}

/*
	Outside comment
*/
FT()