#include <iostream>
using namespace std;

void decimalToBinary(int num);
int main(){
    
    int number;
    
    cout << "Enter a number in decimal: ";
    cin >> number;
    cout << "Decimal " << number << " = ";
    decimalToBinary(number);
    cout << " binary";
    
    return 0;
}
void decimalToBinary(int num){
    static int arr[100], counter = 0;
    if(num != 0){
		if(num % 2 == 0){
			decimalToBinary(num/2);
			cout << "0";
		} else{
			decimalToBinary(num/2);
			cout << "1";
		}
		counter++;
	}
}

