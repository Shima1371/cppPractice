#include "all.h"

template<typename Array>
struct array_iterator
{
	Array & a;
	std::size_t i;

	array_iterator(Array & a, std::size_t i)
		:a(a), i(i) {}

	array_iterator & array_iterator::operator ++()
	{
		++i;
		return *this;
	}
	array_iterator & array_iterator::operator --()
	{
		--i;
		return *this;
	}
	array_iterator& operator += (std::size_t n)
	{
		i += n;
		return *this;
	}
	array_iterator operator +(std::size_t n) const
	{
		auto copy = *this;
		copy += n;
		return copy;
	}
	array_iterator& operator -= (std::size_t n)
	{
		i -= n;
		return *this;
	}
	array_iterator operator -(std::size_t n) const
	{
		auto copy = *this;
		copy -= n;
		return copy;
	}
	typename Array::reference operator *()
	{
		return a[i];
	}
	typename Array::reference operator [](std::size_t n)
	{
		return *(*this + n);
	}
};

template<typename T, std::size_t N>
struct array
{
	using value_type = T;
	using reference = T&;
	using const_reference = T const&;

	using size_type = std::size_t;

	using iterator = array_iterator<array>;

	size_type size() const
	{
		return N;
	}

	value_type storage[N];

	reference operator[](std::size_t i)
	{
		return storage[i];
	}
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

	iterator begin()
	{
		return array_iterator(*this,0);
	}
	iterator end()
	{
		return array_iterator(*this, N);
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
	//a.fill(0);
	print(a);

	auto iter = a.begin();
	std::cout << *iter;
	++iter;
	std::cout << *iter;

	system("pause");
}