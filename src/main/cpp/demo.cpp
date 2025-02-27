/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    demo.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry-point of the demo target.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include "csc232.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, Demo Target!" << std::endl;
    std::cout << "Check out this UUID: " << csc232::generate_uuid() << std::endl;
    std::cout << "And another UUID:    " << csc232::generate_uuid() << std::endl;
#if EXECUTE_PREAMBLE
    return csc232::preamble(argc, argv);
#else
    return EXIT_SUCCESS;
#endif

}

int csc232::preamble(int argc, char *argv[]) {
    // An input file to process
    std::string input_file;

    // Check to see if the user has supplied a specific input file for consumption
    if (argc > 1) {
        // It is expected as the first argument
        input_file = argv[1];
    } else {
        // Default input file
        input_file = "demo_data.txt";
    }

    // Open the file for reading
    std::ifstream data_file{input_file, std::ios::in};

    if (!data_file) {
        std::cout << "Could not open \"" << input_file << "\"" << std::endl;
        return EXIT_FAILURE;
    } else {
        std::cout << "Successfully opened \"" << input_file << "\"";

        std::cout << "... will now close this file" << std::endl;
        if (data_file.is_open()) {
            data_file.close();
        }
    }
    return EXIT_SUCCESS;
}
