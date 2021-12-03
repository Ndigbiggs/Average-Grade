#include <iostream>
using namespace std;

float Average(float);
float Average(float num[]){
	float average = 0;
	for(int i=0; i<7; i++){
		average=average+num[i];
	}
	
	return average;
}

int main(){
	float average[7];
	cout<<"Enter the grades of the 7 students: \n";
	cin>> average[1];
	cin>> average[2];
	cin>> average[3];
    cin>> average[4];
	cin>> average[5];
	cin>> average[6];
	cin>> average[7];
	
	cout<<"The average mark is: "<< Average(average)/7;
	
}
