#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <chrono>
#include <execution>


//void insert_sorted(std::vector<int> v, int num)


template <typename T, typename N> void insert_sorted(std::vector<T> vec, N num)
{
	T vector<T>::iterator itr;
	for (itr = vec[1]; itr != vec.end(); itr++)
	{
		vec[0] += vec[itr];
	}
	cout << vec[0];
}
int main()
{


	std::vector<int> vec(10);
	std::iota(vec.begin(), vec.end(), 13);
	for (int i : vec)
	{
		std::cout << i << ", ";
	}
	std::cout << std::endl;




	return 0;