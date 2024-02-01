#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,m,r;
    cin>>n,cin>>m;
    cin>>r;
    vector<string> result={};
    vector<vector<int>> rows={};
    vector<int> a_s={};
    for (int i=0;i<n;i++){
        vector<int> row={};
        for (int e=0;e<m;e++){
            int c;
            cin>>c;
            row.push_back(c);
        }
        rows.push_back(row);
    }
    for (int i=0;i<r;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if (c<a or b>d){
            result.push_back("INVALID");
        }
        else if ((n<a and n<c)or(m<b and m<d)){
            result.push_back("OUTSIDE");
        }
        else {
            a_s={};
            int left_left,left_top,right_right,right_bottom;
            left_left=max(b,1);
            left_top=max(a,1);
            right_right=min(d,m);
            right_bottom=min(c,n);
            for (int i=left_left-1;i<right_right;i++){
                for (int e=left_top-1;e<right_bottom;e++){
                    a_s.push_back(rows[e][i]);
                    }
            }
            int max_value=a_s[0];
            for (int i=1;i<a_s.size();i++){
                max_value=max(max_value,a_s[i]);
            }
            result.push_back(to_string(max_value));
            }
    }
    for (int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
}
