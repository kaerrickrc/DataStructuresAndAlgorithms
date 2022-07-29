
module;
#include <vector>
#include <iostream>
#include <string>

module ds_stack;


template<typename T>
class ds_stack {

	std::vector<T> stack_vector;

public:

	ds_stack(size_t size = 10) { stack_vector(size); }

	void push( T& item );
	
	T& pop();

	bool is_empty();

	void print();

};


// Primary Methods

template<typename T> 
void ds_stack<T>::push( T& item ){

	stack_vector.push_back( item );

}


template<typename T>
T& ds_stack<T>::pop() {
	
	T item = stack_vector.back();
	stack_vector.pop_back();
	return item;

}


template<typename T>
bool ds_stack<T>::is_empty() {
	return stack_vector.is_empty();
}


// Debug Methods 

template<typename T>
void ds_stack<T>::print() {

	for( int i = 0; i < stack_vector.size(); i++ ){
		std::cout << std::to_string(i) << ": " << std::to_string(stack_vector[i]) << std::endl;
	}

}

