#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Token types
typedef enum {
    IDENTIFIER,
    NUMBER,
    PLUS,
    MINUS,
    MULTIPLY,
    DIVIDE,
    ASSIGN,
    INVALID
} TokenType;

// Token structure
typedef struct {
    TokenType type;
    char lexeme[100];
} Token;

// Lexical analyzer function
void lexer(const char* statement, Token* tokens, int* tokenCount) {
    *tokenCount = 0;
    int statementLength = strlen(statement);
    int i = 0;

    while (i < statementLength) {
        // Skip whitespace
        while (isspace(statement[i])) {
            i++;
        }

        if (statement[i] == '\0') {
            break;
        }

        // Check for single-character tokens
        if (statement[i] == '+') {
            tokens[*tokenCount].type = PLUS;
            strncpy(tokens[*tokenCount].lexeme, "+", sizeof(tokens[*tokenCount].lexeme));
            (*tokenCount)++;
            i++;
        } else if (statement[i] == '-') {
            tokens[*tokenCount].type = MINUS;
            strncpy(tokens[*tokenCount].lexeme, "-", sizeof(tokens[*tokenCount].lexeme));
            (*tokenCount)++;
            i++;
        } else if (statement[i] == '*') {
            tokens[*tokenCount].type = MULTIPLY;
            strncpy(tokens[*tokenCount].lexeme, "*", sizeof(tokens[*tokenCount].lexeme));
            (*tokenCount)++;
            i++;
        } else if (statement[i] == '/') {
            tokens[*tokenCount].type = DIVIDE;
            strncpy(tokens[*tokenCount].lexeme, "/", sizeof(tokens[*tokenCount].lexeme));
            (*tokenCount)++;
            i++;
        } else if (statement[i] == '=') {
            tokens[*tokenCount].type = ASSIGN;
            strncpy(tokens[*tokenCount].lexeme, "=", sizeof(tokens[*tokenCount].lexeme));
            (*tokenCount)++;
            i++;
        }
        // Check for identifiers and numbers
        else if (isalpha(statement[i]) || statement[i] == '_') {
            int j = 0;
            while (isalnum(statement[i]) || statement[i] == '_') {
                tokens[*tokenCount].lexeme[j++] = statement[i++];
            }
            tokens[*tokenCount].lexeme[j] = '\0';
            tokens[*tokenCount].type = IDENTIFIER;
            (*tokenCount)++;
        } else if (isdigit(statement[i])) {
            int j = 0;
            while (isdigit(statement[i])) {
                tokens[*tokenCount].lexeme[j++] = statement[i++];
            }
            if (statement[i] == '.') {
                tokens[*tokenCount].lexeme[j++] = statement[i++];
                while (isdigit(statement[i])) {
                    tokens[*tokenCount].lexeme[j++] = statement[i++];
                }
            }
            tokens[*tokenCount].lexeme[j] = '\0';
            tokens[*tokenCount].type = NUMBER;
            (*tokenCount)++;
        }
        // Invalid character
        else {
            tokens[*tokenCount].type = INVALID;
            strncpy(tokens[*tokenCount].lexeme, &statement[i], sizeof(tokens[*tokenCount].lexeme));
            (*tokenCount)++;
            i++;
        }
    }
}

int main() {
    // Linear array of input statements
    const char* input_statements[] = {
        "x = 10",
        "y = x + 5",
        "result = y * 2.5",
    };

    const int statementCount = sizeof(input_statements) / sizeof(input_statements[0]);

    // Process each input statement
    for (int i = 0; i < statementCount; i++) {
        Token tokens[100];
        int tokenCount = 0;

        lexer(input_statements[i], tokens, &tokenCount);

        // Print the tokens
        printf("Tokens for statement: %s\n", input_statements[i]);
        for (int j = 0; j < tokenCount; j++) {
            printf("Type: %d, Lexeme: %s\n", tokens[j].type, tokens[j].lexeme);
        }
        printf("\n");
    }

    return 0;
}

