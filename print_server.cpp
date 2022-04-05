/*
//Class implementing print server in C++
//Version 1.0
Consists
a. Program template 
Author: Daniel Olkowski / Olimpijskie Kolo Informatyczne
What is OKI? https://youtu.be/5sM88CcBGd4
*/
 
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class mqueue {
public:
 mqueue() { 
    first = last = -1;
 } 

 bool empty() {
    if (first == -1 ) 
        return true; 
    return false; 
 }	

 void push(int value) {
    if (  empty() == true ) {
       elements.push_back(value);
	   first = last = 0;
	   return;
    }
    elements.push_back(value);
    ++last;
 }	

 int dequeue() {
   int value = -5;
   if ( empty() ) {
      return value;
   }
   if ( first == last) {
      value = elements[first];
      first = last = -1;
	   elements.clear();
	  return value;
   }
   value = elements[first];
   ++first;
   return value;
 }

private:
 vector<int> elements;
 int first, last;
};	

int main() {

 return 0;
} 