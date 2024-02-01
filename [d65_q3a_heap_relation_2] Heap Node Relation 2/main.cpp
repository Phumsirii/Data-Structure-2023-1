#include <iostream>
#include <vector>

using namespace std;

long long findh(long long S,long long t){
    long long h=0;
    while (t>0){
        t=(t-1)/S;
        h++;
    }
    return h;
}

int relation(long long S, long long a, long long b) {
    if (b<a) swap(a,b);
    if ((b-1)/S==a) return 1;
    long long t=b;
    while (t>0){
        if ((t=(t-1)/S)==a) return 2;
    }
    return (findh(S,a)==findh(S,b))?4:3;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n;
  long long S,a,b;
  cin >> n;
  while (n--) {
    cin >> S >> a >> b;
    cout << relation(S,a,b) << " ";
  }
  cout << endl;
}
