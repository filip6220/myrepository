#include <iostream>
#include <vector>
#include <sstream>
#include <stdio.h>
using namespace std;

std::vector<std::string> isDivisibleBy3(std::string inputString) {
    vector<string> outputString;
    stringstream temp;
    long long int number;
    int index = 0;
    int i;
    for(i=0; inputString[i]!='*'; i++);
    for(unsigned int j=0; j<10; j++){
        inputString[i] = j + '0';
        temp << inputString;
        temp >> number;
        cout << number << endl;
        if(number%3==0){
            outputString.push_back(inputString);
            index++;
        }
        temp.clear();
    }
    return outputString;
}

main() {
//isDivisibleBy3("1*0");
vector<string> a = isDivisibleBy3("1234567890*");
for(int i=0; i<a.size(); i++){
    cout << a[i] << endl;
}
}
