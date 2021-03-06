#include <string>
#include <unordered_map>

#ifndef CPS2000_COMPILERS_ASSIGNMENT_TOKEN_H
#define CPS2000_COMPILERS_ASSIGNMENT_TOKEN_H

enum TOK{
    TOK_LETTER, TOK_DIGIT, TOK_ENDLINE, TOK_EQUALSSIGN, TOK_UNDERSCORE, TOK_WHITESPACE,
    TOK_LT, TOK_GT, TOK_EXCLM, // RELOP
    TOK_LBRACK, TOK_RBRACK, TOK_BEGIN_SCOPE, TOK_END_SCOPE, TOK_COLON, TOK_SEMICOLON, TOK_DOT, TOK_COMMA,  // Punctuation
    TOK_MULT, TOK_DIV, // Multiplicative
    TOK_ADD, TOK_MINUS, // additive
    TOK_TABLE_SIZE, //used solely for initializing table
    TOK_NOT,
    TOK_LINECOMMENT, TOK_BLOCKCOMMENT,
    TOK_NE, TOK_LE, TOK_GE, TOK_EQ,
    TOK_INTEGERLIT,
    TOK_TYPE,
    TOK_VARDECL, TOK_PRINT, TOK_RETURN, TOK_IF, TOK_ELSE, TOK_FOR, TOK_FUNCDECL, //Keywords
    TOK_ID, TOK_BOOLEANLIT, TOK_FLOATLIT,
    TOK_AND,TOK_OR,
    TOK_PARAMS, TOK_FUNCCALL, TOK_SUBEXPR,TOK_UNARY, TOK_FACTOR, TOK_TERM, TOK_SIMPEXPR, TOK_EXPR, TOK_ASSIGNMENT,
    TOK_FORMALPARAMS, TOK_STATEMENT,
    TOK_BLOCK, TOK_PROGRAM,TOK_TO_REPLACE, TOK_INVALID, TOK_LEXERROR, TOK_EOF
};

class Token{
public:
    TOK tokenType;
    int lineNumber;
    std::string name;
    float value;
    Token(TOK type,std::string name, int lineNumber);
    Token(TOK type,float value, int lineNumber);
    Token(TOK type,bool value, int lineNumber);
    ~Token();

};

const std::unordered_map<TOK,std::string> tokenToString = {
        {TOK_LETTER,"TOK_LETTER"}, {TOK_DIGIT,"TOK_DIGIT"},{TOK_ENDLINE,"TOK_ENDLINE"}, {TOK_EQUALSSIGN,"TOK_EQUALSSIGN"}, {TOK_UNDERSCORE,"TOK_UNDERSCORE"}, {TOK_WHITESPACE,"TOK_WHITESPACE"},
        {TOK_LT,"TOK_LT"}, {TOK_GT,"TOK_GT"}, {TOK_EXCLM,"TOK_EXCLM"}, // RELOP
        {TOK_LBRACK,"TOK_LBRACK"}, {TOK_RBRACK,"TOK_RBRACK"}, {TOK_BEGIN_SCOPE,"TOK_BEGIN_SCOPE"}, {TOK_END_SCOPE,"TOK_END_SCOPE"}, {TOK_COLON,"TOK_COLON"}, {TOK_SEMICOLON,"TOK_SEMICOLON"}, {TOK_DOT,"TOK_DOT"}, {TOK_COMMA,"TOK_COMMA"},  // Punctuation
        {TOK_MULT,"TOK_MULT"}, {TOK_DIV,"TOK_DIV"}, // Multiplicative
        {TOK_ADD,"TOK_ADD"}, {TOK_MINUS,"TOK_MINUS"}, // additive
        {TOK_TABLE_SIZE,"TOK_TABLE_SIZE"}, //used solely for initializing table
        {TOK_LINECOMMENT,"TOK_LINECOMMENT"}, {TOK_BLOCKCOMMENT,"TOK_BLOCKCOMMENT"},
        {TOK_NE,"TOK_NE"}, {TOK_LE,"TOK_LE"}, {TOK_GE,"TOK_GE"}, {TOK_EQ,"TOK_EQ"},
        {TOK_INTEGERLIT,"TOK_INTEGERLIT"},
        {TOK_TYPE,"TOK_TYPE"},
        {TOK_VARDECL,"TOK_VARDECL"}, {TOK_PRINT,"TOK_PRINT"}, {TOK_RETURN,"TOK_RETURN"}, {TOK_IF,"TOK_IF"}, {TOK_ELSE,"TOK_ELSE"}, {TOK_FOR,"TOK_FOR"}, {TOK_FUNCDECL,"TOK_FUNCDECL"}, //Keywords
        {TOK_ID,"TOK_ID"}, {TOK_BOOLEANLIT,"TOK_BOOLEANLIT"}, {TOK_FLOATLIT,"TOK_FLOATLIT"},
        {TOK_AND, "TOK_AND"},{TOK_OR,"TOK_OR"},{TOK_NOT,"TOK_NOT"},{TOK_EOF,"TOK_EOF"}
};

#endif //CPS2000_COMPILERS_ASSIGNMENT_TOKEN_H
