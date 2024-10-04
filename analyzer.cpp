#include <iostream>
#include "StringData.h"
#include <vector>
#include <chrono>
using namespace std;

int linear_search(std::vector<std::string>& container, std::string element)
{
    for (int i = 0; i < container.size(); i++) {
        if (container[i] == element) {
            return i;
        }
    }
    return -1;

}

int binary_search(std::vector<std::string>& container, std::string element) {
    int low = 0;
    int high = container.size() -1;

    while (low <= high){
        int mid = (low + high) / 2;
        if (container[mid] == element) {
            return mid;
        }
        else if (container[mid] > element) {
            high = mid -1;
        }
        else if (container[mid] < element) {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    std::vector<std::string> data = getStringData();
    //Search for 'not_here'
    std::cout<<"Search for 'not_here'\n";

    //linear search
    auto start = std::chrono::system_clock::now();
    int index = linear_search(data, std::string("not_here"));
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> run = end - start;
    std::cout<< "Linear Search: " << run << std::endl;
    std::cout<< "Index: " << index << std::endl;

    //Binary search
    start = std::chrono::system_clock::now();
    index = binary_search(data, std::string("not_here"));
    end = std::chrono::system_clock::now();
    run = end - start;
    std::cout<< "Binary Search: " << run << std::endl;
    std::cout<< "Index: " << index << std::endl;

    //Search for 'mzzzz'
    std::cout<<"\nSearch for 'mzzzz'\n";

    //linear search
    start = std::chrono::system_clock::now();
    index = linear_search(data, std::string("mzzzz"));
    end = std::chrono::system_clock::now();
    run = end - start;
    std::cout<< "Linear Search: " << run << std::endl;
    std::cout<< "Index: " << index << std::endl;

    //Binary search
    start = std::chrono::system_clock::now();
    index = binary_search(data, std::string("mzzzz"));
    end = std::chrono::system_clock::now();
    run = end - start;
    std::cout<< "Binary Search: " << run << std::endl;
    std::cout<< "Index: " << index << std::endl;

    //Search for 'aaaaa'
    std::cout<<"\nSearch for 'aaaaa'\n";

    //linear search
    start = std::chrono::system_clock::now();
    index = linear_search(data, std::string("aaaaa"));
    end = std::chrono::system_clock::now();
    run = end - start;
    std::cout<< "Linear Search: " << run << std::endl;
    std::cout<< "Index: " << index << std::endl;

    //Binary search
    start = std::chrono::system_clock::now();
    index = binary_search(data, std::string("aaaaa"));
    end = std::chrono::system_clock::now();
    run = end - start;
    std::cout<< "Binary Search: " << run << std::endl;
    std::cout<< "Index: " << index << std::endl;



}
