### Definitions 
Space complexity: The amount of memory required by an algorithm as a function of the input size (n). For example, if an algorithm pushes all n input elements onto a stack, the space complexity grows linearly — O(n). Constant space (O(1)) means the extra memory used does not grow with n (for example, using a fixed number of variables regardless of input size).
Variables that I always declare as a part of the algorithm take constant time because they are not influenced by the size of the input.

Note: "auxiliary space" refers to extra memory used by the algorithm excluding the input; "total space" includes the input storage as well.

Auxiliary space: Extra memoruy the algorithm uses in addition to input. E.g. temporary variables, stacks, queues, recursion stack, new arrays/objects that I allocate.

Examples:
1) In-place array traversal
* Auxiliary space: O(1) for index variables
* Input space O(n) the size of the array
* Total space = O(1) + O(n) = O(n)
2) Recursive depth-first traversal on a balanced binary tree of n nodes:
Auxiliary space: recursion stack O(log n) (average) or O(n) (worst-case unbalanced)
Input space: O(n) for the tree (if included)
Total space: O(n) if you count the tree, or O(log n)/O(n) auxiliary otherwise
3) Algorithm that copies the input into a new array of same size:
Auxiliary space: O(n) (the copy)
Input space: O(n)
Total space: O(n) + O(n) = O(n) (constant factors dropped; still O(n) but note the two buffers)

Total space = extra space (auxilliary) + space used to hold the input (input space)
