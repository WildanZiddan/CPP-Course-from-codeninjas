//std:: namespace, is the part of C++ Standard Library.
#include <iostream> //This is for printing to the console
#include <vector>//You can use std::vector(std::vector is the ) if you include this.

int main() { //This is for entry point to the C++ program
    std::vector<int> v; //V is the variable name, vector is a dynamic array(like div in HTML), 
    std::cout << v.size() << std::endl; //This is for print variable was named 'v', size() is member function returns the number of elements currently in the vector. This case will output 0 because v is empty. 
    v.push_back(20);
    v.push_back(10);
    v.push_back(30);
    v.push_back(102);
    std::cout << v[3] << std::endl; // outputs 102 (since, vector is zero-indexed)
    //how to read this ⇖⇑⇗ ??
    // 20 as 0
    //10 as 1
    //30 as 2
    //102 as 3
    //Why the output is 102? because i selected index number 3 what was will prints. 
    std::cout << v.size() << std::endl; // The is will output 4 because i have 4 line print of v

    return 0; //This is end of the main function
}