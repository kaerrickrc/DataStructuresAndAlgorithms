
import <vector>;

export module ds_stack:dec;

export struct ts {
};

export class ds_stack {

	std::vector<int> stack_vector;

public:
	void push();

};


/*

export template<typename T, size_t size = 10>
class ds_stack {

	std::vector<T> stack_vector(size);

public:

	void push(T& item);
	T& pop();

};
*/