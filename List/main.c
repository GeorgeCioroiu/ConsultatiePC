/// @author George Cioroiu

#include "List.h"
#include "Functions.h"

int main() {
    Node *head;
    char inputFileName[50], outputFileName[50];
    gets(inputFileName);
    gets(outputFileName);
    readListFromFile(inputFileName, &head);
    ///printList(stdout, head);
    printListToFile(outputFileName, head);
    return 0;
}
