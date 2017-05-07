#include <iostream>
using namespace std;

void main()
{
	// For loops going from w to z in asci
	for (char x = 119; x < 123; x++)
	{
		for (char y = 119; y < 123; y++)
		{
			for (char z = 119; z < 123; z++)
			{
				for (char w = 119; w < 123; w++)
				{
					// Comment line
					cout << "// Swizzle for " << x << y << z << w << endl;

					// Header line
					cout << "MATH_DLL Vector4 " << x << y << z << w << "();" << endl << endl;
					
					// Function
					cout << "Vector4 Vector4::" << x << y << z << w << "()" << endl;
					cout << "{" << endl;
					cout << "	Vector4 result;" << endl;
					cout << "	result.x = " << x << ";" << endl;
					cout << "	result.y = " << y << ";" << endl;
					cout << "	result.z = " << z << ";" << endl;
					cout << "	result.w = " << w << ";" << endl;
					cout << "	return result;" << endl;
					cout << "}" << endl << endl;
				}
			}
		}
	}

	// Pause so I can copy out of the console.
	system("pause");
}