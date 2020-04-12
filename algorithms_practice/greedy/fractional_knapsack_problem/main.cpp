#include <iostream>
#include <algorithm>
using namespace std;

class Item{
    public:
        int value, weight;
    Item(int value, int weight): value(value), weight(weight){}
};

bool compare(Item a, Item b){
    return (a.value / a.weight) > (b.value / b.weight);
}

double fractional_knapsack(int size, int w, Item array[]){
    int current_weight = 0;
    double max_sum = 0;
    sort(array, array + size, compare);
    for (int i = 0; i < size; ++i) {
        if(current_weight + array[i].weight <= w){
            max_sum += array[i].value;
            current_weight += array[i].weight;
        }else{
            max_sum += array[i].value * ((double)(w - current_weight) / array[i].weight);
        }
    }
    return max_sum;
}

int main() {
    Item array[] = {{60,10}, {100,20}, {120,30}};
    int size = sizeof(array) / sizeof(Item), w = 50;
    cout << "Maximum value in knapsack = " << fractional_knapsack(size, w, array) << endl;
    return 0;
}