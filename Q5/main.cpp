
#include <iostream>
#include <memory>
#include <string>
#include "Stack.h"
#include "CText.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){
	Stack<std::shared_ptr<string>> stack;
	string base{"TEXT"};
	
	for(char a{'A'}; a <= 'Z'; a++){
		stack.push(std::make_shared<string>(base + a));
	}

	//Pop everything out
	int N{stack.getCount()};
	if(stack.isEmpty()){
		cout << "Stack is empty" << endl;
		return -1;
	}

	for(int i{}; i < N; i++){
		cout << stack.pop() << endl;
	}

	if(stack.isEmpty()){
		cout << "Stack is empty" << endl;
	}

	return 0;
}

