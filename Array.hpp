#include <vector>
#include <iostream>
#include <string>
#include "sort.hpp"

namespace numpp
{
	enum sort_type
	{
		BUBBLE,SELECTION
	};

	template <typename T> class Array{
		public:
			std::vector<T> value;
			
			Array();
			Array(T[],int);
			Array(T);
			
			int shape();
			void sort(sort_type = BUBBLE,bool = true);
	};
	
	
	template <typename T> void print(Array<T> val);
	template<class T, int N> Array<T> toArray(T (&r)[N]);
	template<class T, int N> int size(T (&r)[N]);
	// template<class T,int N> void bubble_sort(T (&r)[N],bool);
	// template <typename T> void bubble_sort(std::vector<T> value,bool);
	
	// Constructors
	template <typename T> Array<T>::Array()
	{
		//does nothing
	}
	
	template <typename T> Array<T>::Array(T input[],int len)
	{	
		for(int i=0;i<len;i++)
		{
			value.push_back(input[i]);
		}
	}
	
	template <typename T> Array<T>::Array(T input)
	{
		value.push_back(input);
	}

	/*
	Returns the size(length) of an Array object.
	PARAMS:
	
	RETURN:
		int: length of Array
	*/
	
	template <typename T> int Array<T>::shape()
	{
		return value.size();
	}
	
	/*
	Sorts the Array
	PARAMS

	RETURN

	*/
	template <typename T> void Array<T>::sort(sort_type type,bool ascending)
	{

	}

	/*
	Prints value of each element.
	If data cannot be printed, prints reference to data.
	
	PARAMS:
		Array<T> val : input of numpp::Array object.
	RETURN:
		void : prints values to console.
	*/
	
	template <typename T> void print(Array<T> val)
	{
		std::cout<<"[";
		for(int i=0;i<val.value.size();i++)
		{
			std::cout<<&(val.value[i]);
			if(i!=val.value.size()-1)
				std::cout<<",";
		}
		std::cout<<"]"<<std::endl;
	}
	
	template <> void print(Array<int> val)
	{
		std::cout<<"[";
		for(int i=0;i<val.value.size();i++)
		{
			std::cout<<val.value[i];
			if(i!=val.value.size()-1)
				std::cout<<",";
		}
		std::cout<<"]"<<std::endl;
	}

	template <> void print(Array<char> val)
	{
		std::cout<<"[";
		for(int i=0;i<val.value.size();i++)
		{
			std::cout<<val.value[i];
			if(i!=val.value.size()-1)
				std::cout<<",";
		}
		std::cout<<"]"<<std::endl;
	}
	
	template <> void print(Array<float> val)
	{
		std::cout<<"[";
		for(int i=0;i<val.value.size();i++)
		{
			std::cout<<val.value[i];
			if(i!=val.value.size()-1)
				std::cout<<",";
		}
		std::cout<<"]"<<std::endl;
	}
	
	template <> void print(Array<double> val)
	{
		std::cout<<"[";
		for(int i=0;i<val.value.size();i++)
		{
			std::cout<<val.value[i];
			if(i!=val.value.size()-1)
				std::cout<<",";
		}
		std::cout<<"]"<<std::endl;
	}
	
	template <> void print(Array<long> val)
	{
		std::cout<<"[";
		for(int i=0;i<val.value.size();i++)
		{
			std::cout<<val.value[i];
			if(i!=val.value.size()-1)
				std::cout<<",";
		}
		std::cout<<"]"<<std::endl;
	}
	
	template <> void print(Array<short> val)
	{
		std::cout<<"[";
		for(int i=0;i<val.value.size();i++)
		{
			std::cout<<val.value[i];
			if(i!=val.value.size()-1)
				std::cout<<",";
		}
		std::cout<<"]"<<std::endl;
	}
	
	template <> void print(Array<std::string> val)
	{
		std::cout<<"[";
		for(int i=0;i<val.value.size();i++)
		{
			std::cout<<val.value[i];
			if(i!=val.value.size()-1)
				std::cout<<",";
		}
		std::cout<<"]"<<std::endl;
	}
	
	/*
	Allows conversion of arrays to Array object without information about size.
	
	PARAMS:
		T (&r)[N] : input of array of type T(template)
	RETURN:
		Array<T> : numpp::Array object
	*/
	
	template<class T, int N> Array<T> toArray(T (&r)[N])
	{
		Array<T> array;
		for(int i=0;i<N;i++)
		{
			array.value.push_back(*(r+i));
		}
		return array;
	}
	
	/*
	returns size of any array.
	
	PARAMS:
		T (&r)[N] : input of array of type T(template)
	RETURN:
		int : size of array
	*/
	template<class T, int N> int size(T (&r)[N])
	{
		return N;
	}
}

