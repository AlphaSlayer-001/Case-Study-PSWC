# Case Study: Student Record Management System

## Overview

This repository contains the source code for a case study project focusing on a system for managing student records and grades, particularly in the context of the PWSC course. The project now reads data from a file called `data.csv` and stores it in an array of structs. It provides options to add or remove students and finally overwrite the data file with the updated information.

## Features

- **Add New Student**: Allows users to add new student records, including name, roll number, and marks for various assessments.
- **Remove Student**: Enables users to remove existing student records based on their roll number.
- **Update Marks**: Allows users to update the marks of existing students for different assessments.
- **Print Grade Card**: Displays the grade card of a student based on their roll number.
- **Exit**: Allows users to exit the program.

## Technologies Used

- Language: C
- IDE: Kate
- Dependencies: None

## Getting Started

To run the program locally, follow these steps:

1. Clone the repository:
    ```
    git clone https://github.com/AlphaSlayer-001/Case-Study-PWSC.git
    ```
2. Navigate to the project directory:
    ```
    cd Case-Study-PWSC
    ```
3. Compile the source code:
    - Linux or Windows with gcc:
    ```
    make -f makefile.mk
    ```
    - Windows using mingw:
    ```
    mingw32-make -f makefile.mk
    ```
4. Run the executable:
    ```
    ./result 
    ```
5. Follow the on-screen instructions to interact with the program.

## Contributing

Contributions are welcome! If you'd like to contribute to this project, please follow these steps:

1. Fork the repository
2. Create a new branch (`git checkout -b feature/my-feature`)
3. Make your changes
4. Commit your changes (`git commit -am 'Add my feature'`)
5. Push to the branch (`git push origin feature/my-feature`)
6. Create a new Pull Request

Please ensure your pull request adheres to the repository's guidelines and coding standards.
