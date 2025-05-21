🚗 Car Rental Management System (Admin Only)
A console-based Car Rental Management System developed in C language, designed specifically for administrators to manage vehicle data efficiently.
It supports all core CRUD operations, vehicle search, and sorting functionality using a linked list data structure.



📌 Features

➕ Add a new car to the system

📝 Update existing car details

🗑️ Delete a car from the system

📋 Display all cars

🔍 Search for a car

🧮 Sort the car list by various criteria

📂 Data stored in memory using linked lists : so basically i create my own database system and schemas using Linked List Data structure 

💡 Simple console UI with interactive menu

🖥️ Built using basic standard libraries – no external dependencies



🛠️ Technologies & Tools

Language: C

Data Structure: Singly Linked List

IDE: Code::Blocks / Dev-C++ / VS Code / any C-supported IDE

Libraries Used:
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>



📁 Project Structure
perl
Copier
Modifier

car-rental-system/
├── main.c         # Main source file
├── car.h          # Header file (if modularized)
├── README.md      # Project documentation




⚙️ How to Run
1Clone or Download the repository

2Open the project in your preferred C IDE

3Compile and run main.c



🧠 How It Works
Data is stored and manipulated using linked lists in memory.

Each car contains attributes like ID, brand, model, year, price, availability, etc. (adjust based on what you implemented).

A menu-driven interface allows the admin to navigate through different features using keyboard inputs.

📸 Sample Menu (Example)
========== CAR RENTAL MANAGEMENT ==========
1. Add New Car
2. Display All Cars
3. Update Car Info
4. Delete Car
5. Search Car
6. Sort Cars
7. Exit
Enter your choice:



🚀 Future Improvements 
Store data in files for persistence

Add a login system for admin access

Improve UI with better formatting/colors

Add filtering and advanced sorting (e.g., by price, year)

Cross-platform support (Linux)

📄 License
This project is open-source and available under the MIT License.

