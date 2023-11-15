#include <iostream> //This is for printing to the console
#include <unordered_set> //You can use std::set(std::set is the container class) if you include this.

int main() {
std::unordered_set<int> s; // s = {}
std::cout<< s.size() << std::endl; // outputs 0
s.insert(20); // s = {20}
s.insert(10); // s = {10, 20}
s.insert(10); // s = {10, 20}
s.insert(10);
s.insert(30);
s.insert(40);
s.insert(20);
auto it = s.find(10); // it is an iterator that points to 10
std::cout << (it != s.end()? "FOUND" : "") << std::endl; // outputs FOUND
std::cout << s.size() << std::endl;
}