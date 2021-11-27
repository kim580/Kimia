#include "stdafx.h"// including header files. 
#include"iostream"
#include "conio.h"
#include"ctime"

using namespace std;

class player
{
public://class members declaration.

	char name[25];

	player(); // constructor declaration.

	int currentposition;
	int previousposition;
	int Rollingdie(); // Rollingdie function.
};

player :: player() // constructor implementation.
{
currentposition=1; // initialization of variables.
previousposition=1; 
}


int player :: Rollingdie() // Rollingdie function.
{
	return ((rand()%6)+1);// using Random function.
	cout<<"random number is:"<<((rand()%6)+1)<<endl;
}


class board // board class.
{
int Board[5][5]; //board array 
public:
board(); // board constructor.
int nextposition(int, int) ; // declaration of nextpostion function.
void display(); // display function.
};

board:: board() // creating board 
{
int k=1;
for(int i=0;i<5;i++)
for(int j=0;j<5;j++)
Board[i][j]=k++; // assiging values to board 
}


int board :: nextposition(int a, int b) // implemenation of nextposition function. 
{
switch(a+b)
{//creating ladders.
case 5:
cout << "oh,no,sorry,snake is here\n";
return 1;
break;

case 8:
cout << "oh,no,sorry,snake is here\n";
return 1;
break;

case 12:
cout << "oh,no,sorry,snake is here\n";
return 1;
break;

case 19:
cout << "oh,no,sorry,snake is here\n";
return 1;
break;// creating snakes

case 22:
return 1;
cout << "Wow.. You Got Snake\n";
break; 

case 25: 
	cout << "good luck,finished:)\n";
	return 25;
	break;

default:
	return (a+b);
	break; 
}
}


void board :: display() // definition of display function.
{
	for(int i=0;i<5;i++)
	{for(int j=0;j<5;j++)
	{cout << Board[i][j];
	}}
}
 
int main() // main class
{
srand(time(0)); // it is random function.
board b; // creation object in board class.
cout <<"\n****************************************************************************\n";
cout << "\t\tSnakes and Ladder Board"; 
cout <<"\n****************************************************************************\n";
b.display(); // calling display function.
cout << "\n****************************************************************************\n" ;
player player1; // creationg objects in player class.
cout << "Enter First player Name\n";
cin >> player1.name;
cout << endl;
cout <<"***********************\n##### Main Game####\n***********************\n";
int score;
while(true)
{// player One logic part.
player1.previousposition = player1.currentposition;
score=player1.Rollingdie(); // calling Rollingdie function.
player1.currentposition =b.nextposition(score,player1.previousposition);
if(player1.currentposition > 25)
player1.currentposition=player1.previousposition;
cout << player1.name<<"\t"<< player1.currentposition <<"\t"<<score<<endl;
if(player1.currentposition == 25)
{system("pause");
return 0;}
}//end of while
}
