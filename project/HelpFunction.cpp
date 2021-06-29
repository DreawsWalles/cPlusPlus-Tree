#include "HelpFunction.h"

int checkOnCorrect(string s)
{
	int num;
	if (s.empty())
	{
		cout << "������� ������ ������. ��������� ����" << endl;
		return -1;
	}
	else
	{
		num = 0;
		int len = s.size();
		int i = 0;
		int n;
		while (i < len)
			if ((s[i] >= '0') && (s[i] <= '9'))
			{
				n = s[i] - '0';
				num = num * 10 + n;
				i++;
			}
			else
			{
				if (s[i] == ' ')
					i++;
				else
				{
					cout << "������ ������������ ������: " << s[i] << " . ��������� ����" << endl;
					return -1;
				}
			}
		return num;
	}
}

int CheckChoise(string s, int borderBeg, int borderEnd)
{
	int num;
	if (s.empty())
	{
		cout << "������� ������ ������. ��������� ����" << endl;
		return -1;
	}
	else
	{
		num = 0;
		int len = s.size();
		int i = 0;
		int n;
		while (i < len)
			if ((s[i] >= '0') && (s[i] <= '9'))
			{
				n = s[i] - '0';
				num = num * 10 + n;
				i++;
			}
			else
			{
				if (s[i] == ' ')
					i++;
				else
				{
					cout << "������ ������������ ������: " << s[i] << " . ��������� ����" << endl;
					return -1;
				}
			}
		if ((num < borderBeg) || (num > borderEnd))
		{
			cout << "��������� �������� �����������. �������� ������ ���� � ��������� �� " << borderBeg << " �� " << borderEnd << endl;
			return -1;
		}
		return num;
	}
}