#pragma once
#include<iostream>
#include<string>
using namespace std;

class Animal
{
	string name;
	string type;
	string voic;
	int Age;
public:
	Animal(string name, string type, string voic, int Age) :name(name), type(type), voic(voic), Age(Age) {};
	void GoVoic()
	{
		cout<<" " << voic;
	}
	void Print()
	{
		cout << "name: " << name << ". type: " << type<<"Age:"<<Age; GoVoic();
	}
	int inline GetAge()
	{
		return Age;
	}
};

class Cat :public Animal
{
	string vid;
public:
	Cat(string name, string type, string voic, int Age, string vid ) :Animal((name), (type), (voic),(Age)), vid(vid) {};
	string GetVid()
	{
		return vid;
	}
};
class Dog :public Animal
{
	string vid;
	bool Protect=false;
public:
	Dog(string name, string type, string voic, int Age, string vid,bool Protect) :Animal((name), (type), (voic), (Age)), vid(vid), Protect(Protect){};
	string GetVid()
	{
		return vid;
	}
	
	void isProtect()
	{
		if (Protect==false)
		{
			
			
				cout << " охрана выключенна" << endl;
			
		}
		else
		{
			
			cout << " охрана включенна" << endl;
		}
	}
	void print()
	{
		Animal::Print();
		isProtect();
		cout << " порода: " << vid << endl;
	}
	void inline SetProtect()
	{
		if (Protect == false)
		{
			Protect = true;

			cout << " охрана включенна" << endl;

		}
		else
		{
			Protect = false;
			cout << " охрана выключенна" << endl;
		}
	
	}
};
class Parrot :public Animal
{
	string vid;
	string Color;
public:
	Parrot(string name, string type, string voic, int Age, string vid, string Color) :Animal(name, type,voic, Age), vid(vid), Color(Color) {};

	void print()	
	{
		Animal::Print();
		cout << " порода: " << vid <<"цвет: "<<Color<< endl;
	}
	string GetVid()
	{
		return vid;
	}
	string GetColor()
	{
		return Color;
	}
};