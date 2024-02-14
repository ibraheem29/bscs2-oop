#include <iostream>
#include <string>
#include <map>

class Food {
private:
    std::string name;
    double price;
    static std::map<std::string, int> orderCounts; // Static data member to store the number of orders for each food item

public:
    Food(const std::string& name, double price) : name(name), price(price) {
        // Initialize the order count to zero when a new food item is created
        orderCounts[name] = 0;
    }

    static void orderFood(const std::string& foodName) {
        // Static method to increment the order count for a specific food item
        if (orderCounts.find(foodName) != orderCounts.end()) {
            orderCounts[foodName]++;
        } else {
            std::cout << "Food item not found." << std::endl;
        }
    }

    static int getOrderCount(const std::string& foodName) {
        // Static method to get the number of orders for a specific food item
        if (orderCounts.find(foodName) != orderCounts.end()) {
            return orderCounts[foodName];
        } else {
            return 0; // Return 0 if the food item is not found
        }
    }
};

// Initialize the static data member
std::map<std::string, int> Food::orderCounts;

int main() {
    Food burger("Burger", 5.99);
    Food pizza("Pizza", 8.99);

    // Simulate orders
    Food::orderFood("Burger");
    Food::orderFood("Pizza");
    Food::orderFood("Burger");
    Food::orderFood("Pizza");

    // Get the number of orders for each food item
    std::cout << "Burger Orders: " << Food::getOrderCount("Burger") << std::endl;
    std::cout << "Pizza Orders: " << Food::getOrderCount("Pizza") << std::endl;

    return 0;
}

