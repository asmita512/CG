#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef uint64_t Int;
int main(){
   // Int s;
    unsigned long int s, t,q,tn,sn;
    clearerr(stdin);
    cin.clear();
    cin >>s >> t >> q;

 if ( q > s || t> s || s <=0 || s > 1000000000 || t > 1000000 || q > 1000000)
    return -1;
   std::set <Int>tv;
  // std::multiset <Int> qv;
   std::vector <char> ans;

    for (Int i=0;i<t; i++) {
        clearerr(stdin);
        cin>> tn;
        tv.insert(tn);
    }


    for (Int i=0;i<q; i++) {
        clearerr(stdin);
        cin>> sn;
        auto it = tv.find(sn);
        if (it != tv.end()) {
                ans.push_back('N');
        }
        else
        ans.push_back('Y');
     }
   
 for (auto it = ans.begin(); it != ans.end(); it++)
        cout << *it <<endl;
    return 0;
}