Find all divisors of a natural number

#include<bits/stdc++.h>
using namespace std;
int main() {
   int n = 12; //1 2 3 4 6 12 
   for(int i=1;i<=n;i++){ //O(N)
       if(n%i==0){
           cout<<i<<endl;
       }
   }
}
************************************************

The divisors of 100 are: 
1 100 2 50 4 25 5 20 10

// A Better (than Naive) Solution to find all divisors 
#include <iostream> 
#include <math.h> 
using namespace std; 
// Function to print the divisors 
void printDivisors(int n) {  //O(sqrt(n))
	// Note that this loop runs till square root 
	for (int i=1; i<=sqrt(n); i++) 	{ 
		if (n%i == 0){ 
			// If divisors are equal, print only one 
			if (n/i == i) 
				cout <<" "<< i; 
			else // Otherwise print both 
				cout << " "<< i << " " << n/i; 
		} 
	} 
} 
int main() 
{ 
	cout <<"The divisors of 100 are: \n"; 
	printDivisors(100); 
	return 0; 
} 
