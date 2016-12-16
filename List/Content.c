/// @author George Cioroiu

#include "Content.h"

void scanContent(FILE *inputFile, Content *adressContent) {
    fscanf(inputFile, "%d", &((*adressContent).number));
}

void printContent(FILE *outputFile, Content content) {
    fprintf(outputFile, "%d ", content.number);
}

int compareContents(Content content1, Content content2) {
    if (content1.number < content2.number) {
        return 1;
    } else if (content1.number == content2.number) {
        return 0;
    } else {
        return -1;
    }
}
