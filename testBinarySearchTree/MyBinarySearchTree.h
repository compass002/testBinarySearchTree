#ifndef __MY_BINARY_SEARCH_TREE__
#define __MY_BINARY_SEARCH_TREE__
// =============================================

// Tree Practice
#include <iostream>
#include "MyStack.h"
#include "MyQueue.h"

using namespace std;

// Traverse
// œ»–Ú pre-order
// ÷––Ú in-order
// ∫Û–Ú post-order

// tree node
template <class Data>struct BinaryTreeNode{
	Data mData;
	struct BinaryTreeNode *left;
	struct BinaryTreeNode *right;
};

template <class Data> class BinarySearchTree{
	BinaryTreeNode<Data> root;

public:
	BinarySearchTree():root(nullptr){}
	~BinarySearchTree(){}

	bool InOrderTraverse_Recursion(BinaryTreeNode<Data> *node, bool (* Visit)( Data e));
	/*bool InOrderTraverse_Stack(BinaryTreeNode<Data> *node, bool (* Visit)( Data e));*/

	bool Search()
};

template <class Data> bool BinarySearchTree<Data>::InOrderTraverse_Recursion(BinaryTreeNode<Data> *node, bool (* Visit)( Data e)){
	if(node){
		if(InOrderTraverseForBinaryTree_Recursion(node->left, Visit))
			if(Visit(node->mData))		
				if(InOrderTraverseForBinaryTree_Recursion(node->right, Visit))
					return true;
		return false;
	}else
		return true;
}
//
//template <class Data> bool BinarySearchTree<Data>::InOrderTraverse_Stack(BinaryTreeNode<Data> *node, bool (* Visit)( Data e)){
//	Stack<BinaryTreeNode *> mStack;
//	while(node||!mStack.IsEmpty()){
//		if(node){
//			if(!mStack.Push(node))
//				return false;
//			node = node->left;
//		}else{
//			BinaryTreeNode *tempNode = nullptr;
//			if(!mStack.Pop(tempNode))
//				return false;
//			if(!Visit(node->mData))
//				return false;
//			node = tempNode->right;
//		}
//	}
//	return true;
//}

// =============================================
#endif // !__MY_BINARY_SEARCH_TREE__

