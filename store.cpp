#include <iostream>
#include <string>
using namespace std;

struct medicine
{
    string name;
    int id;
    int price;
    int qty;

    int mfgDate[3];
    int expDate[3];
};

const int MAX_SIZE = 100;
medicine med[MAX_SIZE];
medicine cart[MAX_SIZE];
int cartcount = 0;
int n = 0;

void menu()
{
    cout << "============================================================" << endl;
    cout << "             MEDICAL STORE MANAGEMENT SYSTEM                " << endl;
    cout << "============================================================" << endl;

    cout << "MEDICINE MANAGEMENT" << endl;
    cout << "-------------------" << endl;
    cout << "1. Add New Medicine" << endl;
    cout << "2. Display Medicines" << endl;
    cout << "3. Search Medicine" << endl;
    cout << "4. Update Medicine" << endl;
    cout << "5. Delete Medicine" << endl;

    cout << "CUSTOMER SECTION" << endl;
    cout << "----------------" << endl;
    cout << "6. Add Medicine To Cart" << endl;
    cout << "7. View Cart" << endl;
    cout << "8. Generate Bill" << endl;

    cout << "SYSTEM" << endl;
    cout << "------" << endl;
    cout << "9. Exit" << endl;
    cout << "============================================================" << endl;
}

void add_med()
{
    cout << "You Selected Add Medicine." << endl;
    if (n < MAX_SIZE)
    {
        for (int i = n; i < MAX_SIZE; i++)
        {
            cout << "Enter Medicine Name: " << endl;
            getline(cin >> ws, med[n].name);
            cout << "Enter Medicine ID: " << endl;
            cin >> med[i].id;
            cout << "Enter Medicine Price: " << endl;
            cin >> med[i].price;
            cout << "Enter Medicine Quantity: " << endl;
            cin >> med[i].qty;
            cout << "Enter Manufacturing Date (DD MM YYYY): ";
            cin >> med[n].mfgDate[0] >> med[n].mfgDate[1] >> med[n].mfgDate[2];

            cout << "Enter Expiry Date (DD MM YYYY): ";
            cin >> med[n].expDate[0] >> med[n].expDate[1] >> med[n].expDate[2];
            n++;
            break;
        }
    }
}

void disp_med()
{
    cout << "You Selected Display Medicines." << endl;
    if (n == 0)
    {
        cout << "No Medicine Available!" << endl;
    }
    else
    {
        cout << "ID\tName\t\tPrice\tQty\tMFG Date\tEXP Date" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << med[i].id << "\t"
                 << med[i].name << "\t\t"
                 << med[i].price << "\t"
                 << med[i].qty << "\t"
                 << med[i].mfgDate[0] << "/" << med[i].mfgDate[1] << "/" << med[i].mfgDate[2] << "\t"
                 << med[i].expDate[0] << "/" << med[i].expDate[1] << "/" << med[i].expDate[2]
                 << endl;
        }
    }
}

