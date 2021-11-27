
#include"stdafx.h"
#include"iostream"
#include "string"
#include"conio.h"
using namespace std;
const int No_of_people = 10, No_of_fields = 4, field_length = 25;//here we define number of array
char data[No_of_people][No_of_fields][field_length] ={
{{"Ali"},{"abbasi"},{"M"},{"Y"}},
{{"kimia"},{"fazeli"},{"F"},{"N"}},
{{"yasaman"},{"noori"},{"F"},{"N"}},
{{"ana"},{"karnina"},{"F"},{"Y"}},
{{"ahmad"},{"mostofi"},{"M"},{"Y"}},
{{"ariya"},{"akbari"},{"M"},{"Y"}},
{{"elham"},{"sotoode"},{"F"},{"Y"}},
{{"maryam"},{"rastegar"},{"F"},{"Y"}},
{{"nahid"},{"morovvat"},{"F"},{"Y"}},
{{"mohamad"},{"Amini"},{"M"},{"N"}}//insert names into array 3D
}; 
//******************************************************
void print_data(char data[][4][25],int size)//function for printing array
{
int i;
for(i=0;i<size;i++)
{
cout<<"Person No "<<(i+1)<<" data:"<<endl;
cout<<"Name: "<< data[i][0]<<"\tSirname: "<<data[i][1]<<"\tsexuality:"<<data[i][2]<<"\tmarried:"<<data[i][3]<<endl;
}
}
//******************************************************
void sorter(char data[][4][25],int n, int s)//function for sorting array by sir name
{
int i,j;
char temp[25];
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
if(strcmp(data[i][s],data[j][s]) > 0)
{
//swapping the name field
strcpy(temp,data[i][0]);
strcpy(data[i][0],data[j][0]);
strcpy(data[j][0],temp);
//swapping the sirname fields
strcpy(temp,data[i][1]);
strcpy(data[i][1],data[j][1]);
strcpy(data[j][1],temp);
//swapping the sexuality field
strcpy(temp,data[i][2]);
strcpy(data[i][2],data[j][2]);
strcpy(data[j][2],temp);
//swapping the married field
strcpy(temp,data[i][3]);
strcpy(data[i][3],data[j][3]);
strcpy(data[j][3],temp);
}
}
}
//**********************************
void  count_data()
{
	int marriedMen=0,singleWomen=0,singles=0,men=0;
	for(int i=0;i<No_of_people;i++)
	{if(strcmpi(data[i][2],"M") == 0)//if they are men and they are married
	{men++;
	if(strcmpi(data[i][3],"Y") == 0)
	marriedMen++;
	else 
	singles++;
	}
	else
	{
	if(strcmpi(data[i][3],"N") == 0)
	{
	singleWomen++;
	singles++;
	}
	}
	}
    cout << "\n\n-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n\n";
    cout << "Number of Men is:          " << men << endl;
	cout << "Number of Married Men is:  " << marriedMen << endl;
    cout << "Number of Single is:      " << singles << endl;
	cout << "Number of Single Women is: " << singleWomen << endl;
}
//*****************************************
int main()
{   system("color 5f");//change color of system
    char ans;
	print_data(data,No_of_people);//call print function
    cout << "\n\n-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n\n";
    cout << "\nenter 'r' for writng new names\n";
	cout<<  "enter 's' for sorting by sirname\n";
	cout<<   "enter 'e' for exiting from program\n";
	cout<<   "enter 'c' for counting sexuality and marriage\n";
    cout << "\n-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n\n";
	while((ans = getch()) != 'e')//if user types e,program ends
	{
		if(ans == 's')//if types s,start sorting
		{
			sorter(data,No_of_people,1);//call sorter function
			print_data(data,No_of_people);//call print function
		}
		else if(ans =='c')//c is for count
		{
			count_data();//call count function
		}
		else if(ans == 'r')//r is for write
		{
			int line,column;
			cout <<"\nEnter line and column of what u wanna rewrite: \n";
			cout<<"\nline:\n";
			cin>>line;//gets line of array to change
			cout<<"\ncolumn:\n";
			cin>>column;
		
			if(line> No_of_people ||column> No_of_fields)//if the numbers were wrong
			{
				cout << "you entered too many lines or columns!!!!!" << endl; 
			    cout << "\nenter 'r' for writng new names\n";
	            cout<<  "enter 's' for sorting by sirname\n";
	            cout<<   "enter 'e' for exiting from program\n";
	            cout<<   "enter 'c' for counting sexuality and marriage\n";
				continue;
			}
			char write[25];
		
			cout << "Enter new information: \n";
			cin >>write;//gets new information
			strcpy(data[line - 1][column - 1], write);//it is for rewrite
			print_data(data,No_of_people);//call print function
			count_data();//call count function
		}
    cout << "-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n\n";
    cout<< "\nenter 'r' for writng new names\n";
	cout<<  "enter 's' for sorting by sirname\n";
	cout<<   "enter 'e' for exiting from program\n";
	cout<<   "enter 'c' for counting sexuality and marriage\n";
    cout << "-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n\n";
	}
	return 0;
}
//*******************************************************