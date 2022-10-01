#include<bits/stdc++.h>
using namespace std;
    string addBitStrings( string first, string second ) 
{ 
    string result;
    int length = makeEqualLength(first, second); 
    int carry = 0;
    for (int i = length-1 ; i >= 0 ; i--) 
    { 
        int firstBit = first.at(i) - '0'; 
        int secondBit = second.at(i) - '0'; 
        int sum = (firstBit ^ secondBit ^ carry)+'0'; 
        result = (char)sum + result; 
        cout << result <<endl;
        carry = (firstBit&secondBit) | (secondBit&carry) | (firstBit&carry); 
    } 
    if (carry)  result = '1' + result; 
    return result; 
}
int main (){
     int a;
	 cin>>a;
	 //cin.ignore();
	 while(a--) {
	 	string first,second;
	 	getline(cin,first);
	 	getline(cin,second);
	 	cout<<addBitStrings(first,second);
	 }
}

