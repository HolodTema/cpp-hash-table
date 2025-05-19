#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <iostream>
#include "DictionaryList.h"

class HashTable {
public:

    HashTable(const size_t& size):
        size_(size)
    {
        table_ = new DictionaryList<char*>[size];
    }

    HashTable(const HashTable& other) = delete;

    HashTable(const HashTable&& other) = delete;

    HashTable& operator=(const HashTable& other) = delete;

    HashTable& operator=(const HashTable&& other) = delete;

    ~HashTable() {
        delete[] table_;
        table_ = nullptr;
    }

    bool insert(char* key);

    bool remove(char* key);

    void printCollisions(std::ostream& os, const unsigned int& hashValue) const;

    void printCollisions(std::ostream& os) const;

    unsigned int hash(const char* str) const;

    friend std::ostream& operator<<(std::ostream& os, const HashTable& hashTable);

private:
    size_t size_;
    DictionaryList<char*>* table_;

};

#endif //HASH_TABLE_H
