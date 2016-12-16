/// @author George Cioroiu

#include "Node.h"
#include "ProgramFaults.h"

void scanNode(FILE *inputFile, Node **adressNode) {
    (*adressNode) = (Node *)malloc(sizeof(Node));
    checkMemoryAllocation((void *)(*adressNode));
    scanContent(inputFile, &((*adressNode)->content));
    (*adressNode)->nextNode = NULL;
}

void printNode(FILE *outputFile, Node *node) {
    printContent(outputFile, node->content);
}

void createNodeFromContent(Node **adressNode, Content content) {
    (*adressNode) = (Node *)malloc(sizeof(Node));
    checkMemoryAllocation((void *)(*adressNode));
    (*adressNode)->content = content;
    (*adressNode)->nextNode = NULL;
}



