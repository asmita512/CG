/* Read input from STDIN. Print your output to STDOUT*/
/*
Chantu and Bantu are the hostlers and like any other hostler have very less money with them. They promised their girlfriends, Rani and Sheena that they would give them N number of gifts on their birthday. The birthday is next week and Chantu and Bantu are trying to figure out a way to make them happy.

They went to a gift shop which consists of G number of gifts and now need your help to determine the minimum money they will have to arrange to buy N gifts. Once you tell them the amount of money required, they will plan out something to arrange for the money. Can you help them figure out the minimum money required to buy N gifts?

Example:
Number of gifts available in the shop, G = 8 Number of gifts to be bought, N = 3

1

The minimum amount of money Chantu Bantu have to spend to buy 3 gifts = 10 + 20 + 30 = 60

Input Format
The first line of input consists of number of test cases, T The first line of each test case consists of 
number of gifts Chantu Bantu have to buy, N The second line of each test case consists of number of gifts 
available in the shop, G The thirds line of each test case consists of G space-separated integers representing 
the price of G gifts where the first integer represents the price of first gift and so on.

Constraints
1<= T <=10
1<= G <=100000
1<= N <=G
0<= Price of Gift <=10000000
Output Format
For each test case, print the minimum amount of money Chantu Bantu has to pay to buy the N gifts.

Sample TestCase 1
Input
2
3
8
50 70 30 100 80 20 150 10
4
6
10 20 32 412 500 11
Output
60
73
Explanation
Test Case 1: As explained in the example.
Test Case 2:
Number of gifts to be bought, N = 4
Number of gifts available, G = 6
Minimum amount of money Chantu Bantu has to pay = 10 + 20 + 32 + 11 = 73
*/
#include<stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
using namespace std;

int main(int argc, char *a[])
{
	int setsize;
    cin>> setsize;
 
    for (int t = 0 ; t < setsize ; t++){
        long int n,g;
   	    std::vector<long int> gifts;
        cin >> n;
        cin >> g;
       
        for(int i=0; n>=1 && i<g && n<=g && g<=10000000; i++)
        { 
            int val;
            cin >> val;
            gifts.push_back(val);
        }
        sort(gifts.begin(), gifts.end());
        auto it = gifts.begin();
        std::advance(it, n);
        //long int sum1 = std::accumulate(gifts.begin(), it,0);
        long int x=0,sum=0;
        for(auto it=gifts.begin();it!=gifts.end(), x<n; it++, x++)
            sum+=*it;
       
        cout << sum <<endl;
    }
    return 0;
}
