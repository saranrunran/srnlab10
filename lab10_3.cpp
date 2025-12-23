#include <iostream>
#include <iomanip>
#include<fstream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    ifstream source;
    source.open("score.txt");

    string text;
    double num=0, sum=0, summ=0;
    while(getline(source,text)) {
        sum += stod(text);
        summ = summ + pow(stod(text),2);
        num++;
    }

    double n = sqrt((summ/num)-pow((sum/num),2));   

    cout << "Number of data = " << num <<"\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/num << "\n";
    cout << "Standard deviation = " << n;
}