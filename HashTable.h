#ifndef HASH_TABLE_H
#define HASH_TABLE_H

class HashTable {
public:

    HashTable(const size_t& size):
        size_(size)
    {

    }

    HashTable(const HashTable& other) = delete;

    HashTable(const HashTable&& other) = delete;

    HashTable& operator=(const HashTable& other) = delete;

    HashTable& operator=(const HashTable&& other) = delete;

    ~HashTable() {

    }

private:
    size_t size_;
    unsigned char** table_;

    unsigned char hash(const char* str) {
        unsigned char h = 0;
        while (*str) {
            h += *str++;
        }
        return h;
    }

};

#endif //HASH_TABLE_H
