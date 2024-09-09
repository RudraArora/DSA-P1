Travel Planner with Route Optimization
Overview
The Travel Planner with Route Optimization is a console-based C++ application that helps users plan travel routes efficiently. The application utilizes various Data Structures and Algorithms (DSA) concepts to manage and optimize routes between destinations.

Features
Add Routes: Add new routes between destinations with specified distances or times.
Find Shortest Path: Compute the shortest path between two destinations using Dijkstra's algorithm.
View All Routes: Display all routes and their distances or times.
Exit: Exit the application.
DSA Concepts Used
Graphs: Represent destinations and routes using an adjacency list.
Priority Queue: Used in Dijkstra's algorithm for finding the shortest path.
Hash Maps: Store the graph's adjacency list and shortest path information.
Sorting: Although not explicitly used in this example, you can sort routes based on distance or time.
Trees: The underlying structure of the graph can be thought of as a tree when considering paths from the start node.
Requirements
C++11 or later compatible compiler
Compilation and Execution
Save the code to a file named travel_planner.cpp.

Open a terminal and navigate to the directory containing travel_planner.cpp.

Compile the program using the following command:

sh
Copy code
g++ -std=c++11 -o travel_planner travel_planner.cpp
Run the compiled executable:

sh
Copy code
./travel_planner
Usage
Menu Options
Add Route:

Enter the source destination, destination, and weight (distance or time).
Example:
mathematica
Copy code
Enter your choice: 1
Enter source: A
Enter destination: B
Enter weight (distance/time): 10
Route added!
Find Shortest Path:

Enter the start and end destinations to find the shortest path using Dijkstra's algorithm.
Example:
mathematica
Copy code
Enter your choice: 2
Enter start destination: A
Enter end destination: C
Shortest path from A to C is: A B C 
View All Routes:

Display all routes from each destination along with distances or times.
Example:
sql
Copy code
Enter your choice: 3
Routes from A:
  To B with distance/time 10
  To C with distance/time 30
Routes from B:
  To A with distance/time 10
  To C with distance/time 15
Exit:

Exit the application.
Example:
mathematica
Copy code
Enter your choice: 4
Exiting...
Example
Here’s an example of how the program might be used:

Add routes:

mathematica
Copy code
Enter your choice: 1
Enter source: A
Enter destination: B
Enter weight (distance/time): 10
Route added!
mathematica
Copy code
Enter your choice: 1
Enter source: B
Enter destination: C
Enter weight (distance/time): 15
Route added!
Find the shortest path:

mathematica
Copy code
Enter your choice: 2
Enter start destination: A
Enter end destination: C
Shortest path from A to C is: A B C 
View all routes:

sql
Copy code
Enter your choice: 3
Routes from A:
  To B with distance/time 10
  To C with distance/time 30
Routes from B:
  To A with distance/time 10
  To C with distance/time 15
Contribution
Feel free to contribute to this project by submitting issues or pull requests. Suggestions for new features or improvements are always welcome!
