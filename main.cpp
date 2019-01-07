#include <iostream>
#include <stack>
using namespace std;

struct Queue{
    stack<int> s1 , s2;


    void Enqueue(int x){
        while (!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while (!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }

    }

    int Dequeue(){
            cout<<"Queue's elements"<<endl;
            int x = s1.top();
            s1.pop();
            return x;
    }

};

void loop();

int main() {

    Queue q;
    int Size , i;
    cout<<"enter the number of elements"<<endl;
    cin>>Size;
    cout<<endl;
    cout<<"enter the elements of the queue"<<endl;
    for (i = 0 ; i < Size ; ++i) {
        cin>>i;
        q.Enqueue(i);
    }
    for (i = 0 ; i < Size ; ++i) {
        cout<<q.Dequeue()<<endl;
    }
    loop();
}


void loop(){
    char choice;
    cout<<"y : Continue"<<endl;
    cout<<"n : Exit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    cout<<endl;
    while (true){
        if(choice == 'y'){
            main();
        }
        else if(choice == 'n'){
            return;
        }
    }
}