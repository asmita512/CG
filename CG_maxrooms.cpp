/* Read input from STDIN. Print your output to STDOUT*/
/*
Ram is excited about his college life. He has prepared well for his entrance exam and is confident of clearing it. He reaches the examination center and is allotted a number N. He tries to find the room number with the given N but is unable to do it. After some time, another aspirant tells Ram that the examination center does not have any room with number 2 or 14 in it. However, the number they have provided is the sequence room number you have to go to.

Example:
The given number N = 4

1

Since, room number 2 is not present, the room number that will come at the 4th position is room number 5.

Similarly, the given number N = 13.

2

The corresponding room number to the given number is room number 16. Note: The number 14 should be present as whole and not in parts. Example: 134 is valid but 144 is not valid. 12, 22, 114 and all such numbers which include 2 or 14 are invalid.

This makes Ram worried as he is not able to figure out his room number and the time is running out. Can you help him find the corresponding room number for his given number so that he can reach the examination room and be relaxed for the exam?

Input Format
The only line of input consists of a single integer, N.

Constraints
1<= N <=1300

Output Format
Print the corresponding room number for the given number.

Sample TestCase 1
Input
16

Output
19

Explanation
For the given, N = 16 The corresponding room number is 19.

3
*/

/// https://github.com/cladius/solution/tree/master/2022/SemiFinal/1%20Exam%20Center
#include<stdio.h>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
//#define maxrooms 1300
int main(int argc, char *a[])
{
    int room=0;
    cin>>room;
    
    long int maxrooms = 2147483646;
	//string iv1="2", iv2="14", s1,s2;
	long int arr[maxrooms],num=1, i=1;
	for (i=1; i<=maxrooms; i++)
	{
		if ((to_string(i).find("2") == std::string::npos))
		{
            if (to_string(i).find("14") == std::string::npos) 
              arr[i]=num++;
              if(arr[i] == room) {
                  cout<< i;
                  return i;
                  break;
              }
		}
        else 
        arr[i]=0;
	}
    return 0;
}
