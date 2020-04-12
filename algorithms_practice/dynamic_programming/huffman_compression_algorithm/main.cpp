#include <iostream>
#include <cmath>
#include <fstream>
#include <bitset>
#include "huffman.h"

using namespace std;

// read input file and fill the frequencies at the same time to avoid iterating on the input text for another time to
// extract the frequencies

void read_output(){
    frequencies.clear();
    codes.clear();
    ifstream input_file("output.bin", ios::binary);
    if(input_file.is_open()){
        int count;
        char c;
        input_file.get(c);
        count = stoi(bitset<8>(c).to_string(), nullptr, 2);
        char key;
        int frequency;
        string frequency_binary = "";
        for(int i = 0; i < count; i++){
            input_file.get(c);
            key = c;
            input_file.get(c);
            frequency_binary = frequency_binary + bitset<8>(c).to_string();
            input_file.get(c);
            frequency_binary = frequency_binary + bitset<8>(c).to_string();
            input_file.get(c);
            frequency_binary = frequency_binary + bitset<8>(c).to_string();
            frequency =  stoi(frequency_binary, nullptr, 2);
            frequencies[key] = frequency;
            frequency_binary = "";
        }
    }else{
        cout << "can't open compressed file" << endl;
    }
    input_file.close();

}

void read_input(string *input_text){
    char c;
    ifstream input_file("input.txt");
    if(input_file.is_open()){
        while(input_file.get(c)){
            *(input_text) += c;
            auto it = frequencies.find(c);
            if(it != frequencies.end()){
                it->second++;
            }else{
                frequencies[c] = 1;
            }
        }
    }else{
        cout << "can't open the input file" << endl;
    }
    input_file.close();
}

void write_output(const string& encoded_text){
    ofstream output_file("output.bin", ios::binary);
    if(output_file.is_open()){
        string byte;
        for(char i : encoded_text){
            byte += i;
            if(byte.length() == 8){
                bitset<8> x(byte);
                byte = "";
                unsigned long y = x.to_ulong();
                output_file.write(reinterpret_cast<const char*> (&y), sizeof(char));
            }
        }
    }else{
        cout << "can't open output file" << endl;
    }
    output_file.close();
}



void decompress(){
    frequencies.clear();
    codes.clear();
    ifstream compressed_file("output.bin", ios::binary);
    string output;
    int padding;
    if(compressed_file.is_open()){
        int count;
        char c;
        compressed_file.get(c);
        padding = stoi(bitset<8>(c).to_string(), nullptr, 2);
        compressed_file.get(c);
        count = stoi(bitset<8>(c).to_string(), nullptr, 2);
        char key;
        int frequency;
        string frequency_binary = "";
        for(int i = 0; i < count; i++){
            compressed_file.get(c);
            key = c;
            compressed_file.get(c);
            frequency_binary = frequency_binary + bitset<8>(c).to_string();
            compressed_file.get(c);
            frequency_binary = frequency_binary + bitset<8>(c).to_string();
            compressed_file.get(c);
            frequency_binary = frequency_binary + bitset<8>(c).to_string();
            frequency =  stoi(frequency_binary, nullptr, 2);
            frequencies[key] = frequency;
            frequency_binary = "";
        }
        huffman_coding();
        while(compressed_file.get(c)){
            output += bitset<8>(c).to_string();
        }
    }else{
        cout << "can't open compressed file" << endl;
    }
    compressed_file.close();
    output = output.substr(0, output.length()- padding);
    ofstream decompressed_file("output.txt");
    if(decompressed_file.is_open()){
        decompressed_file << decode(output);
    }else{
        cout << "can't open decompressed file" << endl;
    }
    decompressed_file.close();

//    cout << "Output from compressed file: " << decode(output) << endl;
}

int main() {
    string input_text, encoded_text;
    read_input(&input_text);
    huffman_coding();
    encoded_text = generate_encoded_text(input_text);
    encoded_text = add_table(encoded_text);
    write_output(encoded_text);
    int l1 = input_text.length(), l2 = encoded_text.length(), x = ceil(l2 / 8.0);
//    cout << "Input string = " << input_text << "\t(" << l1 << " bytes)" << endl;
//    cout << "Encoded string = " << encoded_text << "\t(" << x << " bytes)" << endl;
//    cout << "Decoded string = " << decode(encoded_text) << endl;
//    cout << "Compression ratio = " << (int)((((l1 - x)* 1.0) / l1)* 100) << "%" << endl;
    decompress();
    return 0;
}