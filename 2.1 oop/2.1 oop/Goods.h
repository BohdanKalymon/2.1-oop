#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Goods
{
private:
	double first;
	int second;

public:
	Goods();
	Goods(double, int);
	Goods(const Goods&);
	~Goods();

	double GetFirst() const { return first; }
	int GetSecond() const { return second; }
	void SetFirst(double value);
	void SetSecond(int value);

	double Cost();

	Goods& operator =(const Goods&);
	operator string() const;

	Goods& operator --();
	Goods& operator ++();
	Goods operator --(int);
	Goods operator ++(int);

	friend ostream& operator <<(ostream& out, const Goods& a);
	friend istream& operator >>(istream& in, Goods& a);

};
