#include <iostream>
#include "HashTable.h"

void testTableCreation() {
    std::cout << "###############\n";
    std::cout << "Test table creation\n";
    HashTable table(10);
    std::cout << table;
    std::cout << "Put values into table:\n";
    table.insert("hello");
    table.insert("world");
    std::cout << table;
    std::cout << "###############\n";
}

void testInsert() {
    std::cout << "###############\n";

    std::cout << "Test insert\n";
    HashTable table(10);

    std::cout << "Insert hello:\n";
    bool isInserted = table.insert("hello");
    std::cout << table;
    std::cout << "isInserted = " << isInserted << '\n';


    std::cout << "Insert world\n";
    isInserted = table.insert("world");
    std::cout << table;
    std::cout << "isInserted = " << isInserted << '\n';

    std::cout << "Insert apple:\n";
    isInserted = table.insert("apple");
    std::cout << table;
    std::cout << "isInserted = " << isInserted << '\n';

    std::cout << "Insert hello:\n";
    isInserted = table.insert("hello");
    std::cout << table;
    std::cout << "isInserted = " << isInserted << '\n';

    std::cout << "###############\n";
}

void testInsertCollision() {
    std::cout << "###############\n";

    std::cout << "Test insert collision\n";
    std::cout << "Create table with size = 3\n";
    HashTable table(3);

    std::cout << "Insert hello:\n";
    table.insert("hello");
    std::cout << table;


    std::cout << "Insert world\n";
    table.insert("world");
    std::cout << table;

    std::cout << "Insert apple:\n";
    table.insert("apple");
    std::cout << table;

    std::cout << "Insert banana:\n";
    table.insert("banana");
    std::cout << table;

    std::cout << "Collisions:\n";
    table.printCollisions(std::cout);

    std::cout << "###############\n";
}

void testRemove() {
    std::cout << "###############\n";
    std::cout << "Test remove\n";
    HashTable table(10);
    table.insert("Moscow");
    table.insert("London");
    table.insert("Madrid");
    table.insert("Berlin");
    table.insert("Paris");
    table.insert("Oslo");
    std::cout << "Created table with keys inside:\n";
    std::cout << table;
    std::cout << "\n";

    std::cout << "Remove Moscow\n";
    bool isRemoved = table.remove("Moscow");
    std::cout << table;
    std::cout << "isRemoved = " << isRemoved << '\n';
    std::cout << "\n";

    std::cout << "Remove Berlin\n";
    isRemoved = table.remove("Berlin");
    std::cout << table;
    std::cout << "isRemoved = " << isRemoved << '\n';
    std::cout << "\n";

    std::cout << "Remove Moscow\n";
    isRemoved = table.remove("Moscow");
    std::cout << table;
    std::cout << "isRemoved = " << isRemoved << '\n';
    std::cout << "\n";

    std::cout << "Remove Paris\n";
    isRemoved = table.remove("Paris");
    std::cout << table;
    std::cout << "isRemoved = " << isRemoved << '\n';
    std::cout << "\n";

    std::cout << "Remove Oslo\n";
    isRemoved = table.remove("Oslo");
    std::cout << table;
    std::cout << "isRemoved = " << isRemoved << '\n';
    std::cout << "\n";

    std::cout << "Remove Paris\n";
    isRemoved = table.remove("Paris");
    std::cout << table;
    std::cout << "isRemoved = " << isRemoved << '\n';
    std::cout << "###############\n";
}

void myTests() {
    testTableCreation();
    testInsert();
    testInsertCollision();
    testRemove();
}

int main() {
    myTests();
}
