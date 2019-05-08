#include <stdexcept>
#include <algorithm>

using std::cout;
using std::endl;
using std::cin;

template <typename T>
class Stack
{
private:
	int counter{};
    // Nested class
    class Node
    {
      public:
        T item {};                           
        Node* next {};                       
        Node(const T& item) : item {item} {} 

    };
    Node* head {};                 
  public:
    Stack() = default;                 
    Stack(const Stack& stack){
		if (stack.head){
		    head = new Node {*stack.head};          // Copy the top node of the original
		    Node* oldNode {stack.head};             // Points to the top node of the original
		    Node* newNode {head};                   // Points to the node in the new stack
		    while (oldNode = oldNode->next)         // If next was nullptr, the last node was copied
		    {     
		      newNode->next = new Node{*oldNode};   // Duplicate it
		      newNode = newNode->next;              // Move to the node just created
		    }
		}
    }        
    ~Stack(){
    	while (!isEmpty()) pop();
    }
    Stack& operator=(const Stack& rhs){
    	auto copy{rhs};        // Copy...        (could go wrong and throw an exception)
  		//swap(copy);            // ... and swap!  (noexcept)
  		return *this;
    }
    void push(const T& item){
    	Node* node{new Node(item)};                  // Create the new node
  		node->next = head;                           // Point to the old top node
  		head = node;   
  		counter++;
	}
    T pop(){
    	if(isEmpty())                             
    		throw std::logic_error {"Stack empty"};    	
  		auto* next {head->next};                  
  		T item {head->item};   		
  		delete head;                              
  		head = next; 
  		return item;
    }                
    bool isEmpty() const{
    	return head == nullptr;
    }
    int getCount(){
    	return counter;
    }
};
