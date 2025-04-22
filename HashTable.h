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

    bool insert(char* key) {
        const bool isInserted = table_[hash(key)].insert(key);
        return isInserted;
    }

    bool remove(char* key) {
        const bool isRemoved = table_[hash(key)].remove(key);
        return isRemoved;
    }

    void printCollisions(std::ostream& os, const unsigned int& hashValue) const {
        os << table_[hashValue] << '\n';
    }

    void printCollisions(std::ostream& os) {
        for (int i = 0; i < size_; ++i) {
            if (table_[i].getSize() > 1) {
                os << "Hash value = " << i << ": ";
                os << table_[i] << '\n';
            }
        }
    }

    unsigned int hash(const char* str) const {
        unsigned int h = 0;
        while (*str) {
            h += *str++;
        }
        return h % size_;
    }

    friend std::ostream& operator<<(std::ostream& os, const HashTable& hashTable);
private:
    size_t size_;
    DictionaryList<char*>* table_;

};

std::ostream& operator<<(std::ostream& os, const HashTable& hashTable) {
    for (int i = 0; i < hashTable.size_; ++i) {
        os << hashTable.table_[i];
    }
    os << '\n';
    return os;
}

#endif //HASH_TABLE_H
