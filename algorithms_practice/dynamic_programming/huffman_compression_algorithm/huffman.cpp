//
// Created by ahmed on 12/21/19.
//
#include <iostream>
#include <vector>
#include <queue>
#include <bitset>
#include "Node.h"
#include "huffman.h"
#include "algorithm"

using namespace std;

map<char, string> codes;
map<char, int> frequencies;
//vector<pair<char,string>> codes_vector;

struct compare{
    bool operator()(Node* a, Node* b){
        return a->frequency > b->frequency;
    }
};

struct codes_compare{
    bool operator()(pair<char, string> a, pair<char, string> b){
        return a.second.length() < b.second.length();
    }
};

//void rearrange_codes(){
//    vector<pair<char,string>> codes_copy(codes.begin(), codes.end());
//    sort(codes_copy.begin(), codes_copy.end(), codes_compare());
//    codes_vector = codes_copy;
//}

void create_codes(Node* root, const string& code){
    if(root){
        if(root->data != '&'){
            codes[root->data] = code;
//            cout << root->data << ": " << bitset<8>(root->data).to_string() << " >>>>>> " << code << endl;
        }
        create_codes(root->left, code + '0');
        create_codes(root->right, code + '1');
    }
}
string decode(const string& encoded_text){
    string decoded_text, temp;
    for(char c : encoded_text){
        temp += c;
        for(const auto& i : codes){
            if(temp == i.second){
                decoded_text += i.first;
                temp = "";
                break;
            }
        }
    }
    return decoded_text;
}

void huffman_coding(){
    Node* left, *right, *parent;
    priority_queue<Node*, vector<Node*>, compare> p_queue;

    for (auto item : frequencies) {
        p_queue.push(new Node(item.first, item.second));
    }

    while(p_queue.size() != 1){
        left = p_queue.top(); p_queue.pop();
        right = p_queue.top(); p_queue.pop();
        parent = new Node('&', left->frequency + right->frequency);
        parent->left = left; parent->right = right;
        p_queue.push(parent);
    }
    Node* root = p_queue.top(); p_queue.pop();
    create_codes(root, "");
}

//void canonical_form(){
//    for (int i=0; i < codes_vector.size(); i++){
//        if( i != 0){
//            if(codes_vector[i].second.size() != codes_vector[i-1].second.size()){
//                codes[codes_vector[i].first] = codes[codes_vector[i-1].first];
//                codes[codes_vector[i].first] = codes[codes_vector[i].first].insert (0,"1");
//            }else{
//                string str = "";
//                codes[codes_vector[i].first] = str.insert(0, codes[codes_vector[i-1].first].size(), '1');
//            }
//        }else{
//            string str  = "";
//            codes[codes_vector[i].first] = str.insert(0, codes[codes_vector[i].first].size(), '0');;
//        }
//    }
//}

string add_table(string encoded){
    string before_encoded = "";
    int padding = 8 - encoded.length() % 8;
    before_encoded = before_encoded + bitset<8>(padding).to_string();
    before_encoded = before_encoded + bitset<8>(frequencies.size()).to_string();
    for (auto item: frequencies) {
        before_encoded = before_encoded + bitset<8>(item.first).to_string();
        before_encoded = before_encoded +  bitset<24>(item.second).to_string();
    }
    encoded.insert(0, before_encoded);
    encoded = encoded + string(padding, '1');
    return encoded;
}

string generate_encoded_text(string text){
    string temp;
    for(auto c : text){
        temp += codes[c];
    }
    return temp;
}

