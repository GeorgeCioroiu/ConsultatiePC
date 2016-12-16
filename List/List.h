/// @author George Cioroiu

#pragma once

#include "Node.h"

int getListLength(Node *currentNode);

/// check if list is empty
/// @param head -> the head of the list
int isListEmpty(Node *head);

/// create a list from file
/// @param inputFile      -> file that will be used to read from (can be stdin)
/// @param adressHead -> adress of the head of the list
void createList(FILE *inputFile, Node **adressHead);

void readListFromFile(char *nameFile, Node **adressHead);

/// print a list to file starting from a given node
/// @param outputFile -> file that will be used to write in (can be stdout)
/// @param head          -> the head of the list that will be printed
void printList(FILE *outputFile, Node *currentNode);

void printListToFile(char *nameFile, Node *head);

/// remove a node from list
/// @param adressNode -> adress of the node which will be removed
/// @param adressHead -> adress of the head of the list
void removeNodeFromList(Node **adressNode, Node **adressHead);

/// remove all nodes that respect the given condition
/// @param adressHead              -> adress of the head of the list
/// @param conditionToRemove -> function that returns 1 if given condition is respected by a node; 0 otherwise
void removeNodesFromListWithCondition(Node **adressHead, int (*conditionToRemove)(Node *));

/// insert a given node in a list after another given node
/// @param nodeToBeAdded -> the node which will be added
/// @param currentNode        -> the node after which the new one will be added
/// @param head                     -> the head of the list
void insertNodeInListAfterNode(Node *nodeToBeAdded, Node *currentNode, Node *head);

/// insert a given node in a list before a given node
/// @param nodeToBeAdded -> the node which will be added
/// @param currentNode        -> the node after which the new one will be added
/// @param adressHead         -> adress of the head of the list
void insertNodeInListBeforeNode(Node *nodeToBeAdded, Node *currentNode, Node **adressHead);

/// insert a given node in a list after a given content
/// @param nodeToBeAdded -> the node which will be added
/// @param content                -> the content after which the new one will be added
/// @param head                     -> the head of the list
void insertNodeInListAfterContent(Node *nodeToBeAdded, Content content, Node *head);

/// insert a given node in a list before a given content
/// @param nodeToBeAdded -> the node which will be added
/// @param content                -> the content after which the new one will be added
/// @param adressHead         -> adress of the head of the list
void insertNodeInListBeforeContent(Node *nodeToBeAdded, Content content, Node **adressHead);

/// find a node in a list by a given content starting from a given node
/// @param startingNode  -> the head of the list
/// @param content           -> content of the node to be found
Node *findNodeInListByContent(Node *startingNode, Content content);

/// find the previous node of a given node in a given list
/// @param startingNode -> the head of the list
/// @param currentNode  -> next node of the node to be found
Node *findPreviousNodeInList(Node *startingNode, Node *currentNode);//

/// find a node in a list by a given index starting from a given node
/// @param startingNode -> the head of the list
/// @param index              -> index of the node to be found
Node *findNthNodeInList(Node *startingNode, int index);
