#include <iostream>
using namespace std;

void main()
{
	for (char x = 119; x < 123; x++)
	{
		for (char y = 119; y < 123; y++)
		{
			for (char z = 119; z < 123; z++)
			{
				for (char w = 119; w < 123; w++)
				{
					cout << "Vector4 Vector4::" << x << y << z << w << "()" << endl;
					cout << "{" << endl;
					cout << "	Vector4 result;" << endl;
					cout << "	result.x = " << x << ";" << endl;
					cout << "	result.y = " << y << ";" << endl;
					cout << "	result.y = " << z << ";" << endl;
					cout << "	result.y = " << w << ";" << endl;
					cout << "	return result;" << endl;
					cout << "}" << endl;
				}
			}
		}
	}

	system("pause");
}