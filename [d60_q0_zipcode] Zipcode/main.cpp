#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
class Letter{
    public:
        string name;    string address;    string province;    string district;    int zip;
        bool operator < (const Letter& other) const {
            if (this->zip==other.zip){
                if (this->address==other.address){
                    if (make_pair(this->district,this->province)==make_pair(other.district,other.province)){
                        return this->name<other.name;
                    }
                    else{
                        return make_pair(this->district,this->province)<make_pair(other.district,other.province);
                    }
                }
                else{
                    return this->address<other.address;
                }
            }
            else {
                return this->zip<other.zip;
            }
        }
};
class ZipInfo{
    public:
        int zip;
        string province;
        string district;
    };
    void correctZipAndSortLetters(vector<ZipInfo>& zipinfo, vector<Letter>& letters) {
        map<pair<string,string>,int> m;
        for (auto&x: zipinfo){
            m[make_pair(x.province,x.district)]=x.zip;
        }
        for (auto&x:letters){
            x.zip=m[make_pair(x.province,x.district)];
        }
        sort(letters.begin(),letters.end());
    }

int main() {
    int nzip;
    cin>>nzip;
    vector<ZipInfo> zipinfo;
    for (int i = 0; i < nzip; i++) {
        ZipInfo z;
        cin>>z.zip>>z.district>>z.province;
        zipinfo.push_back(z);
    }
    int n;
    cin>>n;
    vector<Letter> letters;
    for (int i = 0; i < n; i++) {
        Letter l;
        cin>>l.name>>l.address>>l.district>>l.province>>l.zip;
        letters.push_back(l);
    }
    correctZipAndSortLetters(zipinfo, letters);
    for (auto& l:letters) {
        cout<<l.name<<" "<<l.address<<" "<<l.district<<" "<<l.province<<" "<<l.zip<<endl;
    }
}
