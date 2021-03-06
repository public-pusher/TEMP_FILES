#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
#include <cstring>
#define size 500
using namespace std;

class SymbolTable
{
};

int main()
{

	char Operator[size];
	string identifier[size];
	char punctuation[size];
	string temp = "";
	char temp2[20];
	int OP_Flag = 0, ID_Flag = 0, Pn_Flag = 0, temp_flag = 0,temp_Flag_3=0;

	string expressionString = "xyz + cd = 5 ;";
	// cout << "Enter the String : ";
	// getline(cin, expressionString);

	char expression[expressionString.length() + 1];
	strcpy(expression, expressionString.c_str());

	for (int i = 0; i < expressionString.length(); i++)
	{
		if (expression[i] == ' ')
		{
			/*
				If it's a space then the total begins from last space is an identifier.
				So we gathered it in temp variable so that we can push it now.
			*/
		
			temp = string(temp2);
			identifier[ID_Flag] = temp;
			ID_Flag++;

			for (int i = 0; i < 20; i++)
			{
				temp2[i] = '\0';
				temp_flag = 0;
			}
			
		}
		else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/' || expression[i] == '%' || expression[i] == '^' || expression[i] == '=')
		{
			Operator[OP_Flag] = expression[i];
			OP_Flag++;
		}
		else if (expression[i] == ';' || expression[i] == ',' || expression[i] == '.' || expression[i] == '?' || expression[i] == '\"')
		{
			punctuation[Pn_Flag] = expression[i];
			Pn_Flag++;
		}
		else
		{
			/*
				If It's not a space and nothing is matched then
				it's an identifier/keywords having multiple characters
				so gather them for one shot push
			*/
			temp2[temp_flag] = expression[i];
			temp_flag++;
		}
	}

	// It's Time to call the class to pass the variables so that we can show them.

	cout << endl
		 << endl
		 << endl;
	cout << "Identifiers -> ";
	for (int i = 0; i < ID_Flag; i++)
	{
		cout << identifier[i] << " ";
	}
	cout << endl;
	cout << "Operators -> ";
	for (int i = 0; i < OP_Flag; i++)
	{
		cout << Operator[i] << " ";
	}
	cout << endl;
	cout << "Punctuations -> ";
	for (int i = 0; i < Pn_Flag; i++)
	{
		cout << punctuation[i] << " ";
	}
	cout << endl;

	cout << "\nDone" << endl;

	// getch();
}
