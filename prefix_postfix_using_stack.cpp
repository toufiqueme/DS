#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;

int evaluate_postfix(string);
bool Is_numeric_digit(char);
bool is_operator(char);
int perform_operation(char, int, int);

int main()

{

	string expression;
	cout << "Enter an expression: ";

	getline(cin, expression);
	int result = 0;

	  result = evaluate_postfix(expression);

	cout << result << endl;
}

int evaluate_postfix(string expression)
{

	stack <int> S;

	int i, operand1, operand2;
	int result = 0;

	for( i = 0; i < expression.length(); i++)
	{

		if(expression[i] == ' ' || expression[i] == ',')
		{

			continue;
		}

		else if(is_operator(expression[i]))
		{

			 operand2 = S.top();
			S.pop();

			 operand1 = S.top();
			S.pop();

			result = perform_operation(expression[i], operand1, operand2);

			S.push(result);
		}

		else if(Is_numeric_digit(expression[i]))

		{

			int operand = 0;

			while(i<expression.length() && Is_numeric_digit(expression[i]))

			{

				operand = (operand * 10)+ (expression[i] - '0');

				i++;

			}

			i--;

			S.push(operand);
		}
	}

	return S.top();
}


bool Is_numeric_digit(char c)

{

	if(c >= '0' && c <= '9')
	{

		return true;
	}

	return false;
}


bool is_operator(char c)
{

	if( c == '+' || c == '-' || c == '*' || c == '/')

	{

		return true;
	}

	return false;
}

int perform_operation(char operation, int operand1, int operand2)
{

	if(operation == '+')
	{

		return operand1+operand2;
	}

	else if(operation == '-')
	{

		return operand1 - operand2;
	}

	else if(operation == '*')

	{

		return operand1*operand2;
	}

	else if(operation == '/')
	{

		return operand1 / operand2;
	}

	else
	{

		cout << "Invalid operation." <<endl;
	}

	return -1;
}
