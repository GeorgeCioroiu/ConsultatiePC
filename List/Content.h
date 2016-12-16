/// @author George Cioroiu

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define constStdin "stdin"
#define constStdout "stdout"

typedef struct _Content {
    int number;
} Content;

/// read a content from file
/// @param inputFile          -> file that will be used to read from (can be stdin)
/// @param adressContent -> adress of content that will be read
void scanContent(FILE *inputFile, Content *adressContent);

/// print a content to file
/// @param outputFile -> file that will be used to write in (can be stdout)
/// @param content      -> content to be printed
void printContent(FILE *outputFile, Content content);

/// return 1 if first content comes first in order
///            0 if they are equal in order
///           -1 if second content comes first in order
/// @param content1 -> first content
/// @param content2 -> second content
int compareContents(Content content1, Content content2);
