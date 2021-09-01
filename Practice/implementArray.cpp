#include "all.h"

template<typename T, std::size_t N>
struct array
{
	using value_type = T;
	using reference = T&;
	using const_reference = T const&;

	using size_type = std::size_t;

	size_type size() const
	{
		return N;
	}

	value_type storage[N];

	//”ñconst”Å
	reference operator[](std::size_t i)
	{
		return storage[i];
	}
	//const
	const_reference operator[](std::size_t i) const
	{
		return storage[i];
	}

	reference front()
	{
		return storage[0];
	}
	const_reference front() const
	{
		return storge[0];
	}

	reference back()
	{
		return storage[N - 1];
	}
	const_reference back() const
	{
		return storage[N - 1];
	}

	void fill(T const& u)
	{
		for (std::size_t i = 0; i != N; ++i)
		{
			storage[i] = u;
		}
	}
};

template<typename Container>
void print(Container const & c)
{
	for (std::size_t i = 0; i != c.size(); ++i)
	{
		std::cout << c[i];
	}
}

int main()
{
	//using array_type = array<int, 5>;
	array<int,5> a = { 1,2,3,4,5 };
	//array_type::value_type x = 0;
	//array_type::reference ref = a[0];
	a.fill(0);
	print(a);

	system("pause");
}