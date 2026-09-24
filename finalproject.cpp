#include <iostream>
using namespace std;
int main()
{
    int id[100];
    char name[100][20];
    int price[100];
    int qty[100];

    int cartID[100];
    char cartName[100][20];
    int cartPrice[100];
    int cartQty[100];

    int cartCount = 0;

    // total medicines in system
    int n = 0;
    int choice;
    while (true)
    {
        cout << "\n=================================================\n";
        cout << "        Medical Store Management System\n";
        cout << "\n=================================================\n";
        cout << "1. Add Medicine\n";
        cout << "2. Show All Medicines\n";
        cout << "3. Search Medicine\n";
        cout << "4. Add Medicine To Cart\n";
        cout << "5. Generate Bill\n";
        cout << "6. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        if (choice == 6)
        {
            cout << "Exiting System....\n";
            break;
        }
        if (choice == 1)
        {
            cout << "\n===== Add Medicine =====\n";
            if (n >= 100)
            {
                cout << "Stock Full! Cannot Add More Medicines.\n";
            }
            else
            {
                cout << "Enter Medicine ID: ";
                cin >> id[n];

                cout << "Enter Medicine Name(no spaces):";
                cin >> name[n];

                cout << "Enter Price: ";
                cin >> price[n];

                cout << "Enter Quantity: ";
                cin >> qty[n];

                n++;

                cout << "Medicine Added Succesfully!\n";
            }
        }
        else if (choice == 2)
        {
            cout << "\n===== All Medicine ===== \n";
            if (n == 0)
            {
                cout << "No Medicine Available!\n";
            }
            else
            {
                cout << "ID\tName\t\tPrice\tQty\n";
                cout << "------------------------------\n";

                for (int i = 0; i < n; i++)
                {
                    cout << id[i] << "\t" << name[i] << "\t\t" << price[i] << "\t" << qty[i] << "\n";
                }
            }
        }
        else if (choice == 3)
        {
            cout << "\n===== Search Medicine =====(Next Step)\n";
            if (n == 0)
            {
                cout << "No Medicine Available\n";
            }
            else
            {
                int searchid;
                int found = 0;
                cout << "Enter Medicine ID to Search: ";
                cin >> searchid;

                for (int i = 0; i < n; i++)
                {
                    if (id[i] == searchid)
                    {
                        cout << "\nMedicine Found";
                        cout << "ID: " << id[i] << "\n";
                        cout << "Name: " << name[i] << "\n";
                        cout << "Price: " << price[i] << "\n";
                        cout << "Quantity: " << qty[i] << "\n";

                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                {
                    cout << "Medicine Not FOund!";
                }
            }
        }
        else if (choice == 4)
        {
            int searchID;
            int buyQty;
            int found = 0;

            cout << "\n===== ADD MEDICINE TO CART =====\n";

            if (n == 0)
            {
                cout << "No medicines available.\n";
            }
            else
            {
                cout << "Enter Medicine ID: ";
                cin >> searchID;

                for (int i = 0; i < n; i++)
                {
                    if (id[i] == searchID)
                    {
                        found = 1;

                        cout << "Medicine Name : " << name[i] << endl;
                        cout << "Price         : " << price[i] << endl;
                        cout << "Available Qty : " << qty[i] << endl;

                        cout << "Enter Quantity: ";
                        cin >> buyQty;

                        if (buyQty <= qty[i])
                        {
                            cartID[cartCount] = id[i];

                            
                            int j = 0;
                            while (name[i][j] != '\0')
                            {
                                cartName[cartCount][j] = name[i][j];
                                j++;
                            }
                            cartName[cartCount][j] = '\0';

                            cartPrice[cartCount] = price[i];
                            cartQty[cartCount] = buyQty;

                            cartCount++;

                            cout << "Medicine Added To Cart Successfully.\n";
                        }
                        else
                        {
                            cout << "Not enough stock available.\n";
                        }

                        break;
                    }
                }

                if (found == 0)
                {
                    cout << "Medicine Not Found.\n";
                }
            }
        }
        else if (choice == 5)
        {
            int grandTotal = 0;

            cout << "\n========== BILL ==========\n";
            cout << "Name\tQty\tPrice\tTotal\n";
            cout << "---------------------------------\n";

            for (int i = 0; i < cartCount; i++)
            {
                int total = cartPrice[i] * cartQty[i];

                cout << cartName[i] << "\t"
                     << cartQty[i] << "\t"
                     << cartPrice[i] << "\t"
                     << total << endl;

                grandTotal = grandTotal + total;
            }
            cout << "---------------------------------\n";
            cout << "Grand Total = " << grandTotal << endl;
            for (int i = 0; i < cartCount; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (cartID[i] == id[j])
                    {
                        qty[j] = qty[j] - cartQty[i];
                        break;
                    }
                }
            }
            cartCount = 0;

            cout << "\nBill Generated Successfully!\n";
            cout << "Cart is now empty.\n";
        }
        else
        {
            cout << "Invalid choice\n";
        }
    }
    return 0;
}
