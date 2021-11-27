#include"stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int counter;
int dimension=8;
bool continueDraw=true;

bool qtp[8][8]={{true}}; //Queen Table Pointer
void clear();
void queens(int i,int j);
void draw(int i,int j);


int main()
{
  cout<<" Number Of Queens is 2 in a chess board with 8 rows & 8 collumns\n";
    cout<< "in procc, Please whait";

//initialize array
    clear();
     
    for(int i=0;i<dimension;i++)
       for(int j=0;j<dimension;j++)
         queens(i,j);
     
     cout<< "\n number of situations is: "<< counter << "\n";
  system("PAUSE");  
  
  return 0;
}
void clear()
{
     for(int i=0;i<dimension;i++)
        for (int j=0;j<dimension;j++)
          *(*(qtp+i)+j)=false;
 }


void queens(int i,int j)
{
   int y=j+1;
    clear();
   while(y<dimension) //search for cols
   {
    
     int x=0;
      while(x<dimension) // with a fix col search amoungs rows in order to find a position that has not conflict with element[i][j]
         {
            if(x!=i && abs(x-i)!=abs(y-j))// no conflict
                    {
                      *(*(qtp+x)+y)=true;
                      counter++;
                      draw(i,j);   
                    }
             x++;
         }
      y++;
   }
}

void draw(int i,int j)
{
     if(continueDraw)
     {
          system("cls");
         for(int p=0;p<dimension;p++)
         {
            for(int q=0;q<dimension;q++)
              {
                 if(p==i && q==j)
                         cout<<setw(3)<<'&';
                 else
                 if(qtp[p][q]!=1)
                      cout<<setw(3)<<'.';
                  else
                      cout<<setw(3)<<'X';
             }
                 cout<<endl<<endl;
         }
         cout<<endl<<endl<<"Total states founded for 8 boards and 2 Queens: "<<counter<<endl;
         cout << "press q for quit, s for stop drawing or another key to continue" << endl;
         int c=getch();
         if(c=='q')
            exit(0);
         else
         if(c=='s')
            continueDraw=false;
         
              
         
     }
}