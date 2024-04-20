#include <iostream>
#include <string.h>

using namespace std;

char alfabeto[] = {
'A', 'B', 'C', 'D', 'E', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

void encrypt()
{
	char txt[200];
	cin.ignore();
	cout << "Enter the text to be encrypted " << endl;
	cin.getline(txt, 200);
	for (int i = 0; i < strlen(txt); i++)
	{
		for (int j = 0; j < strlen(alfabeto); j++)
		{
			if (txt[i] == alfabeto[j])
			{
				int aux = (j + 3) % 52;
				txt[i] = alfabeto[aux];
				break;
			}
		}
	}
	cout << endl << "The encrypted text is: " << txt << endl;
	
}


void decrypt()
{
	char txt[200];
	cin.ignore();
	cout << "Enter the text to be decrypted " << endl;
	cin.getline(txt, 200);
	for (int i = 0; i < strlen(txt); i++)
	{
		for (int j = 0; j < strlen(alfabeto); j++ )
		{
			if (txt[i] == alfabeto[j])
			{
				int aux;
				if ((j - 3) < 0)
				{
					aux = 52 + (j - 3);
				}
				else
				{
					aux = (j - 3) % 52;
				}
				txt[i] = alfabeto[aux];
				break;
			}
		}
	}
	cout << "The decrypted text is: " << txt << endl;
}

int main()
{
	int contra,op;
	string txt;
	do
	{
		cout << "MENU" << endl;
		cout << "1 - Encrypt" << endl;
		cout << "2 - Decrypt" << endl;
		cout << "3 - Exit" << endl;
		
		cin >> op;
		switch (op)
		{
			case 1 :
				encrypt();
				break;
			case 2 :
				decrypt();
				break;
		}
		system("PAUSE");
		
		} while (op != 3);
	}

