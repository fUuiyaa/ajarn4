#include <iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	int i = 1;
	char grade;
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A'){ // if grade is A
			count[0]+=1;
		}
			else if(grade=='B'){ // if grade is B
			count[1]+=1;
		}
			else if(grade=='C'){
			count[2]+=1;
		} 	else if(grade=='D'){
			count[3]+=1;
		} 	else if(grade=='F'){
			count[4]+=1;
		} else if(grade =='0') break;
			else{ 
			cout << "Wrong input. Please input again.\n";
			i--;
		} i++; } while(true);
	
	
	cout << "In total " << --i << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	return 0;

}
