#include<iostream>
#include<time.h>
#include <cstdlib>
#define n 10
using namespace std;
int main(){

int a[n];
int i, j;


srand(time(0));

for (i=0; i<n; i++){
	a[i]=rand()%n+1;
	for(j=0; j<i; j++){
		if(a[i]==a[j]){
			a[i]=a[i+1];
			i++;
			if(i=n){
				i=0; 
			}
			
		}
	}
}
for(i=0; i<n; i++)
cout<<a[i]<<endl;

}


/*  for(i=0;i<N;i++) {
    a[i]=rand()%30+1;
    for(j=0;j<i;j++) {
       	if(a[i]==a[j]) {
           i--;
           break;
        }
     }
      for(i=0;i<N;i++)
   printf("%d\n", a[i]);
   
  return 0;
}*/
