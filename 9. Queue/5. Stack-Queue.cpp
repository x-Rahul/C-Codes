#include<bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;
public:
    Stack(){
        N=0;
    }
    void push(int x){
        q2.push(x);
        N++;
        //transfer
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        // reversing
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;  
    }

    void pop(){
        if(q1.empty()){
            cout<<"Empty";
            return;
        }
        q1.pop();
        N--;
    }

    int top(){
        if(q1.empty()){
            cout<<"No element";
            return -1;
        }
        return q1.front();
    }

    int Size(){
        return N;
    }
};


int main(){
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.Size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();

    cout<<st.top()<<endl;
    st.pop();
    return 0;

}