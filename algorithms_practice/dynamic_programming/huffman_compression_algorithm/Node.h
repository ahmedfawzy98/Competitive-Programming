//
// Created by ahmed on 11/20/19.
//

#ifndef HUFFMAN_COMPRESSION_ALGORITHM_NODE_H
#define HUFFMAN_COMPRESSION_ALGORITHM_NODE_H


class Node{
public:
    Node *left,  *right;
    unsigned frequency;
    char data;
    Node(char data, unsigned freq);
};


#endif //HUFFMAN_COMPRESSION_ALGORITHM_NODE_H
