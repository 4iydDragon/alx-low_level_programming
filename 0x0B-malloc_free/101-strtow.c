#include "main.h"
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 1000

char **strtow(char *str) {
    if (str == NULL || strlen(str) == 0)
        return NULL;

    char **words = (char **) malloc(sizeof(char *) * (MAX_WORDS + 1));
    if (words == NULL)
        return NULL;

    int word_count = 0;
    int i = 0;
    while (str[i] != '\0' && word_count < MAX_WORDS) {
        while (str[i] == ' ')
            i++;
        if (str[i] == '\0')
            break;
        int start = i;
        while (str[i] != ' ' && str[i] != '\0')
            i++;
        int end = i - 1;
        int length = end - start + 1;
        char *word = (char *) malloc(sizeof(char) * (length + 1));
        if (word == NULL) {
            for (int j = 0; j < word_count; j++)
                free(words[j]);
            free(words);
            return NULL;
        }
        strncpy(word, &str[start], length);
        word[length] = '\0';
        words[word_count++] = word;
    }
    words[word_count] = NULL;

    if (word_count == 0) {
        free(words);
        return NULL;
    }

    return words;
}
