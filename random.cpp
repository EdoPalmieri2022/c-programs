#include<iostream>
#include<time.h>
#include <cstdlib>
using namespace std;
int randomnumber(int min, int max){
	int random= min + (rand() % max);
	return random;	
}
int main(){
	int r; 
	r=randomnumber(10,20);
	cout<<r;
	return 0;
}
