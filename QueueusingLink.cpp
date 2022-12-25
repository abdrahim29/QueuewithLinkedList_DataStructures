#include<iostream>
using namespace std;

class Node{
    public:
    int key,data;
    Node* next=NULL;

    Node(){
        key=data=0;
        next=NULL;
    }
    Node(int k,int d){
        key=k;
        data=k;
        next=NULL;
    }
    
};
class Queuelink{
    public: 

    Node *front;
    Node *rear;

    Queuelink(){
        front=NULL;
        rear=NULL;
    }

    bool isEmpty(){
        if(front==NULL && rear==NULL){
            return true;
        }
        else{
            return false;
        }
    }

    void Enqueue(Node *n){
        if(isEmpty()){
            front=n;
            rear=n;
            cout<<"enqueued\n";
        }
        else{
            rear->next=n;
            rear=n;
        }
    }

    Node *Dequeue(){
        Node *temp=NULL;
        if(isEmpty()){
        
        }
        else if(front==rear){
            temp=front;
            front=NULL;
            rear=NULL;
            cout<<"dequeued with data "<<temp->data;
        }
        else{
            temp=front;
            front=front->next;
            cout<<"dequeued\n";
        }

        return temp;
    }

    void print(){
        Node *temp=front;
        if(front==NULL){
            cout<<"\nempty list";
        }
        else{
            while(temp!=NULL){
                cout<<temp->key<<","<<temp->data<<endl;
                temp=temp->next;
            }
            
        }
    }




};

int main()
{
    int k1,d1;
    Queuelink q;
    Node *n1=new Node();

    cout<<"enter key: ";
    cin>>k1;
    cout<<"enter data: ";
    cin>>d1;

    n1->key=k1;
    n1->data=d1;

    q.Enqueue(n1);
    q.print();

    q.Dequeue();
    q.print();
    
    return 0;
}