#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &v,int a,int b) {
    vector<int> v1={};
    //get all v values from a to b
    for (int i=a;i<=b;i++){
        v1.push_back(v[i]);
    }
    for (int i=0;i<b-a+1;i++){
        v[a+i]=v1[b-a-i];
    }
}
int main() {
    //read input
    int n,a,b;
    cin >> n;
    vector<int> v;
    for (int i = 0;i < n;i++) {
            int c;
            cin >> c;
            v.push_back(c);
    }
    cin >> a >> b;
    //call function
    reverse(v,a,b);
    //display content of the vector
    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}
