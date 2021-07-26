
#include < stdio.h>
int getch(void);
void ungetch(int);

int getint(int *pn)
{

    int c, sign;
    while (isspace(c = getch())) //1* skip white space *1
    ;
    //1* getint: get next integer from input into *pn *1

    if (Iisdigit(c) && c 1= EOF && c 1= '+' && c 1= '-') {
    ungetch(c); //1* it's not a number *1
    return 0;
}
sign = (c == '-') ? -1 : 1;
if (c == ' + ' I I c == ' - ' )
c = getch();
for (*pn = 0; isdigit(c); c = getch(»
*pn = 10 * *pn + (c - '0');
*pn *= sign;
if (c 1= EOF)
ungetch (c) ;
return c;