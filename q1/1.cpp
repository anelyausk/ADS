#include <iostream>
using namespace std;

struct Node {
  string word;
  Node* next;

  Node() {}

  Node(string word) {
    this->word = word;
    this->next = NULL;
  }
};

// your code goes here

Node* cyclicShift(Node* head, int k) {
  Node* current = head;
  Node* second = new Node;
  for (int i = 0; i < k - 1; i++)
  {
    current = current->next;
    second -> next = current;
  }
  second = current->next;
  current->next = NULL;
  
  Node* tmp = second;
  while (tmp->next != NULL) {
    tmp = tmp->next;
  }
  tmp->next = head;
  
  return second;
}

void print(Node* head) {
  Node* cur = head;
  while (cur != NULL) {
    cout << cur->word << " ";
    cur = cur->next;
  }
  cout << endl;
}

int main() {
  int n; cin >> n;
  int k; cin >> k;
  Node* head;
  Node* cur;
  for (int i = 0; i < n; i++) {
    string word; cin >> word;
    if (i == 0) {
      head = new Node(word);
      cur = head;
    } else {
      cur->next = new Node(word);
      cur = cur->next;
    }
  }

  head = cyclicShift(head, k);
  print(head);
}