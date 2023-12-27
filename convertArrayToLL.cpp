#include <iostream>
#include <vector>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    public:
    // contructor it runs everytime Node is called
    Node (int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    // another form of constructor program may have multiple constructor
    Node (int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArrToLL(vector<int> &arr){
    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;
    for(int i=1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}
int main(){
    vector<int> arr ={2,5,8,3};
    Node* head = convertArrToLL(arr);
    cout<< head->data;

    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}