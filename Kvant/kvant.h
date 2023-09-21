#pragma once

#include <vector>
#include <math.h>
#include <exception>
#include <time.h>

template<class B> class Kvant
{
	std::vector<B> kvant;
public:
	
	Kvant()
	{
		auto t = int(_Xtime_get_ticks());
		srand(t);
	}

	B get()
	{
		auto r = rand();
		auto s = kvant.size();

		if (s != 0)
		{
			return kvant.at(r % s);
		}
		else
		{
			throw std::exception("Kvant of zero size.");
		}
	}

	void insert(B b)
	{
		kvant.push_back(b);
	}

	void set(std::vector<B> b)
	{
		kvant = b;
	}
};