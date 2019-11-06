# Splay-Tree
A Splay tree implementation in C++. It uses bottom up approach for the splay operation.

The following public methods are available:

 -> SplayTree() : default constructor
 
 -> void inOrderPrintKeys() const  : prints the keys of all nodes of Splay tree in inorder fashion.
 
 -> void levelOrderPrintKeys() const  : prints the keys of all nodes of splay tree in level order fashion.

-> void insert(k const key, v const value) : inserts the given <key, value> pair by creating a new node. If the key already exists, the value is overwritten. The splay operation is then applied to shift the node containing this <key, value> pair to the root.

-> 	void deleteKey(k const key)  : deletes the node containing the key. Splay operation is then applied on the last accessed node.

-> 	v const* search(k const key) : searches the splay tree for the given key. If the key is found, then a pointer to the value of the node containing the key is returned. Splay operation is also applied on this node. If the key is not found, the splay operation is applied on the last accessed node.

-> 	void deleteAll() : deletes all the nodes of the splay tree.

-> ~SplayTree() :  destructor.

The above public methods make use of other private recursive member methods.
