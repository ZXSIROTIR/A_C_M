#include <iostream>
#include <fstream>

void LoadFile(){
	std::ifstream inputFile("SLAU.txt", std::ios::binary);
	if (!inputFile) {
    	std::cout << "Error opening file!" << std::endl;
        return 1;
    }
}

int main (){
	
}
