#include <iostream>
#include <string>
using namespace std;

struct Product
{
    string product_id;
    string product_name;
    string product_price;
    string gst;
    Product *next;
};

class ProductList
{
private:
    Product *head;
    int numProducts;

public:
    ProductList()
    {
        head = NULL;
        numProducts = 0;
    }

    void insertProduct()
    {
        Product *newProduct = new Product;
        cout << "Enter product ID: ";
        cin >> newProduct->product_id;
        cout << "Enter product name: ";
        cin >> newProduct->product_name;
        cout << "Enter product price: ";
        cin >> newProduct->product_price;
        cout << "Enter GST: ";
        cin >> newProduct->gst;
        newProduct->next = NULL;

        if (head == NULL)
        {
            head = newProduct;
        }
        else
        {
            Product *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newProduct;
        }
        cout << "Product inserted successfully." << endl;
        numProducts++;
    }

    void deleteProduct()
    {
        if (head == NULL)
        {
            cout << "Product List is Empty" << endl;
            return;
        }

        string id;
        cout << "Enter product ID to delete: ";
        cin >> id;

        Product *temp = head;
        Product *prev = NULL;

        while (temp != NULL && temp->product_id != id)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp != NULL)
        {
            if (prev == NULL)
            {
                head = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }
            delete temp;
            cout << "Product deleted successfully." << endl;
            numProducts--;
        }
        else
        {
            cout << "Product not found." << endl;
        }
    }

    void displayProducts()
    {
        if (head == NULL)
        {
            cout << "Product List is Empty" << endl;
            return;
        }

        cout << "Product List:" << endl;
        Product *temp = head;
        while (temp != NULL)
        {
            cout << "Product ID: " << temp->product_id << endl;
            cout << "Product Name: " << temp->product_name << endl;
            cout << "Product Price: " << temp->product_price << endl;
            cout << "GST: " << temp->gst << endl;
            cout << "--------------------------" << endl;
            temp = temp->next;
        }
    }

    ~ProductList()
    {
        Product *temp = head;
        while (temp != NULL)
        {
            Product *next = temp->next;
            delete temp;
            temp = next;
        }
        head = NULL;
    }
};

int main()
{
    ProductList productList;
    char choice;
    do
    {
        cout << "1. Insert Product" << endl;
        cout << "2. Delete Product" << endl;
        cout << "3. Display Products" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case '1':
            productList.insertProduct();
            break;
        case '2':
            productList.deleteProduct();
            break;
        case '3':
            productList.displayProducts();
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
