#include "Fraction.hpp"
#include <iostream>
#include <string>
using namespace std;

void Fraction::Setup(int n, int d)
{
	m_n = n;
	m_d = d;
}

Fraction& Fraction::operator=(const Fraction& rhs)
{

	m_n = rhs.m_n;
	m_d = rhs.m_d;

	return *this;
}

// Friend functions

ostream& operator<<(ostream& out, Fraction& a)
{
	return out << a.m_n << "/" << a.m_d;
}

bool operator==(Fraction& a, Fraction& b)
{
	if (a.m_n == b.m_n && a.m_d == b.m_d)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

Fraction operator*(const Fraction& a, const Fraction& b)
{
	Fraction f1;

	f1.m_n = a.m_n * b.m_n;
	f1.m_d = a.m_d * b.m_d;

	return f1;
}