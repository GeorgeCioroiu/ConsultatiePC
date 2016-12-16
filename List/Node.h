/// @author George Cioroiu

#pragma once

#include "Content.h"

typedef struct _Node {
    struct _Node *nextNode;
    Content content;
} Node;

/// read a node from file
/// @param inputFile      -> file that will be used to read from (can be stdin)
/// @param adressNode -> adress of the node that will be created then will be written
void scanNode(FILE *inputFile, Node **adressNode);

/// print a node to file
/// @param outputFile -> file that will be used to write in (can be stdout)
/// @param node          -> node that will be printed
void printNode(FILE *outputFile, Node *node);

/// create a node from content
/// @param adressNode -> adress of the new node
/// @param content        -> content which will be put in node
void createNodeFromContent(Node **adressNode, Content content);
