#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

using namespace std;

class Shoe
{

public:

    int shoe_size;
    int shoe_quantity;
    double shoe_price;
    string shoe_id;
    string shoe_brand;
    string shoe_model;

    Shoe(int shoe_size, int shoe_quantity, double shoe_price, string shoe_id, string shoe_brand, string shoe_model)
        : shoe_size(shoe_size), shoe_quantity(shoe_quantity), shoe_price(shoe_price), shoe_id(shoe_id), shoe_brand(shoe_brand), shoe_model(shoe_model) {}

    void add_shoe_display()
    {
        cout << "Shoe ID: " << shoe_id << endl;
        cout << "Shoe Brand: " << shoe_brand << endl;
        cout << "Shoe Model: " << shoe_model << endl;
        cout << "Shoe Size: " << shoe_size << endl;
        cout << "Shoe Price (MYR): " << shoe_price << endl;
        cout << "Store Quantity: " << shoe_quantity  << endl;
        cout << endl;
    }
};

class shoe_purchase_system
{

private:

    string filename = "shoe_purchase_system.txt";

    Shoe file_convert_shoe(const string& line)
    {
        istringstream stream(line);
        string shoe_id, shoe_brand, shoe_model;
        int shoe_size, shoe_quantity;
        double shoe_price;

        stream >> shoe_id >> shoe_brand >> shoe_model >> shoe_size >> shoe_price >> shoe_quantity;
        return Shoe(shoe_size, shoe_quantity, shoe_price, shoe_id, shoe_brand, shoe_model);
    }

public:

    void add_shoe(const Shoe& shoe)
    {
        ofstream file(filename, ios::app);

        if(file.is_open())
        {
            file << shoe.shoe_id << " " << shoe.shoe_brand << " " << shoe.shoe_model << " " << shoe.shoe_size << " " << shoe.shoe_price << " " << shoe.shoe_quantity << endl;

            cout << endl;
            cout << "Shoe added! ^o^ " << endl << endl;
        }
        else
        {
            cerr << "Error! Please try again! ~_~ " << endl << endl;
        }
        file.close();
    }

    void view_shoes()
    {
        string line;
        ifstream file(filename);

        if(file.is_open())
        {
            cout << endl;
            cout << "=== Shoe Store ===" << endl;
            cout << endl;
            while(getline(file , line))
            {
                Shoe shoe = file_convert_shoe(line);
                shoe.add_shoe_display();
            }
        }
        else
        {
            cerr << "Error! Please try again! ~_~ " << endl << endl;
        }
        file.close();
    }

    void search_shoe(const string& search_filter)
    {
        string line;
        ifstream file(filename);
        bool found = false;

        if(file.is_open())
        {
            while(getline(file , line))
            {
                Shoe shoe = file_convert_shoe(line);

                if(shoe.shoe_id == search_filter || shoe.shoe_brand == search_filter || shoe.shoe_model == search_filter)
                {
                    shoe.add_shoe_display();
                    found = true;
                }
            }
            if(!found)
            {
                cout << "No shoe match! Please try again! -_- " << endl << endl;
            }
            else
            {
                cout << "Search done! ^o^ " << endl << endl;
            }
        }
        file.close();
    }

    void edit_shoe(const string& id)
    {
        string line;
        ifstream in_file(filename);
        ofstream out_file("shoe_purchase_system_2.txt");
        bool found = false;

        if(in_file.is_open() && out_file.is_open())
        {
            while(getline(in_file , line))
            {
                Shoe shoe = file_convert_shoe(line);

                if(shoe.shoe_id == id)
                {
                    cout << "Current Details: " << endl;
                    shoe.add_shoe_display();

                    cout << "Please enter the new price for the shoe: ";
                    cin >> shoe.shoe_price;

                    cout << "Please enter the new quantity for the shoe: ";
                    cin >> shoe.shoe_quantity;

                    out_file <<  shoe.shoe_id << " " << shoe.shoe_brand << " " << shoe.shoe_model << " " << shoe.shoe_size << " " << shoe.shoe_price << " " << shoe.shoe_quantity << endl;
                    found = true;
                }
                else
                {
                    out_file << line << endl;
                }
            }
            in_file.close();
            out_file.close();

            remove(filename.c_str());
            rename("shoe_purchase_system_2.txt" , filename.c_str());

            if(found)
            {
                cout << endl;
                cout << "Data updated! ^o^ " << endl;
                cout << endl;
            }
            else
            {
                cout << endl;
                cout << "Shoe not found! Please try again! -_- ";
                cout << endl;
            }
        }
        else
        {
            cout << "Error! `_` " << endl;
        }
    }

