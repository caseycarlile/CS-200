#ifndef _KITTEN_HPP
#define _KITTEN_HPP

#include <string>
#include <iostream>
using namespace std;

class Kitten
{
public:
	Kitten(string name);
	void Display();
	static int m_kittenCount;

private:
	string m_name;
	
};

#endif