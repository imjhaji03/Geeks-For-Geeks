//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void insertathead(Node* &head, int data){
        Node* temp = new Node(data);
        temp -> next = head;
        head = temp;
    }
    
    void print(Node* &head){
        Node* ptr = head;
        while(ptr!= NULL){
            cout<<ptr -> data<< " ";
            ptr = ptr -> next;
        }
    }
    Node *insertAtBegining(Node *head, int x) {
        insertathead(head, x);
        print(head);
    }
   
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        struct Node *ans = ob.insertAtBegining(head, x);
        printList(ans);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends