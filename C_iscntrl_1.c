#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("\\n�� ���� �����ΰ�? %d\n", iscntrl('\n'));
	printf("\\t�� ���� �����ΰ�? %d\n", iscntrl('\t'));
	printf("\\0�� ���� �����ΰ�? %d\n", iscntrl('\0'));
	printf("3�� ���� �����ΰ�? %d\n", iscntrl('3'));
	printf("#�� ���� �����ΰ�? %d\n", iscntrl('#'));

	return 0;
}