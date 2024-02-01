#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,type;
    cin>>n>>m;
    map<string,set<string>> dept_employees;
    map<string,string> emp_dept;
    string em,dept,dept2;
    while (n--){
        cin>>em>>dept;
        dept_employees[dept].insert(em);
        emp_dept[em]=dept;
    }
    while (m--){
        cin>>type;
        if (type==1){
            cin>>em>>dept;
            dept_employees[emp_dept[em]].erase(em);
            dept_employees[dept].insert(em);
            emp_dept[em]=dept;
        }
        else {
            cin>>dept>>dept2;
            for (auto&x:dept_employees[dept]){
                emp_dept[x]=dept2;
                dept_employees[dept2].insert(x);
            }
            dept_employees.erase(dept_employees.find(dept));
        }
    }
    for (auto&x:dept_employees){
        cout<<x.first<<": ";
        for (auto&y:x.second){
            cout<<y<<" ";
        }
        cout<<"\n";
    }
}
