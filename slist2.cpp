#include <iostream>
#include <string>

using namespace std;

struct Product {
    string product_id;
    string product_name;
    string product_price;
    string gst;
};

Product productList[10];
int numProducts = 0;

void insertProduct() {
    if (numProducts < 10) {
        cout<<"Sr.no:";
        cout<<numProducts+1;
        cout<<endl;
        cout << "Enter product ID: ";
        cin >> productList[numProducts].product_id;
        cout << "Enter product name: ";
        cin >> productList[numProducts].product_name;
        cout << "Enter product price: ";
        cin >> productList[numProducts].product_price;
        cout << "Enter GST: ";
        cin >> productList[numProducts].gst;
        cout << "Product inserted successfully." << endl;
        numProducts++;
    } else {
        cout << "Cannot insert. Product list is full." << endl;
    }
}

void deleteProduct() {
    string id;
    cout << "Enter product ID to delete: ";
    cin >> id;
    int foundIndex = -1;
    for (int i = 0; i < numProducts; i++) {
        if (productList[i].product_id == id) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1) {
        productList[foundIndex] = productList[numProducts - 1];
        numProducts--;
        cout << "Product deleted successfully." << endl;
    }
   else {
        cout << "Product not found." << endl;
    }
}

void displayProducts() {
    cout << "Product List:" << endl;
    for (int i = 0; i < numProducts; i++) {
        cout << "Product ID: " << productList[i].product_id << endl;
        cout << "Product Name: " << productList[i].product_name << endl;
        cout << "Product Price: " << productList[i].product_price << endl;
        cout << "GST: " << productList[i].gst << endl;
        cout << "--------------------------" << endl;
    }
     if (numProducts = 0)
    {
        cout<<"List Empty"<<endl;
    }
}

int main() {
    char choice;
    do {
        cout << "1. Insert Product" << endl;
        cout << "2. Delete Product" << endl;
        cout << "3. Display Products" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case '1':
                insertProduct();
                break;
            case '2':
                deleteProduct();
                break;
            case '3':
                displayProducts();
                break;
            case '4':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '4');

    return 0;
}
