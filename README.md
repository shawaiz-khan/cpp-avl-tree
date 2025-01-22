# AVL Tree in C++

## Overview
This project implements an **AVL Tree** in C++. The AVL tree is a self-balancing binary search tree where the difference between the heights of left and right subtrees cannot be more than one for all nodes. It performs automatic rotations to maintain balance.

## Features
- **Insertion** of elements while maintaining balance
- **Automatic rotations** (Left and Right) to keep the tree balanced
- **In-order Traversal** to display elements in sorted order

## How It Works
- Each node stores a key and maintains a height.
- The tree balances itself using **rotations**:
  - Right Rotation (LL Case)
  - Left Rotation (RR Case)
  - Left-Right Rotation (LR Case)
  - Right-Left Rotation (RL Case)
- **Balance Factor** is used to decide when to rotate.

## Code
### Main Functions
- `Insert`: Inserts a new key into the AVL tree.
- `RotateLeft`: Performs a left rotation.
- `RotateRight`: Performs a right rotation.
- `GetBalanceFactor`: Computes the balance factor.
- `Inorder`: Prints the elements in sorted order.


## How to Run
1. **Copy the Code** into a file (e.g., `avl_tree.cpp`).
2. **Compile** using g++:
   ```sh
   g++ avl_tree.cpp -o avl_tree
   ```
3. **Run the executable**:
   ```sh
   ./avl_tree
   ```
4. **Expected Output**:
   ```sh
   In-order Traversal: 10 20 25 30 40 50
   ```

## Applications
- **Database Indexing**: Fast lookup and insertion.
- **File Systems**: Used in B-trees and other structures.
- **Memory Allocation**: Used for balanced memory blocks.
- **Routing Algorithms**: For shortest path calculations.

## License
This project is open-source and free to use. 🚀