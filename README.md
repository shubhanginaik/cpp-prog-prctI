# Explanation

### Creating a binary tree

### 10

### / \

### 4 6

## 1. TreeNode Struct:

This struct defines a node of a binary tree, with a value and pointers to left and right children.
The constructor initializes the node with a given value and sets the children to nullptr.

## 2. isRootEqualSumOfChildren Function:

The function checks if the root is nullptr (i.e., the tree is empty) and returns false if it is.
It retrieves the values of the left and right children, defaulting to 0 if they don't exist.
It then compares the root's value to the sum of its children's values and returns true if they are equal and false otherwise.

## 3. Example Usage:

A binary tree is created with the root value 10 and children values 4 and 6.
The function isRootEqualSumOfChildren is called to check if the root's value equals the sum of its children.
The tree is then modified to make the condition false and the check is performed again.
Finally, the allocated memory for the tree nodes is cleaned up to avoid memory leaks.