    void purchase_shoe(const string& id , int quantity)
    {
        string line;
        ifstream in_file(filename);
        ofstream out_file("shoe_purchase_system_2.txt");
        bool found = false;

        if(in_file.is_open() && out_file.is_open())
        {
            while(getline(in_file , line))
            {
                Shoe shoe = file_convert_shoe(line);
                if(shoe.shoe_id == id)
                {
                    if(shoe.shoe_quantity >= quantity)
                    {
                        shoe.shoe_quantity = shoe.shoe_quantity - quantity;
                        cout << "Purchase successful! +_+ Remaining stock: " << shoe.shoe_quantity << endl << endl;
                    }
                    else
                    {
                        cout << "Insufficient stock! ~_~ Available: " << shoe.shoe_quantity << endl << endl;
                    }
                    out_file << shoe.shoe_id << " " << shoe.shoe_brand << " " << shoe.shoe_model << " " << shoe.shoe_size << " " << shoe.shoe_price << " " << shoe.shoe_quantity << endl;
                    found = true;
                }
                else
                {
                    out_file << line << endl;
                }
            }
            in_file.close();
            out_file.close();

            remove(filename.c_str());
            rename("shoe_purchase_system_2.txt" , filename.c_str());

            if(!found)
            {
                cout << "Shoe not found! Please try again! *_* " << endl << endl;
            }
        }
    }
};

void add_shoe(shoe_purchase_system& manager)
{
    int shoe_size, shoe_quantity;
    double shoe_price;
    string shoe_id, shoe_brand, shoe_model;

    cout << "Enter Shoe ID: ";
    cin >> shoe_id;
    cout << "Enter Brand: ";
    cin >> shoe_brand;
    cout << "Enter Model: ";
    cin >> shoe_model;
    cout << "Enter Size: ";
    cin >> shoe_size;
    cout << "Enter Price: ";
    cin >> shoe_price;
    cout << "Enter Quantity: ";
    cin >> shoe_quantity;

    Shoe new_shoe(shoe_size, shoe_quantity, shoe_price, shoe_id, shoe_brand, shoe_model);
    manager.add_shoe(new_shoe);
}

int main()
{
    shoe_purchase_system manager;
    int choice, quantity;
    string shoe_id, search_filter;

    do
    {
        cout << "======================================================" << endl;
        cout << "+                                                    +" << endl;
        cout << "+   ^o^ Welcome to Polar Shoe Purchase System ^-^    +" << endl;
        cout << "+                                                    +" << endl;
        cout << "======================================================" << endl << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
        cout << "[   ";
        cout << "Please select a code to perform a function @_@";
        cout << "   ]" << endl << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
        cout << " ----------------------- " << endl;
        cout << "|   1. Add Shoe         |" << endl;
        cout << "|   2. View Inventory   |" << endl;
        cout << "|   3. Search Shoe      |" << endl;
        cout << "|   4. Edit Shoe        |" << endl;
        cout << "|   5. Purchase Shoe    |" << endl;
        cout << "|   6. Exit             |" << endl;
        cout << " ----------------------- " << endl;
        cout << endl;
        cout << "Please enter your choice ~_~: ";
        cin >> choice;
        cin.ignore();
        cout << endl;

        switch (choice) {
            case 1:
                add_shoe(manager);
                break;
            case 2:
                manager.view_shoes();
                break;
            case 3:
                cout << "Enter ID / Brand / Model for search: ";
                cin >> search_filter;
                cout << endl;
                manager.search_shoe(search_filter);
                break;
            case 4:
                cout << "Enter shoe ID to modify: ";
                cin >> shoe_id;
                cout << endl;
                manager.edit_shoe(shoe_id);
                break;
            case 5:
                cout << "Enter shoe ID to purchase: ";
                cin >> shoe_id;
                cout << "Enter quantity: ";
                cin >> quantity;
                cout << endl;
                manager.purchase_shoe(shoe_id, quantity);
                break;
            case 6:
                cout << "Thank you! ^o^ " << endl;
                cout << "See you next time!" << endl;
                cout << "Hope to see you soon! ^_^ " << endl;
                break;
            default:
                cout << "Invalid choice! o_o Please try again!" << endl << endl;
        }
    }while (choice != 6);

    return 0;
}
