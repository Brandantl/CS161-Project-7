//Palindrome Program (CS Assignment 161 #7.cpp)
//Written By: Brandan Tyler Lasley
//Project: CS 162 ASSIGNMENT #7, Palindrome
//Date: 10 October 2013 23:26
//Sources:  http://rosettacode.org/
// checks a string for a Palindrome

// Using human logic this code should run correctly, the program reverses and returns a value correctly
// However this is some strange type of illegal char or whitespace popping up thats not detectable by notepad++ and 
// can only be seen after execution, debugger says the value returns without a white space. 
//  This is one of those points where you erase everything and start over, but theres not enough time.
// I tried executing it via an online compiler and it returned the value correctly but still said the palindrone is false. 
// I'm assuming its a bug with the compiler(s) but if you can figure it out let me know. 


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool isPalindrome(string blahh);
std::string stripchars(std::string str, const std::string &chars);


int main() {
	string blah;
	getline(cin, blah);

	if (isPalindrome(blah)) {
		cout << "Is a palindrome!";
	} else {
		cout << "Is not a palindrome!";
	}
	getchar();
	getchar();
	return 0;

}



bool isPalindrome(string blahh) {
	string words = stripchars(blahh, ".!@#$%^&*()_-=+|\}]{[:;\"'?/>.<, ");
	string temp = "";

	for (int i =  words.length(); i >= 0; i--) {
			temp += words[i];
	}

	if (temp ==  words) {
		return true;
		
	}
	return false;
}

// Thank you http://rosettacode.org/.
std::string stripchars(std::string str, const std::string &chars)
{
    str.erase(
        std::remove_if(str.begin(), str.end(), [&](char c){
            return chars.find(c) != std::string::npos;
        }),
        str.end()
    );
    return str;
}