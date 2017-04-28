#include "Kitten.hpp"

// This is needed for our static member variable
int Kitten::m_kittenCount = 0;

Kitten::Kitten(string name)
{
	m_name = name;
	m_kittenCount++;
}

void Kitten::Display()
{
	cout << "Kitten: \t" << m_name << ", Kitten count: " << m_kittenCount << endl;
}