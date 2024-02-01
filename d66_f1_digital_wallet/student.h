#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <string>
#include <bits/stdc++.h>
// you can include anything

using namespace std;

class DigitalWallet {
  // you can declare variables or write new function
    class Money{
        friend class DigitalWallet;
    public:
        int amount;
        int expiredate;
        Money(int amount,int expire){
            this->expiredate=expire;
            this->amount=amount;
        }
        bool operator<(const Money& other) const{
            if (expiredate==other.expiredate) return amount<other.amount;
            return expiredate<other.expiredate;
        }
    };
    map<string,pair<int,set<Money>>> personMoney;
    long long totalgive=0;
    long long totalexpire=0;
    long long totalspent=0;
    public:
  void add_money(size_t time, string person_id, int amount, size_t duration) {
      personMoney[person_id].first+=amount;
      personMoney[person_id].second.insert(Money(amount,time+duration));
      totalgive+=amount;
  }

  bool use_money(size_t time, string person_id, int amount) {
      if (current_money(time,person_id)<amount) return false;
      int tmp=0;
      while (tmp<amount){
        int tmp2=amount-tmp;
        if(((personMoney[person_id].second).begin())->amount<tmp2){ //erase whole Money
            tmp+=((personMoney[person_id].second).begin())->amount;
            (personMoney[person_id].second).erase((personMoney[person_id].second).begin());
        }
        else{
            int exp=(personMoney[person_id].second).begin()->expiredate;
            int tmpamt=(personMoney[person_id].second).begin()->amount-tmp2;
            (personMoney[person_id].second).erase((personMoney[person_id].second).begin());
            (personMoney[person_id].second).insert(Money(tmpamt,exp));
            tmp=amount;
        }
      }
      personMoney[person_id].first-=amount;
      totalspent+=amount;
      return true;
  }

  int current_money(size_t time, string person_id) {
      while (!(personMoney[person_id].second).empty() && ((personMoney[person_id].second).begin())->expiredate<time){
        int expirenow=((personMoney[person_id].second).begin())->amount;
        /*cout<<person_id<<endl;
        cout<<expirenow<<endl;*/
        personMoney[person_id].first-=expirenow;
        totalexpire+=expirenow;
        (personMoney[person_id].second).erase((personMoney[person_id].second).begin());
      }
      //cout<<person_id<<endl;
      return personMoney[person_id].first;
  }

  void status(size_t time, long long &total_give, long long &total_spent,
              long long &total_expired) {
    for(auto &x:personMoney) current_money(time,x.first);
    total_give=totalgive;
    total_expired=totalexpire;
    total_spent=totalspent;
  }
};

#endif
