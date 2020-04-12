//
// Created by ahmed on 12/21/19.
//
#ifndef HUFFMAN_COMPRESSION_ALGORITHM_HUFFMAN_H
#define HUFFMAN_COMPRESSION_ALGORITHM_HUFFMAN_H

#include <iostream>
#include <map>
#include "Node.h"
#include "vector"

using namespace std;

extern map<char, string> codes;
extern map<char, int> frequencies;

void create_codes(Node* root, const string& code);
string decode(const string& encoded_text);
void huffman_coding();
void rearrange_codes();
void canonical_form();
string add_table(string encoded);
string generate_encoded_text(string text);


#endif //HUFFMAN_COMPRESSION_ALGORITHM_HUFFMAN_H
