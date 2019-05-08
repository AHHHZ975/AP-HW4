#include <iostream>
template <typename T>
class Stack{
private:
	// Nested class
    class Node{
      public:
        T item {};                             // The object stored in this node
        Node* next {};                         // Pointer to next node
        Node(const T& item) : item {item} {}   // Create a node from an object
    };
    // Nested Node class definition as before...
    Node* head {};                             // Points to the top of the stack
  public:
    Stack() = default;                         //
    Stack(const Stack& stack);                 //
    ~Stack();                                  //
    Stack& operator=(const Stack& rhs);        //
    void push(const T& item);                  // Push an object onto the stack
    T pop();                                   // Pop an object off the stack
    bool isEmpty() const;                      // Empty test
    void swap(Stack& other) noexcept;
};