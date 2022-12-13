/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E6.18
Creates append. 
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> append(vector<int> a, vector<int> b){
	for(int i = 0; i < b.size(); i++) {
		a.push_back(b[i]);
	}
	return a;
}

int main() {
	vector<int> a = {1, 4, 9, 1, 6};
	vector<int> b = {9,7,4,9,11};
	
	vector<int> result = append(a, b);
	for(int i = 0; i < result.size(); i++){
		cout << result[i] << " ";
	}

	return 0;
}
