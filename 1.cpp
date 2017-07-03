#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cmath>
#include <float.h>
using namespace std;

int lastDigit(int a, int b) {

  int result = pow(5,4);
    cout << result << " " << result % 10 << endl;

  result = result % 10;
  return result;
}


main() {
cout << lastDigit(5,4);
}
