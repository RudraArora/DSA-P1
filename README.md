# Travel Planner with Route Optimization

## Overview

**Travel Planner with Route Optimization** is a console-based C++ application designed to help users efficiently plan travel routes. The application utilizes various Data Structures and Algorithms (DSA) to manage and optimize routes between destinations.

### Features

- **Add Routes**: Input new routes between destinations with specified distances or times.
- **Find Shortest Path**: Compute the shortest path between two destinations using Dijkstra's algorithm.
- **View All Routes**: Display all routes and their associated distances or times.
- **Exit**: Close the application.

### DSA Concepts Used

- **Graphs**: Represent destinations and routes using an adjacency list.
- **Priority Queue**: Used in Dijkstra's algorithm for finding the shortest path.
- **Hash Maps**: Store route information and shortest path data.
- **Sorting**: Routes are implicitly managed in priority queues and hash maps.
- **Trees**: The graph's structure resembles a tree when considering paths from the start node.

## Requirements

- C++11 or later compatible compiler

## Compilation and Execution

1. **Save the Code**: Save the code to a file named `travel_planner.cpp`.

2. **Compile the Program**: Open a terminal and navigate to the directory containing `travel_planner.cpp`. Then compile the program using:

    ```bash
    g++ -std=c++11 -o travel_planner travel_planner.cpp
    ```

3. **Run the Executable**: Execute the compiled program with:

    ```bash
    ./travel_planner
    ```

## Usage

### Menu Options

1. **Add Route**:
   - Enter the source destination, destination, and weight (distance or time).
   - Example:
     ```plaintext
     Enter your choice: 1
     Enter source: A
     Enter destination: B
     Enter weight (distance/time): 10
     Route added!
     ```

2. **Find Shortest Path**:
   - Specify the start and end destinations to find the shortest path using Dijkstra's algorithm.
   - Example:
     ```plaintext
     Enter your choice: 2
     Enter start destination: A
     Enter end destination: C
     Shortest path from A to C is: A B C 
     ```

3. **View All Routes**:
   - Displays all routes from each destination along with their distances or times.
   - Example:
     ```plaintext
     Enter your choice: 3
     Routes from A:
       To B with distance/time 10
       To C with distance/time 30
     Routes from B:
       To A with distance/time 10
       To C with distance/time 15
     ```

4. **Exit**:
   - Close the application.
   - Example:
     ```plaintext
     Enter your choice: 4
     Exiting...
     ```
