#include <iostream>

using namespace std;

class Node {
public:
       int Value;
       Node* Next;

};

void printList(Node* n) {
      while  (n != NULL) {
              cout << n->Value << endl;
              n = n->Next;
        }
}

void insertAtTheFront(Node**head, int newValue) {
        Node* newNode = new Node();
        newNode->Value = newValue;
        newNode->Next = *head;
        *head = newNode;
    
}

void insertAtTheEnd(Node**head, int newValue) {
        Node* newNode = new Node();
        newNode->Value = newValue;
        newNode->Next = NULL;
        if (*head == NULL ) {
            *head = newNode;
            return;
        }
        Node* last = *head;
        while (last->Next != NULL) {
            last = last->Next;
        }
        last->Next = newNode;
}

void insertAfter(Node*previous, int newValue) {
      if (previous == NULL) {
          cout << "Previous node can not be NULL";
          return;
      }
      Node* newNode = new Node();
      newNode->Value = newValue;
      newNode->Next = previous->Next;
      previous->Next = newNode;
}


int main()
{
      Node* head = new Node();
      Node* second = new Node();
      Node* third = new Node();
      Node* fourth = new Node();
      Node* fifth = new Node();
      
      head->Value = 1;
      head->Next = second;
      second->Value = 2;
      second->Next = third;
      third->Value = 3;
      third->Next = fourth;
      fourth->Value = 4;
      fourth->Next = fifth;
      fifth->Value = 5;
      fifth->Next = NULL;


      insertAfter(head, 2);
      insertAtTheEnd(&head, 99);
      printList(head);
      
      system("pause>0");
      
}

