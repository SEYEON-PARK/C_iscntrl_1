#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("\\n은 제어 문자인가? %d\n", iscntrl('\n'));
	printf("\\t은 제어 문자인가? %d\n", iscntrl('\t'));
	printf("\\0은 제어 문자인가? %d\n", iscntrl('\0'));
	printf("3은 제어 문자인가? %d\n", iscntrl('3'));
	printf("#은 제어 문자인가? %d\n", iscntrl('#'));

	return 0;
}