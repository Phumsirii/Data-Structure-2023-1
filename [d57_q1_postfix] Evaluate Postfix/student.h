#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <bits/stdc++.h>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
    stack<int> s;
    for (pair<int,int> &x:v){
        if (x.first==1){
            s.push(x.second);
        }
        else {
            int n1=s.top();
            s.pop();
            int n2=s.top();
            s.pop();
            if (x.second==0) s.push(n1+n2);
            else if (x.second==1) s.push(n2-n1);
            else if (x.second==2) s.push(n1*n2);
            else s.push(n2/n1);
        }
    }
    return s.top();
}

#endif
