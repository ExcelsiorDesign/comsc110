#ifndef SORT_H
#define SORT_H

#include <vector>

void swap(int &a, int &b) {
    int temp = a; a = b; b = temp;
}

std::vector<int> sort( std::vector<int> xyz )
{
    // outer loop: control the sorted/unsorted region
    for(int i=0; i<xyz.size(); i++) {
        // inner loop: find and move the smallest in unsorted
        int temp, smallest = i;
        for(int j=i; j<xyz.size(); j++) {
            if(xyz[smallest] > xyz[j]) 
                smallest = j;
        }
        swap(xyz[i], xyz[smallest]);
        for(auto item:xyz) std::cout << item << " ";
        std::cout << std::endl;
    }
    return xyz;
};

#endif