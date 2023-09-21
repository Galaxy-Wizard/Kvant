#include <iostream>

#include "kvant.h"

int main()
{
	Kvant<bool> k1;

	///*/
	k1.insert(true);
	k1.insert(true);
	k1.insert(true);
	k1.insert(false);
	///*/

	for (auto c = 0; c < 10; c++)
	{
		try
		{
			std::wcout << k1.get();
		}
		catch (std::exception& e)
		{
			std::wcout << e.what();

			return 0;
		}
	}

	return 1;
}