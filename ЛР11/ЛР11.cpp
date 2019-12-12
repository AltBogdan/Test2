#include <iostream>
#include "string"
using namespace std;

int main()
{
	string s, s0; char c = '\0';
	std::cout << "s0 = "; getline(cin, s0);
	std::cout << "s = ";  getline(cin, s);
	std::cout << "c = ";  cin >> c;

	string::size_type npos = 0;
	while ((npos = s.find(c, ++npos)) != string::npos)
	{
		s.erase(npos, 1);
		s.insert(npos, s0);
	}

	cout << "\nstring = " << s << endl;

	std::cin.get();

	return 0;

}

