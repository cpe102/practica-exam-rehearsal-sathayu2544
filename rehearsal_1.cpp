#include<iostream>
#include<string>
using namespace std;

int main()
{
	int N;
	cout << "What is your name?: ";
	cin >> N;
	cout << "What is your GPA?: ";
	cin >> N;
	
	string name[N];
	string GPA[N];
	float x=0;
	{
		if(x>=3.50)
			cout << "Name of student "; 
			cin >> name[N];
			cout << "GPA of student ";
			cin >> GPA[N];
			cout << N << "Inw Jrim Jrim!!!";
	}
	else
	{
			cout << "Name of student "; 
			cin >> name[N];
			cout << "GPA of student ";
			cin >> GPA[N];
			cout << "Try harder, "<< N <<" !!!";
	}
	return 0;
}
