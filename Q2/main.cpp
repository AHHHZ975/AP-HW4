#include <iostream>
#include <vector>
#include <string>
#include <memory>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

template <typename dataType>
void getSizeAndCapacityOfvector(vector<dataType>* aVector){
    cout << "The size is: " << aVector->size() << endl;
    cout << "The capacity is: " << aVector->capacity() << endl;
}

int main(){
	vector<std::unique_ptr<string>> aVector;	
	for(size_t i {0}; i != 1000; i++){		
		aVector.push_back(std::make_unique<string>("Str" + std::to_string(i)));
		getSizeAndCapacityOfvector(&aVector);
	}
	for(size_t i {0}; i != aVector.size(); i++){
		cout << *aVector.at(i) << endl;
	}
	//////////////////////////////////////////////////////////////
	aVector.clear();
	aVector.reserve(1000);
	for(size_t i {0}; i != 1000; i++){		
		aVector.push_back(std::make_unique<string>("Str" + std::to_string(i)));
		getSizeAndCapacityOfvector(&aVector);
	}
	for(size_t i {0}; i != 1000; i++){
		cout << *aVector.at(i) << endl;
	}
	return 0;
}