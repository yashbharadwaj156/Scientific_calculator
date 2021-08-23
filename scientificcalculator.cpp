
using namespace std;
#include<iostream>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include<cmath>

float add(),sub(),multi(),div();
float sin(),cos(),tan(),Sin_inverse(),Cos_inverse(),Tan_inverse();
float log(),baselog();
float power(),squareroot();


int main()
{
	A:
		int input;
		cout<<"\t\t1-ARITHMETIC FUNCTIONS\n";
		cout<<"\t\t2-TRIGNOMETRIC FUNCTIONS\n";
		cout<<"\t\t3-LOGARTHMIC FUNCTIONS\n";
		cout<<"\t\t4-POWER FUNCTIONS\n";
		cout<<"\t\t5-EXIT\n";
		cout<<"\t\t\t PRESS- ";
		cin>>input;
		system("cls");
		if(input==1)
		{
			B:
				int choice;
					cout<<"\t\t1-ADDITIONS\n";
				    cout<<"\t\t2-SUBTRACTIONS\n";
					cout<<"\t\t3-MULTIPLICATIONS\n";
					cout<<"\t\t4-DIVISIONS\n";
					cout<<"\t\t5-MAIN DASHBOARD\n";
					cout<<"\t\t\t PRESS- ";
					cin>>choice;
					system("cls");
					if(choice==1)
						add();
						
					if(choice==2)
						sub();	
					if(choice==3)
						multi();	
					if(choice==4)
						div();	
					if(choice==5)
						goto A;
		}
		if(input==2)
		{
			C:
					int choice;
					cout<<"\t\t1-SIN FUNCTION\n";
				    cout<<"\t\t2-COS FUNCTION\n";
					cout<<"\t\t3-TAN FUNCTION\n";
					cout<<"\t\t4-SIN INVERSE FUNCTION\n";
					cout<<"\t\t5-COS INVERSE FUNCTION\n";
					cout<<"\t\t6-TAN INVERSE FUNCTION\n";
					cout<<"\t\t7-MAIN DASHBOARD\n";
					cout<<"\t\t\t PRESS- ";
					cin>>choice;
					system("cls");
					if(choice==1)
						sin();
					if(choice==2)
						cos();	
					if(choice==3)
						tan();	
					if(choice==4)
						Sin_inverse();
					if(choice==5)
						Cos_inverse();	
					if(choice==6)
						Tan_inverse();	
					if(choice==7)
						goto A;
		}
		if(input==3)
		{
			D:
				int choice;
					cout<<"\t\t1-LOGARTHMIC FUNCTIONS\n";
				    cout<<"\t\t2-BASE LOGARTHMIC FUNCTIONS\n";
					
					cout<<"\t\t3-MAIN DASHBOARD\n";
					cout<<"\t\t\t PRESS- ";
					cin>>choice;
					system("cls");
					if(choice==1)
						log();
					if(choice==2)
						baselog();	
				
					if(choice==3)
						goto A;
		}
		if(input==4)
		{
			E:
				int choice;
					cout<<"\t\t1-POWER FUNCTIONS\n";
				    cout<<"\t\t2-SQUARE-ROOT FUNCTIONS\n";
					
					cout<<"\t\t3-MAIN DASHBOARD\n";
					cout<<"\t\t\t PRESS- ";
					cin>>choice;
					system("cls");
					if(choice==1)
						power();
					if(choice==2)
						squareroot();	
				
					if(choice==3)
						goto A;
		}
			
}
float add()
{
	float a,b;
	cout<<"\t\tenter first number";
	cin>>a;
	cout<<"\t\tenter second number";
	cin>>b;
	cout<<"\t\t"<<a+b;
	return 0;
}
float sub()
{
	float a,b;
	cout<<"\t\tenter first number";
	cin>>a;
	cout<<"\t\tenter second number";
	cin>>b;
	cout<<"\t\t"<<a-b;
	return 0;
}
float multi()
{
	float a,b;
	cout<<"\t\tenter first number";
	cin>>a;
	cout<<"\t\tenter second number";
	cin>>b;
	cout<<"\t\t"<<a*b;
	return 0;
	
}
float div()
{
	float a,b;
	cout<<"\t\tenter first number";
	cin>>a;
	cout<<"\t\tenter second number";
	cin>>b;
	cout<<"\t\t"<<a/b;
	return 0;
	
}
float sin()
{
	float a;
	cout<<"\t\tenter first number";
	cin>>a;
	cout<<"\t\t"<<sin(a);
	return 0;
	
}
float cos()
{
	float a;
	cout<<"\t\tenter first number";
	cin>>a;
	cout<<"\t\t"<<cos(a);
	return 0;
	
}
float tan()
{
	float a;
	cout<<"\t\tenter first number";
	cin>>a;
	cout<<"\t\t"<<tan(a);
	return 0;
	
}
float Sin_inverse()
{
	float a;
	cout<<"\t\tenter first number";
	cin>>a;
	cout<<"\t\t"<<asin(a);
	return 0;
	
}
float Cos_inverse()
{
	float a;
	cout<<"\t\tenter first number";
	cin>>a;
	cout<<"\t\t"<<acos(a);
	return 0;
	
}
float Tan_inverse()
{
	float a;
	cout<<"\t\tenter first number";
	cin>>a;
	cout<<"\t\t"<<atan(a);
	return 0;
	
}
float log()
{
	float a;
	cout<<"\t\tenter first number";
	cin>>a;
	cout<<"\t\t"<<log(a);
	return 0;
	
}
float baselog()
{
	float a;
	cout<<"\t\tenter first number";
	cin>>a;
	cout<<"\t\t"<<log2(a);
	return 0;
	
}
float power()
{
	float a,b;
	cout<<"\t\tenter first number-";
	cin>>a;
	cout<<"\t\tenter second number-";
	cin>>b;
	cout<<"\t\t"<<pow(a,b);
	return 0;
}
float squareroot()
{
	float a;
	cout<<"\t\tenter first number";
	cin>>a;
	
	cout<<"\t\t"<<sqrt(a);
	return 0;
}

