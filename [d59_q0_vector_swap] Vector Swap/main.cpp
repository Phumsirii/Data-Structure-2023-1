#include <iostream>
#include <vector>

using namespace std;

void vector_swap(vector<int> &v1,vector<int> &v2,
    int start1, int end1,
    int start2, int end2) {
        int n1=v1.size()+(end2-start2)-(end1-start1),n2=v1.size()+v2.size()-n1;
        vector<int> v12(n1),v22(n2);
        int p1=0,p2=0;
        while (p1<start1 || p2<start2){//not finished with unswapped ones
            if (p1<start1){
                v12[p1]=v1[p1];
                p1++;
            }
            if (p2<start2){
                v22[p2]=v2[p2];
                p2++;
            }
        }
        while (p1<end1 || p2<end2){
            if (p1<end1){//transfer from 1 to 2
                v22[start2+(p1-start1)]=v1[p1];
                p1++;
            }
            if (p2<end2){
                v12[start1+(p2-start2)]=v2[p2];
                p2++;
            }
        }
        while(p1<v1.size()||p2<v2.size()){
            if (p1<v1.size()){
                v12[start1+(end2-start2)+(p1-end1)]=v1[p1];
                p1++;
            }
            if (p2<v2.size()){
                v22[start2+(end1-start1)+(p2-end2)]=v2[p2];
                p2++;
            }
        }
        v1=v12;
        v2=v22;
}

int main() {
    //read input
    int n,c;
    vector<int>v1,v2;
    cin >> n; //number of v1
    for (int i = 0;i < n;i++) {
        cin >> c;
        v1.push_back(c);
    }
    cin >> n; //number of v2
    for (int i = 0;i < n;i++) {
        cin >> c;
        v2.push_back(c);
    }
    int s1,e1,s2,e2; //position
    cin >> s1 >> e1 >> s2 >> e2;
    //call the function
    vector_swap(v1,v2,s1,e1,s2,e2);
    //display content of the stack
    cout << "v1 has " << v1.size() << endl;
    for (auto &x : v1) { cout << x << " "; }
    cout << endl;
    //display content of the stack
    cout << "v2 has " << v2.size() << endl;
    for (auto &x : v2) { cout << x << " "; }
    cout << endl;
}
