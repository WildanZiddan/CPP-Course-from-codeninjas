#include <iostream> //This is for printing to the console
#include <set> //You can use std::set(std::set is the container class) if you include this.

int main() { //This is for entry point to the C++ program
    std::set<int> s; //S is the variable name, the function is automatically sorted in ascending order.
    std::cout << s.size() << std::endl; //This is for print variable was named 's', size() is member function returns the number of elements currently in the vector. This case will output 0 because s is empty. 
    s.insert(20);
    s.insert(40);
    s.insert(30);
    s.insert(40);
    s.insert(40);
    auto it = s.find(40); //This line used "find" to search for the value '40'
    std::cout << (it != s.end() ? "FOUND" : "") << std::endl; // outputs FOUND
    std::cout << s.size() << std::endl; // outputs 3
    //how to read this ⇖⇑⇗ ??
    //20 = 1 number
    //40 = 3 in 1 number
    //30 = 1 number
    //40 = 3 in 1 number
    //40 = 3 in 1 number
    //Why the output is 3? because i have 3 number(20, 30, and 40(this will readed as 1 number because there's 3 same characters)) what was will prints. 

    return 0; //This is end of the main function
}
