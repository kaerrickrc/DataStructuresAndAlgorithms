
module;
#include <vector>

module ds_stack;


template<typename T, size_t size = 10>
class ds_stack {

	std::vector<T> stack_vector;

public:

	//ds_stack(size_t size = 10) { stack_vector(size); }

	void push( T& item );
	T& pop();
	void print();

};

template<typename T, size_t size> 
void ds_stack<T, size>::push( T& item ){

	stack_vector.push_back( item );

}


template<typename T, size_t size>
T& ds_stack<T, size>::pop() {
	
	T item = stack_vector.back();
	stack_vector.pop_back();
	return item;
}


template<typename T, size_t size>
void ds_stack<T, size>::print() {

}

