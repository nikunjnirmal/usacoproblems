#include <cstdio>
#include <iostream>
#include <string>


int main() {
    int n;
    std::string str;
    std::cin >> n; 
    
    if (n < 1 || n > 100) {
        std::cerr << "Error: n must be between 1 and 100." << std::endl;
        return 1;
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> str;
        if (str.length() < 1 || str.length() > 100) {
            std::cerr << "Error: String length must be between 1 and 100." << std::endl;
            return 1;
        }
        std::cout << "Input string: " << str << std::endl;
    } 

    for (int i = 0; i < str.length(); ++i) {
        workingStr = str.substr(0, i + 1);
        for (int j = i + 1; j < str.length(); ++j) {
            // Add your processing logic here
        }
    }

    return 0;
}   

void tempfunc()
{
 int cownum, attrnum;
 std::vector<std::vector<char>> inputmatrix;
 std::vector<std::vector<char>> verticalmatrix;
    // Function implementation
    matrix.resize(cownum, std::vector<char>(attrnum));
    for (int i = 0; i < cownum; ++i) {
        std::cin>>row;
        for (int j = 0; j < attrnum; ++j) {
            // Initialize matrix elements
        }
    }
}
