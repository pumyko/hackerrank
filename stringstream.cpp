/*
Sample Input:
	23,4,56

Sample Output:
	23
	4
	56
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<int> parseInts(string str){
	// string via sstream into vector, sep - commas

	for(int i = 0; i < str.size(); i++){
		if(str[i] == ','){
			str[i] = ' ';
		}
	}
	stringstream ss(str);
	vector<int> numbers;
	int number;
	
	while(ss >> number){
		numbers.push_back(number);
	}

	return numbers;
}

int main(){
	string str;
	cin >> str;

	vector<int> integers = parseInts(str);

	for(int i = 0; i < integers.size(); i++){
		cout << integers[i] << "\n";
	}
	return 0;
};
