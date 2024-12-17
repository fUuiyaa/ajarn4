#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ifstream source("score.txt");
    string text;
    int count = 0;
    double sum =0;
    double sumsq=0;
    
    while(getline(source,text)){
        sum += stod(text);
        count++;
        sumsq += pow(stod(text),2);
    }
    double mean = sum/count;
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sqrt((sumsq/count-(mean*mean)));

    return 0;
}