// Online C++ compiler to run C++ program online
/* Read input from STDIN. Print your output to STDOUT*/
/*
The world is going to be attacked by the aliens. The space intelligence department has raised an alarm and the world armies are coming together to fight them. The planning and strategizing is being done to make the maximum impact on the alien ships. The deadly missiles are to be put into action. The missiles are targeted to destroy the alien ships in space and disable them to land on the Earth.

The army is planning to launch the attack at A time (hh mm) to get an advantage. For each attack, they know the time the missile will require to hit the coming alien ship. They all are busy in preparation and want to know the time at which the blast will occur and the alien ship will be destroyed in pieces. Can you find the time of the blast ?

Note: The World Army follows a 24-hour time format and you need to find the time of blast accordingly. The time will be in the hh mm format.

Example
Input
19 50
02 20
Output
22 10
*/
#include<stdio.h>
#include<iostream>
using namespace std;

class Time {
	int mm;
	int hh;
	public:
	Time():hh(0),mm(0){}
	Time(int i_hh, int i_mm){
		hh=i_hh;
		mm=i_mm;
		setValid(hh,mm);
	}

    Time & operator + (const Time &travelTime) {
		mm +=travelTime.mm;
		hh +=travelTime.hh;
        if(mm>59){
			mm%=60;
			hh++;
		}
		if(hh>=24) hh%=24; 
		return *this;
	}
	void getTime(){
	    scanf("%d%d",&hh,&mm);
		setValid(hh,mm);
	}
	void showTime(){
		printf("%02d %02d\n", hh,mm);
	}
    void setValid(int i_hh, int i_mm) {
        if(i_hh>23 || i_mm>59) hh=mm=0;
    }
};

int main(int argc, char *a[])
{
	Time t1,t2,t3;
	t1.getTime();
	t2.getTime();
    t1.showTime();
    t2.showTime();
	t3=t1+t2;
	t3.showTime();
	return 0;
}
