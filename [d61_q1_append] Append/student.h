#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        stack<T> spare;
        while (!empty()){
            spare.push(top());
            pop();
        }
        while (!spare.empty()){
            s.push(spare.top());
            spare.pop();
        }
        *this=s;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        stack<T> spare;
        while (!empty()){
            spare.push(top());
            pop();
        }
        while (!q.empty()){
            spare.push(q.front());
            q.pop();
        }
        while (!spare.empty()){
            push(spare.top());
            spare.pop();
        }
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        while (!s.empty()){
            push(s.top());
            s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while (!q.empty()){
            push(q.front());
            q.pop();
        }
    }
}
