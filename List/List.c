/// @author George Cioroiu

#include "List.h"

int getListLength(Node *currentNode) {
    int length = 0;
    while (currentNode != NULL) {
        length++;
        currentNode = currentNode->nextNode;
    }
    return length;
}

int isListEmpty(Node *head) {
    return (head == NULL);
}

void createList(FILE *inputFile, Node **adressHead) {
    int numberOfElements;
    fscanf(inputFile, "%d", &numberOfElements);

    scanNode(inputFile, adressHead);
    Node *previousNode = *adressHead;

    while (numberOfElements > 1) {
        Node *currentNode;
        scanNode(inputFile, &currentNode);
        previousNode->nextNode = currentNode;
        previousNode = currentNode;

        numberOfElements--;
    }
}

void printList(FILE *outputFile, Node *currentNode) {
    int i = getListLength(currentNode);
    fprintf(outputFile, "%d\n",  i);
    while (currentNode != NULL) {
        printNode(outputFile, currentNode);
        currentNode = currentNode->nextNode;
    }
}

void readListFromFile(char *nameFile, Node **adressHead) {
    if (strcmp(nameFile, constStdin) == 0) {
        createList(stdin, adressHead);
    }  else {
        FILE *inputFile = fopen(nameFile, "rt");
        createList(inputFile, adressHead);
        fclose(inputFile);
    }
}

void printListToFile(char *nameFile, Node *head) {
    if (strcmp(nameFile, constStdout) == 0) {
        printList(stdout, head);
    }  else {
        FILE *outputFile = fopen(nameFile, "wt");
        printList(outputFile, head);
        fclose(outputFile);
    }
}

void removeNodeFromList(Node **adressNode, Node **adressHead) {
    if (isListEmpty(*adressHead)) {
        return;
    }

    if ((*adressHead) == (*adressNode)) {
        Node *auxNode = (*adressHead)->nextNode;
        free(*adressHead);
        (*adressHead) = auxNode;
        return;
    }

    Node *previousNode = findPreviousNodeInList((*adressHead), (*adressNode));

    previousNode->nextNode = (*adressNode)->nextNode;
    free(*adressNode);
    (*adressNode) = previousNode->nextNode;
}

void removeNodesFromListWithCondition(Node **adressHead, int (*conditionToRemove)(Node *)) {
    while ((*adressHead != NULL) && conditionToRemove(*adressHead)) {
        removeNodeFromList(adressHead, adressHead);
    }

    if (isListEmpty(*adressHead)) {
        return;
    }

    Node *currentNode = (*adressHead)->nextNode;
    while (currentNode != NULL) {
        if (conditionToRemove(currentNode)) {
            removeNodeFromList(&currentNode, adressHead);
        } else {
            currentNode = currentNode->nextNode;
        }
    }
}

void insertNodeInListAfterNode(Node *nodeToBeAdded, Node *currentNode, Node *head) {
    nodeToBeAdded->nextNode = currentNode->nextNode;
    currentNode->nextNode = nodeToBeAdded;
}

void insertNodeInListBeforeNode(Node *nodeToBeAdded, Node *currentNode, Node **adressHead) {
    Node *previousNode = findPreviousNodeInList((*adressHead), currentNode);

    if (previousNode == NULL) {
        nodeToBeAdded->nextNode = (*adressHead);
        (*adressHead) = nodeToBeAdded;
        return;
    }

    nodeToBeAdded->nextNode = previousNode->nextNode;
    previousNode->nextNode = nodeToBeAdded;
}

void insertNodeInListAfterContent(Node *nodeToBeAdded, Content content, Node *head) {
    Node *currentNode = findNodeInListByContent(head, content);

    if (currentNode == NULL) {
        return;
    }

    insertNodeInListAfterNode(nodeToBeAdded, currentNode, head);
}

void insertNodeInListBeforeContent(Node *nodeToBeAdded, Content content, Node **adressHead) {
    Node *currentNode = findNodeInListByContent(*adressHead, content);

    if (currentNode == NULL) {
        return;
    }

    insertNodeInListBeforeNode(nodeToBeAdded, currentNode, adressHead);
}

Node *findNodeInListByContent(Node *startingNode, Content content) {
    while (startingNode != NULL) {
        if (compareContents(startingNode->content, content) == 0) {
            return startingNode;
        }
        startingNode = startingNode->nextNode;
    }

    return NULL;
}

Node *findPreviousNodeInList(Node *startingNode, Node *currentNode) {
    if (startingNode == currentNode) {
        return NULL;
    }

    while (!isListEmpty(startingNode) && (startingNode->nextNode != currentNode)) {
        startingNode = startingNode->nextNode;
    }

    return startingNode;
}

Node *findNthNodeInList(Node *startingNode, int index) {
    if (index < 1) {
        return NULL;
    }

    while ((index > 1) && !isListEmpty(startingNode)) {
        index--;
        startingNode = startingNode->nextNode;
    }

    return startingNode;
}
