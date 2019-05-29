#include<iostream>
void print(int [],const unsigned);
void insert_sort(int x[], const unsigned size)
{
	for (unsigned int i = 1; i < size; ++i)  //arajin elementy vercnumenq arden sortavorvac vor hamematenq erkrordiu het;
	{
		int pindex = x[i];
		unsigned  j = i;;
		while (j > 0 && x[j - 1] > pindex)
		{
			x[j] = x[j - 1];
			--j;
	    }
		x[j] = pindex;
	}
}

int main()
{
	int x[] = { 1,2,4,3,23 };
	const unsigned n = 5;
	insert_sort(x, n);
	print(x, n);
	
}

void print(int x[],const unsigned n)
{
	for (unsigned int i = 0; i < n; ++i)
	{
		std::cout << x[i] << " ";
	}
}