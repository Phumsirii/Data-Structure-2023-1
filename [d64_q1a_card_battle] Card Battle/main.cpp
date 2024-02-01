#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    vector<int> player;
    int n,m,n2,in,rounds,p,f;
    bool eli=true;
    cin>>n>>m;
    for (int i=0;i<n;i++){
        cin>>in;
        player.push_back(in);
    }
    sort(player.begin(),player.end());
    rounds=1;
    int i=0;
    while (i<m){ //each round
        i++;
        cin>>n2; //number of cards each rival has
        for (int e=0;e<n2;e++){
            cin>>p;  //points of each player's card
            if (lower_bound(player.begin(),player.end(),p+1)!=player.end()){
                player.erase(lower_bound(player.begin(),player.end(),p+1));
            }
            else{
                eli=false;
                break;
            }

        }
        if (eli){
            rounds++;
        }
        else{
            break;
        }
    }
    while(i<m){
        cin>>n2;
        for (int e=0;e<n2;e++){
            cin>>p;
        }
        i++;
    }
    cout<<rounds;
}