void search_med()
{
    cout << "You Selected Search Medicine.\n"
         << endl;
    string search;
    if (n == 0)
    {
        cout << "No Medicine Available!" << endl;
    }
    else
    {
        cout << "Enter Medicine Name for Search:" << endl;
        getline(cin >> ws, search);
        cout << endl;
        bool found = false;
        cout << "ID\tName\t\tPrice\t\tQty" << endl;
        for (int i = 0; i < n; i++)
        {
            if (search == med[i].name)
            {
                cout << med[i].id << "\t" << med[i].name << "\t\t" << med[i].price << "\t\t" << med[i].qty << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Medicine Not FOund!" << endl;
        }
    }
}

void upd_med()
{
    cout << "You Selected Update Medicine." << endl;
    if (n == 0)
    {
        cout << "No Medicine Available!" << endl;
    }
    else
    {
        bool found = false;
        string search;
        cout << "Enter Medicine Name To Search: " << endl;
        getline(cin >> ws, search);
        int idx = 0;
        cout << "ID\tName\t\tPrice\t\tQty" << endl;
        for (int i = 0; i < n; i++)
        {
            if (search == med[i].name)
            {
                cout << med[i].id << "\t" << med[i].name << "\t\t" << med[i].price << "\t\t" << med[i].qty << endl;
                idx = i;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Medicine Not Found!" << endl;
            return;
        }
        if (found)
        {
            int upd_choice = 0;
            do
            {
                cout << "Select Option to Update: " << endl;
                cout << "1.Name of Medicine" << endl;
                cout << "2.ID of Medicine" << endl;
                cout << "3.Price of Medicine" << endl;
                cout << "4.Qty of Medicine" << endl;
                cout << "5.Exit" << endl;
                cout << "Enter Your Choice: " << endl;
                cin >> upd_choice;
                switch (upd_choice)
                {
                case 1:
                {
                    string upd_name;
                    cout << "Enter Updated Name: " << endl;
                    getline(cin >> ws, upd_name);
                    med[idx].name = upd_name;
                    break;
                }
                case 2:
                {
                    int upd_id;
                    cout << "Enter Updated ID: " << endl;
                    cin >> upd_id;
                    med[idx].id = upd_id;
                    break;
                }
                case 3:
                {
                    int upd_price;
                    cout << "Enter Updated Price: " << endl;
                    cin >> upd_price;
                    med[idx].price = upd_price;
                    break;
                }
                case 4:
                {
                    int upd_qty;
                    cout << "Enter Updated Quantity: " << endl;
                    cin >> upd_qty;
                    med[idx].qty = upd_qty;
                    break;
                }
                default:
                    cout << "Invalid Choice!" << endl;
                    break;
                }
            } while (upd_choice != 5);
        }
    }
}

void del_med()
{
    cout << "You Selected Delete Medicine." << endl;
    if (n == 0)
    {
        cout << "No Medicine Available!" << endl;
    }
    else
    {
        string del_med;
        bool found = false;
        cout << "Enter Medicine name to delete:  " << endl;
        getline(cin >> ws, del_med);
        for (int i = 0; i < n; i++)
        {
            if (del_med == med[i].name)
            {
                for (int j = i; j < n - 1; j++)
                {
                    med[j] = med[j + 1];
                }
                n--;
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "Medicine Deleted Succesfully." << endl;
        }
        if (!found)
        {
            cout << "Medicine Not Found!" << endl;
        }
    }
}

void add_to_cart()
{
    cout << "You Selected ADD Medicine to cart." << endl;
    if (n == 0)
    {
        cout << "No Medicine Available!" << endl;
    }
    else if (cartcount >= MAX_SIZE)
    {
        cout << "Cart is Full!" << endl;
    }
    else
    {
        string cart_med;
        cout << "Enter Medicine name to ADD TO CART:  " << endl;
        getline(cin >> ws, cart_med);
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (cart_med == med[i].name)
            {
                int buy_qty = 0;
                cout << "ID:\t" << med[i].id << "\nName:\t" << med[i].name << "\nPrice:\t" << med[i].price << "\nAvailable Qty:\t" << med[i].qty << endl;
                cout << "Enter no. of QTY to buy: " << endl;
                cin >> buy_qty;
                if (buy_qty <= 0)
                {
                    cout << "Invalid Quantity!" << endl;
                }
                else if (buy_qty <= med[i].qty)
                {
                    cart[cartcount].name = med[i].name;
                    cart[cartcount].id = med[i].id;
                    cart[cartcount].price = med[i].price;
                    cart[cartcount].qty = buy_qty;
                    med[i].qty -= buy_qty;
                    cartcount++;
                    found = true;
                }
                else
                {
                    cout << "Not enough quantity available!" << endl;
                }
                break;
            }
        }
        if (!found)
        {
            cout << "Medicine Not Found!" << endl;
        }
        if (found)
        {
            cout << "Medicine Add to Cart Succesfully." << endl;
        }
    }
}

void view_cart()
{
    cout << "You Selected View cart." << endl;
    if (cartcount == 0)
    {
        cout << "No Medicine Available in Cart!" << endl;
    }
    else
    {
        cout << "ID\tName\t\tPrice\t\tQty" << endl;
        for (int i = 0; i < cartcount; i++)
        {
            cout << cart[i].id << "\t" << cart[i].name << "\t\t" << cart[i].price << "\t\t" << cart[i].qty << endl;
        }
    }
}

void generate_bill()
{
    cout << "You Selected Generate Bill." << endl;

    if (cartcount == 0)
    {
        cout << "Cart is Empty!" << endl;
    }
    else
    {
        cout << "====================================================" << endl;
        cout << "               MEDICAL STORE BILL" << endl;
        cout << "====================================================" << endl;

        cout << "ID\tName\t\tPrice\tQty\tTotal" << endl;
        cout << "----------------------------------------------------" << endl;

        int grandTotal = 0;

        for (int i = 0; i < cartcount; i++)
        {
            int total = cart[i].price * cart[i].qty;
            grandTotal += total;

            cout << cart[i].id << "\t"
                 << cart[i].name << "\t\t"
                 << cart[i].price << "\t"
                 << cart[i].qty << "\t"
                 << total << endl;
        }

        cout << "----------------------------------------------------" << endl;
        cout << "Grand Total = " << grandTotal << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "        Thank You For Shopping With Us!" << endl;
        cout << "====================================================" << endl;

        cartcount = 0;
    }
}

int main()
{
    int choice = 0;

    do
    {
        menu();

        cout << "Enter Your Choice :" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            add_med();
            break;
        case 2:
            disp_med();
            break;
        case 3:
        {
            search_med();
            break;
        }
        case 4:
        {
            upd_med();
            break;
        }
        case 5:
            del_med();
            break;
        case 6:
            add_to_cart();
            break;
        case 7:
            view_cart();
            break;
        case 8:
            generate_bill();
            break;
        case 9:
          cout << "Exiting... Goodbye!" << endl;
            break;    

        default:
            cout << "Invalid Choice!" << endl;
            break;
        }
    } while (choice != 9);
}
