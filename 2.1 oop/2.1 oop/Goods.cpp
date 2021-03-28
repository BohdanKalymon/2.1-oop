#include "Goods.h"

Goods::Goods()
{
	first = 0;
	second = 0;
}

Goods::Goods(double x = 0, int y = 0)
{
	first = x;
	second = y;
}

Goods::Goods(const Goods& v)
{
	first = v.first;
	second = v.second;
}

Goods::~Goods()
{}

void Goods::SetFirst(double value)
{
	if (value >= 0)
		first = value;
	else
		first = 0;
}

void Goods::SetSecond(int value)
{
	if (value >= 0)
		second = value;
	else
		second = 0;
}

double Goods::Cost()
{
	return first * second;
}

Goods& Goods::operator = (const Goods& r)
{
	first = r.first;
	second = r.second;
	return *this;
}

Goods::operator string () const
{
	stringstream ss;
	ss << "Price = " << first << endl;
	ss << "Amount = " << second << endl;
	return ss.str();
}

Goods& Goods::operator --()
{
	--first;
	return *this;
}

Goods& Goods::operator ++()
{
	++first;
	return *this;
}

Goods Goods::operator --(int)
{
	Goods a(*this);
	second--;
	return a;
}

Goods Goods::operator ++(int)
{
	Goods a(*this);
	second++;
	return a;
}

ostream& operator <<(ostream& out, const Goods& a)
{
	return out << a.first << ", " << a.second;
}

istream& operator >>(istream& in, Goods& a)
{
	cout << "first = "; in >> a.first;
	cout << "second = "; in >> a.second;
	return in;
}
