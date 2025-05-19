#include <iostream>
#include "HashTable.h"

void testTableCreation() {
    std::cout << "###############\n";
    std::cout << "Test table creation\n";
    std::cout << "Table:\n";
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
    std::cout << "\n";

    std::cout << "Insert world\n";
    isInserted = table.insert("world");
    std::cout << table;
    std::cout << "isInserted = " << isInserted << '\n';
    std::cout << "\n";

    std::cout << "Insert apple:\n";
    isInserted = table.insert("apple");
    std::cout << table;
    std::cout << "isInserted = " << isInserted << '\n';
    std::cout << "\n";

    std::cout << "Insert hello:\n";
    isInserted = table.insert("hello");
    std::cout << table;
    std::cout << "isInserted = " << isInserted << '\n';

    std::cout << "###############\n";
}

void testInsertDuplicates() {
    std::cout << "###############\n";

    std::cout << "Test insert duplicates\n";
    HashTable table(10);

    std::cout << "Insert yellow:\n";
    bool isInserted = table.insert("yellow");
    std::cout << table;
    std::cout << "isInserted = " << isInserted << '\n';
    std::cout << "\n";

    std::cout << "Insert white\n";
    isInserted = table.insert("white");
    std::cout << table;
    std::cout << "isInserted = " << isInserted << '\n';
    std::cout << "\n";

    std::cout << "Insert black:\n";
    isInserted = table.insert("black");
    std::cout << table;
    std::cout << "isInserted = " << isInserted << '\n';
    std::cout << "\n";

    std::cout << "Insert white:\n";
    isInserted = table.insert("white");
    std::cout << table;
    std::cout << "isInserted = " << isInserted << '\n';
    std::cout << "\n";

    std::cout << "Insert yellow:\n";
    isInserted = table.insert("yellow");
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

void testRemoveDuplicates() {
    std::cout << "###############\n";
    std::cout << "Test remove duplicates\n";
    HashTable table(10);
    table.insert("cow");
    table.insert("cat");
    table.insert("dog");
    table.insert("bear");
    std::cout << "Created table with keys inside:\n";
    std::cout << table;
    std::cout << "\n";

    std::cout << "Remove cow\n";
    bool isRemoved = table.remove("cow");
    std::cout << table;
    std::cout << "isRemoved = " << isRemoved << '\n';
    std::cout << "\n";

    std::cout << "Remove dog\n";
    isRemoved = table.remove("dog");
    std::cout << table;
    std::cout << "isRemoved = " << isRemoved << '\n';
    std::cout << "\n";

    std::cout << "Remove cow\n";
    isRemoved = table.remove("cow");
    std::cout << table;
    std::cout << "isRemoved = " << isRemoved << '\n';
    std::cout << "\n";

    std::cout << "Remove dog\n";
    isRemoved = table.remove("dog");
    std::cout << table;
    std::cout << "isRemoved = " << isRemoved << '\n';
    std::cout << "\n";
    std::cout << "###############\n";
}

void testPrintAllCollisions() {
    std::cout << "###############\n";
    std::cout << "Test print collisions\n";
    HashTable table(3);
    table.insert("Moscow");
    table.insert("London");
    table.insert("Madrid");
    table.insert("Berlin");
    std::cout << "Created table with size = 3:\n";
    std::cout << table;
    std::cout << "Moscow hash: " << table.hash("Moscow") << "\n";
    std::cout << "London hash: " << table.hash("London") << "\n";
    std::cout << "Madrid hash: " << table.hash("Madrid") << "\n";
    std::cout << "Berlin hash: " << table.hash("Berlin") << "\n";
    std::cout << "\n";
    std::cout << "Collision: Moscow and Madrid\n";
    std::cout << "\n";
    std::cout << "Call printCollisions():\n";
    table.printCollisions(std::cout);
    std::cout << "###############\n";
}

void testPrintCertainCollisions() {
    std::cout << "###############\n";
    std::cout << "Test print collisions with certain hash\n";
    HashTable table(3);
    table.insert("Moscow");
    table.insert("London");
    table.insert("Madrid");
    table.insert("Berlin");
    table.insert("Roma");
    table.insert("Paris");
    std::cout << "Created table with size = 3:\n";
    std::cout << table;
    std::cout << "Moscow hash: " << table.hash("Moscow") << "\n";
    std::cout << "London hash: " << table.hash("London") << "\n";
    std::cout << "Madrid hash: " << table.hash("Madrid") << "\n";
    std::cout << "Berlin hash: " << table.hash("Berlin") << "\n";
    std::cout << "Roma hash: " << table.hash("Roma") << "\n";
    std::cout << "Paris hash: " << table.hash("Paris") << "\n";

    std::cout << "\n";
    std::cout << "Collision: Moscow and Madrid. hash = 2\n";
    std::cout << "Collision: Berlin and Paris. hash = 1\n";
    std::cout << "Collision: London and Roma. hash = 0\n";

    std::cout << "\n";
    std::cout << "Call printCollisions(2):\n";
    table.printCollisions(std::cout, 2);
    std::cout << "Call printCollisions(1):\n";
    table.printCollisions(std::cout, 1);
    std::cout << "Call printCollisions(0):\n";
    table.printCollisions(std::cout, 0);
    std::cout << "###############\n";
}

void myTests() {
    testTableCreation();
    testInsert();
    testInsertDuplicates();
    testInsertCollision();
    testRemove();
    testRemoveDuplicates();
    testPrintAllCollisions();
    testPrintCertainCollisions();
}

int main() {
    myTests();

    return 0;
}
