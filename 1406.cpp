#include <iostream>
#include <string>

using namespace std;

class Node{
public:
    char data;
    Node* next;
    Node* prev;
    Node(char _data){
        data = _data;
        next = NULL;
        prev = NULL;
    }

};

int main(){
    string s;
    int n;
    cin >> s;

    Node* head = new Node('0');
    Node* tail = head;

    for(int i = 0; i < s.length(); i++){
        Node* tmp = new Node(s[i]);    
        tail->next = tmp;
        tmp->prev = tail;
        tail = tmp;
    }

    cin >> n;
    Node* cs = tail;

    while(n--){
        char c;
        cin >> c;

        if(c == 'L'){
            if(cs->prev != NULL){
                cs = cs->prev;
            }
        }
        else if(c == 'D'){
            if(cs->next != NULL){
                cs = cs->next;
            }
        }
        else if(c == 'B'){
            if(cs != head){
                Node* del = cs;
                cs = cs->prev;
                cs->next = del->next;
                if(del->next != NULL){
                    del->next->prev = cs;
                }
                else{
                    tail = cs;
                }
                delete del;
            }
        }
        else if(c == 'P'){
            char p;
            cin >> p;
            Node* newNode = new Node(p);
            newNode->next = cs->next;
            newNode->prev = cs;

            if(cs->next != NULL){
                cs->next->prev = newNode;
            }
            else{
                tail = newNode;
            }
            cs->next = newNode;
            cs = newNode;
        }
    }

    Node* cur = head->next;
    while (cur != NULL){
        cout<< cur->data;
        cur = cur->next;
    }
    cout << "\n";
    return 0;
}