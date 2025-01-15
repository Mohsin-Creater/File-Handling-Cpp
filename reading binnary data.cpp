#include <iostream>
#include <fstream>

struct Person {
    char name[50];
    int age;
};

int main() {
    // Create a Person object
    Person p1 = {"John Doe", 30};

    // Writing binary data to a file
    std::ofstream outFile("person.dat", std::ios::binary);
    if (outFile.is_open()) {
        outFile.write(reinterpret_cast<char*>(&p1), sizeof(p1));  // Write binary data
        outFile.close();  // Close after writing
        std::cout << "Data written to file successfully." << std::endl;
    } else {
        std::cerr << "Error opening file for writing." << std::endl;
    }

    // Reading binary data from a file
    Person p2;
    std::ifstream inFile("person.dat", std::ios::binary);
    if (inFile.is_open()) {
        inFile.read(reinterpret_cast<char*>(&p2), sizeof(p2));  // Read binary data
        inFile.close();  // Close after reading
        std::cout << "Data read from file successfully:" << std::endl;
        std::cout << "Name: " << p2.name << ", Age: " << p2.age << std::endl;
    } else {
        std::cerr << "Error opening file for reading." << std::endl;
    }

    return 0;
}
