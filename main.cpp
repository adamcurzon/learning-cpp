#include <iostream>
using namespace std;

struct Fruit
{
    int fruitId;
    string fruitName;
};

// pass a pointer instead of array
void showAllFruits(array<Fruit> fruits)
{
    for (Fruit fruit : fruits)
    {
        cout << fruit.fruitName << "\n";
    }
}

int main()
{
    Fruit apple;
    apple.fruitId = 1;
    apple.fruitName = "apple";

    Fruit pear;
    pear.fruitId = 2;
    pear.fruitName = "pear";

    Fruit orange;
    orange.fruitId = 3;
    orange.fruitName = "orange";

    Fruit &selectedFruit = apple;
    string *ptr = &apple.fruitName;

    cout << "Selected Fruit: " << selectedFruit.fruitName << "\n";
    cout << "Selected Fruit Name Address: " << ptr << "\n";

    Fruit fruits[3] = {apple, pear, orange};
    return 0;
}