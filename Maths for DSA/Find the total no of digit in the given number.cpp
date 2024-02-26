Logarithm Base 10:
log10(12345) ≈ 4.09149
Count of Digits:
The floor of 4.09149 is 4.
Adding 1 to 4 gives us 5.
So, the count of digits in the number 12345 is 5, which matches our expectation since there are 5 digits in the number.

#include<bits/stdc++.h>;
using namespace std;
int main(){
    int n = 1234;
    int count = 0;
    while(n){
        n=n/10;
        count++;
    }
    cout<<count<<endl;
}
*****************************************************
#include<bits/stdc++.h>;
using namespace std;
int f(int n){
    if(n==0) return 0;
    return 1+f(n/10);
}
int main(){
    int n = 1234;
    cout<<f(n);
}
*************************************************************************8
#include <iostream>
#include <cmath>
int countDigits(long number) {
    return (int)log10(number) + 1;
}

int main() {
    long number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int digitCount = countDigits(number);

    std::cout << "Total digits: " << digitCount << std::endl;

    return 0;
}

