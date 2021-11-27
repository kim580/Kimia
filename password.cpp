#include "stdafx.h"                                                                                                                                                                              
#include <iostream>
#include <conio.h>
using namespace std;

class password_t;
void decodeNshow( const password_t *_input );
class password_t
{
	friend void decodeNshow( const password_t *_input );

public:
	
	password_t( const char *_string, const int &_number ) : number( _number )
	{
		code = new char[ strlen(_string)+1 ];
		
		unsigned i=0;
		for( ; _string[i] != '\0' ; i++ )
			code[i] = _string[i] + number;
		code[i] = '\0';
	}

	~password_t()
	{
		delete[] code;
	}

	void showcode()
	{
		for(unsigned i=0; i < strlen(code) ; i++)
			cout << code[i];
		cout << endl;
	}

private:
	char      *code;
	const int number;
};

void decodeNshow( const password_t *_input)
{
	for( unsigned i = 0; i < strlen(_input->code); i++ )
		cout << (char)(_input->code[i] - _input->number);
	cout << endl;
}


int main()
{   system("color 5f");
	int number = 0;
	char input[128];
	char ans = 'y';

	cout << "Enter characters: \n";
	cin.getline( input, 127 );
	input[127]='\0';

	cout << "Enter the number to code the sentence: \n";
	cin >> number;
	
	password_t password( input , number );
	cout << endl << "Encoded sentence: " << endl;
	password.showcode();
	cout <<  endl;

	cout << "decode the encoded sentence? (y/n)  " ;
	cin >> ans;
	if( ans == 'y' || ans == 'Y' )
	{
		decodeNshow( &password );
		getch();
	}

	return 0;
}