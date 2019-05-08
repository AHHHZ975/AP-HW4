#include <stdexcept>
#include <algorithm>

template <typename T>
class Stack
{
private:
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
    Stack(const Stack& stack);         
    ~Stack(){
    	while (head){                  
		    auto* next = head->next;   
		    delete head;               
		    head = next;               
	  	}
    }
    Stack& operator=(const Stack& rhs);
    void push(const T& item){
    	Node* node{new Node(item)};                  // Create the new node
  		node->next = head;                           // Point to the old top node
  		head = node;   
	}
    T pop(){
    	// if(isEmpty())                             
    	// 	throw std::logic_error {"Stack empty"};  
  		auto* next {head->next};                  
  		T item {head->item};                      
  		delete head;                              
  		head = next; 
    }                
    bool isEmpty() const{
    	return head == nullptr;
    }
    int getCount(){
    	return 20;
    }     
};
