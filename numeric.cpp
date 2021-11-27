#include"stdafx.h"

#include"conio.h"

using namespace std ;

void ascii to int ( int * , char * );

int main ()

{

      int number;

      char s[10];

      clrscr();

      cout<<"\n Enter numeric string:";

      cin>>s;

      ascii to int(&number , s );

      cout<<"numeric value is:"<<number;

      getch();

      return0;

}

//*********************

void ascii to int(int *value , char *str)

{

      int sign =1;

      *value=0;

      while(*str=='') str++;

      if (*str=='-' || *str=='+')

            sign = (*str++== '-')? -1 : 1 ;

      while(*str)

            if((*str>='0')&&(*str<='9'))

                  *value = (*value*10) + (*str++ -48);

            else{

                  cout<<"wating : the<"<<*str<<">is invalid character.\n";

                  break;

            }

            *value *= sign;

}