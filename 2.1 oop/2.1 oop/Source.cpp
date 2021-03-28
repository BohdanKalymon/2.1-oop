#include "Goods.h"

Goods makeGoods(double first, int second)
{
	Goods P(first, second);
	return P;
}

int main()
{
	Goods a(3.4, 13);
	cout << "Cost = " << a.Cost() << endl << endl;
	cout << "Size of class = " << sizeof(a) << endl << endl;

	cout << "++a: " << ++a << endl;
	cout << "--a: " << --a << endl;
	cout << "a++: " << a++ << endl;
	cout << "a--: " << a-- << endl << endl;

	Goods b(5.5, 4);
	cout << string(b) << endl;

	Goods c = b;
	cout << "Price = " << c.GetFirst() << endl;
	cout << "Amount = " << c.GetSecond() << endl << endl;

	Goods d = makeGoods(2.3, 2);
	cout << "Price = " << d.GetFirst() << endl;
	cout << "Amount = " << d.GetSecond() << endl << endl;

	Goods e;
	cin >> e;
	cout << e << endl;

}
