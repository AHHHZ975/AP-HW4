 #include "Stack.h"
template <typename T>
Stack<T>::Stack(const Stack& stack)
{
  if (stack.head)
  {
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


template <typename T>
Stack<T>& Stack<T>::operator=(const Stack& rhs)
{
  auto copy{rhs};        // Copy...        (could go wrong and throw an exception)
  swap(copy);            // ... and swap!  (noexcept)
  return *this;
}

