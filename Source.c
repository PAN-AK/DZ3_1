#include <stdio.h>
#include <locale.h>
int bit(int b)
{
	int bi = b / 1024;
	return bi;

}
int Kbit(int b)
{
	int Kbi = b * 1024;
	return Kbi;

}

int main()
{
	setlocale(LC_ALL, "RUS");
	int b;
	int Kb;
	printf("��� � ����:\n");
	printf("K��� � ���:\n");
	scanf_s("%d", &b);
	scanf_s("%d", &Kb);
	printf("%d ��� = %d ����\n", b, bit(b));
	printf("%d ���� = %d ���\n", Kb, Kbit(Kb));
}
