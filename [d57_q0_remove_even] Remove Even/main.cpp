#include <iostream>
#include <vector>

using namespace std;

void remove_even(vector<int> &v,int a,int b) {
    if (a%2==1){
        a++;
        }
    auto it=v.begin()+a;
    int number_of_times=(b-a)/2+1;
    for (int i=0;i<number_of_times;i++){
        v.erase(it);
        it++;
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
     remove_even(v,a,b);
     //display content of the vector
     for (auto &x : v) {
            cout << x << " ";
     }
     cout << endl;
 }
