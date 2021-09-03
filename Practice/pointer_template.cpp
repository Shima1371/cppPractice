#include "all.h"

template<typename T> using type = T;
template<typename T> using add_pointer_t = T*

type<int> a = 123;
type<double> b = 1.23;
type < std::vector<int>> c = { 1,2,3,4,5 };

add_pointer_t<int> a = null;
add_pointer_t<int[5]> d = nullptr;