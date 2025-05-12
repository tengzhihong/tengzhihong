#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <limits>
#include <string>

using namespace std;
void OrderSystem();
void Title();
void Menu();
void HCoffee();
void Ccoffee ();
void Dessert();
void PaymentOption ();
void Receipt();
void Tng();

//Desserts
double SubtotalD1 =0, SubtotalD2 =0, SubtotalD3 =0, SubtotalD4 =0, SubtotalD5 =0, SubtotalD6 =0,SubtotalD7 =0 ;
//Hot Coffee
double SubtotalCH1 =0, SubtotalCH2 =0, SubtotalCH3 =0, SubtotalCH4 =0, SubtotalCH5 =0, SubtotalCH6 =0;
//Cold Coffee
double SubtotalCC1 =0, SubtotalCC2 =0, SubtotalCC3 =0, SubtotalCC4 =0, SubtotalCC5 =0, SubtotalCC6 =0;




void blinkMessage(string message) {
    const int blinkDuration = 1000;
    int blinkCount = 3;
    for (int i = 0; i < blinkCount; i++)
        {
        system("cls");
        Sleep(blinkDuration);
        cout << message << endl;
        Sleep(blinkDuration);
        }
}

void Title() //main menu
{
    int inputT;
    string processingMessage = "Processing . . .";
    blinkMessage (processingMessage);
    system("cls");
    cout << "========================================================================================================================" << endl;
    cout << "+++++                                          <<<<<WELCOME>>>>>>                                                  +++++" << endl;
    cout << "========================================================================================================================" << endl;
    cout << endl;
    cout << "                                       //HOMETOWN COFFEE MELAKA//" << "                  (  )   (   )  )" << endl;
    cout << "                               Operation Hours: 7:30 AM - 8:00 PM Daily" << "             ) (   )  (  (" << endl;
    cout << "                                                                              " << "      ( )  (    ) )" << endl;
    cout << "                                                      " << "                            _____________" << endl;
    cout << "                                Tel: 064694200" << "                                   <_____________> ___" << endl;
    cout << "                                                                     " << "            |             |/ _ \\" << endl;
    cout << "                                Follow Us on Social Media:" << "                       |               | | |" << endl;
    cout << "                                                                     " << "            |               |_| |" << endl;
    cout << "                                Facebook:HometownCoffeeMelaka" << "                 ___|             |\\___/" << endl;
    cout << "                                                                     " << "       /    \\___________/    \\" << endl;
    cout << "                                Instagram: HometownCoffeeMelaka" << "              \\_____________________/" << endl;
    cout << "   *Service Tax Included" << endl;
    cout << endl;
    cout << "========================================================================================================================" << endl;
    cout << "+++++                                                                                                              +++++" << endl;
    cout << "========================================================================================================================" << endl;
    cout <<endl;
    cout << "                                           **Press Any Key To Continue **                                               " << endl;
    cout <<endl;
    cout << "========================================================================================================================" << endl;
    getch();
    system("cls");
}

//Food and Drinks Menu
void Menu()
{
    int inputM;
    cout <<"               HOMETOWN COFFEE MELAKA MENU"<<endl;
    cout <<"============================================================"<<endl;
    cout <<"|Coffee|---------------------------------------------|Price|"<<endl;
    cout <<"============================================================"<<endl;
    cout <<"                                              [ HOT | COLD ]"<<endl;
    cout <<"  A1.Espresso                               RM 2.50 | 3.00"<<endl;
    cout <<"  A2.Americano                              RM 3.00 | 3.50"<<endl;
    cout <<"  A3.Long Black                             RM 3.00 | 3.50"<<endl;
    cout <<"  A4.Latte                                  RM 4.00 | 4.50"<<endl;
    cout <<"  A5.Match latte                            RM 5.00 | 5.50"<<endl;
    cout <<"  A6.Chocolate                              RM 5.00 | 5.50"<<endl;
    cout <<"============================================================"<<endl;
    cout <<"\n============================================================"<<endl;
    cout <<"|Desserts|-------------------------------------------|Price|"<<endl;
    cout <<"============================================================"<<endl;
    cout <<"                                                  (per slice)"<<endl;
    cout <<"  B1. Chocolate Cake                                RM 7.00"<<endl;
    cout <<"  B2. Cheese Cake                                   RM 7.00"<<endl;
    cout <<"  B3. Blueberry Cake                                RM 7.00"<<endl;
    cout <<"  B4. Red Valvet Cake                               RM 7.00"<<endl;
    cout <<"  B5. Fruit Cake                                    RM 7.00"<<endl;
    cout <<"  B6. Carrot Cake                                   RM 7.00"<<endl;
    cout <<"  B7. Mint Cake                                     RM 7.00"<<endl;
    cout <<"============================================================"<<endl;
    cout <<"           **Press Any Key for Ordering Screen**            "<<endl;
    getch();
    system("cls");

}

//Order System
void OrderSystem()
{

int choice1,choice2;

do{
cout<<"Please Select the type of food or beverage you want:"<<endl;
cout<<"============================================================"<<endl;
cout<<"   No.                              OrderType           "<<endl;
cout<<"============================================================"<<endl;
cout<<endl;
cout<<"  [1]		                    Coffee           "<<endl;
cout<<"  [2]	                            Dessert      "<<endl;
cout<<endl;
cout<<"============================================================"<<endl;
cout<<"\nYour choice (1 or 2): ";
cin >>choice1;
system("cls");

if (cin.fail() ||(choice1 != 1 && choice1 != 2)) {
            cout << "Invalid choice,Please choose a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            system("cls");
    }
}while (choice1 != 1 && choice1 != 2);
    if(choice1 == 1){
        do{
        cout<<"Select the type of Coffee you want:"<<endl;
        cout<<"============================================================"<<endl;
        cout<<"   No.                             Type of Coffee        "<<endl;
        cout<<"============================================================"<<endl;
        cout<<"\n  [1]		                    Hot Coffee              "<<endl;
        cout<<"  [2]                               Cold Coffee	           "<<endl;
        cout<<"\n============================================================"<<endl;
        cout<<"\nYour choice (1 or 2): ";
        cin >>choice2;
        system("cls");

         if (cin.fail() ||(choice1 != 1 && choice1 != 2)) {
                cout << "Invalid choice,Please choose a valid number !" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                system("cls");
            }
        } while (choice2 != 1 && choice2 != 2);
        switch (choice2){
            case 1:
                HCoffee();
                    break;
            case 2:
                Ccoffee();
                    break;
        }
        }else if (choice1 == 2){
         Dessert();
    }
}



//Hot Coffee
void HCoffee()
{
    string choice21;
    double amountCH1, amountCH2, amountCH3, amountCH4, amountCH5, amountCH6;

    cout << "======================================================" << endl;
    cout << "|Coffee|------------------------------------|Price|---" << endl;
    cout << "======================================================" << endl;
    cout << "                                              HOT     " << endl;
    cout << "  A1.Espresso                               RM 2.50   " << endl;
    cout << "  A2.Americano                              RM 3.00   " << endl;
    cout << "  A3.Long Black                             RM 3.00   " << endl;
    cout << "  A4.Latte                                  RM 4.00   " << endl;
    cout << "  A5.Matcha latte                           RM 5.00   " << endl;
    cout << "  A6.Chocolate                              RM 5.00   " << endl;
    cout << "======================================================" << endl;

    while (true) {
        cout << "Your Choice (A1,A2,A3,A4,A5,A6):";
        cin >> choice21;
        if (choice21 == "A1" || choice21 == "a1") {
            cout << "You selected Espresso." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountCH1;
            if (cin.fail() || amountCH1 < 1) {
                cout << "Invalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalCH1 = SubtotalCH1 +(2.50 * amountCH1);
            cout << fixed << showpoint << setprecision(2)<< "Your Current Subtotal for Espresso (H) is : RM " << SubtotalCH1<<endl;
            break;
        } else if (choice21 == "A2" || choice21 == "a2") {
            cout << "You selected Americano." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountCH2;
            if (cin.fail() || amountCH2 < 1) {
                cout << "Invalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalCH2 = SubtotalCH2 +(3.00 * amountCH2);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Americano (H) is : RM " << SubtotalCH2<<endl;
            break;
        } else if (choice21 == "A3" || choice21 == "a3") {
            cout << "You selected Long Black." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountCH3;
            if (cin.fail() || amountCH3 < 1) {
                cout << "Invalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalCH3 = SubtotalCH3 +(3.00 * amountCH3);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Long Black (H) is : RM " << SubtotalCH3<<endl;
            break;
        } else if (choice21 == "A4" || choice21 == "a4") {
            cout << "You selected Latte." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountCH4;
            if (cin.fail() || amountCH4 < 1) {
                cout << "Invalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalCH4 = SubtotalCH4 +(4.00 * amountCH4);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Latte (H) is : RM " << SubtotalCH4<<endl;
            break;
        } else if (choice21 == "A5" || choice21 == "a5") {
            cout << "You selected Match latte." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountCH5;
            if (cin.fail() || amountCH5 < 1) {
                cout << "Invalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalCH5 = SubtotalCH5 +(5.00 * amountCH5);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Match latte (H) is : RM " << SubtotalCH5<<endl;
            break;
        } else if (choice21 == "A6" || choice21 == "a6") {
            cout << "You selected Chocolate." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountCH6;
            if (cin.fail() || amountCH6 < 1) {
                cout << "Invalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalCH6 =  SubtotalCH6 +(5.00 * amountCH6);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Chocolate (H) is : RM " << SubtotalCH6<<endl;
            break;
        } else {
            cout << "Invalid choice, please select a number between A1 to A6." << endl;
            continue;
        }
    }

}

void Ccoffee()
{
    string choice22;
    double amountCC1, amountCC2, amountCC3, amountCC4, amountCC5, amountCC6;

    cout << "======================================================" << endl;
    cout << "|Coffee|------------------------------------|Price|---" << endl;
    cout << "======================================================" << endl;
    cout << "                                             Cold     " << endl;
    cout << "  A1.Espresso                               RM 3.00   " << endl;
    cout << "  A2.Americano                              RM 3.50   " << endl;
    cout << "  A3.Long Black                             RM 3.50   " << endl;
    cout << "  A4.Latte                                  RM 4.50   " << endl;
    cout << "  A5.Match latte                            RM 5.50   " << endl;
    cout << "  A6.Chocolate                              RM 5.50   " << endl;
    cout << "======================================================" << endl;

    while (true) {
        cout << "Your Choice (A1,A2,A3,A4,A5,A6):";
        cin >> choice22;
        if (choice22 == "A1" || choice22 == "a1") {
            cout << "You selected Espresso." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountCC1;
            if (cin.fail() || amountCC1 < 1) {
                cout << "\nInvalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalCC1 = SubtotalCC1 +(3.00 * amountCC1);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Espresso (C) is : RM " << SubtotalCC1<<endl;
            break;
        } else if (choice22 == "A2" || choice22 == "a2") {
            cout << "You selected Americano." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountCC2;
            if (cin.fail() || amountCC2 < 1) {
                cout << "\nInvalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalCC2 = SubtotalCC2 +(3.50 * amountCC2);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Americano (C) is : RM " << SubtotalCC2<<endl;
            break;
        } else if (choice22 == "A3" || choice22 == "a3") {
            cout << "You selected Long Black." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountCC3;
            if (cin.fail() || amountCC3 < 1) {
                cout << "\nInvalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalCC3 = SubtotalCC3 +(3.50 * amountCC3);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Long Black (C) is : RM " << SubtotalCC3<<endl;
            break;
        } else if (choice22 == "A4" || choice22 == "a4") {
            cout << "You selected Latte." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountCC4;
            if (cin.fail() || amountCC4 < 1) {
                cout << "\nInvalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalCC4 = SubtotalCC4 +(4.50 * amountCC4);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Latte(C) is : RM " << SubtotalCC4<<endl;
            break;
        } else if (choice22 == "A5" || choice22 == "a5") {
            cout << "You selected Match latte." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountCC5;
            if (cin.fail() || amountCC5 < 1) {
                cout << "\nInvalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalCC5 = SubtotalCC5 +(5.50 * amountCC5);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Match latte(C) is : RM " << SubtotalCC5<<endl;
            break;
        } else if (choice22 == "A6" || choice22 == "a6") {
            cout << "You selected Chocolate." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountCC6;
            if (cin.fail() || amountCC6 < 1) {
                cout << "\nInvalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalCC6 = SubtotalCC6 +(5.50 * amountCC6);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Chocolate (C) is : RM " << SubtotalCC6<<endl;
            break;
        } else {
            cout << "\nInvalid choice, please select a number between A1 to A6." << endl;
            continue;
        }
    }
}

//dessert
void Dessert() {
    string choice3;
    double amountD1, amountD2, amountD3, amountD4, amountD5, amountD6, amountD7;

    cout << "==============================================================" << endl;
    cout << "|Desserts|--------------------------------------------|Price|" << endl;
    cout << "==============================================================" << endl;
    cout << "                                                  (per slice)" << endl;
    cout << "  B1. Chocolate Cake                                RM 7.00" << endl;
    cout << "  B2. Cheese Cake                                   RM 7.00" << endl;
    cout << "  B3. Blueberry Cake                                RM 7.00" << endl;
    cout << "  B4. Red Velvet Cake                               RM 7.00" << endl;
    cout << "  B5. Fruit Cake                                    RM 7.00" << endl;
    cout << "  B6. Carrot Cake                                   RM 7.00" << endl;
    cout << "  B7. Mint Cake                                     RM 7.00" << endl;
    cout << "==============================================================" << endl;

    while (true) {
        cout << "Please select your choice (B1-B7): ";
        cin >> choice3;
        if (choice3 == "B1" || choice3 == "b1") {
            cout << "You selected Chocolate Cake." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountD1;
            if (cin.fail() || amountD1 < 1) {
                cout << "\nInvalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalD1 = SubtotalD1 + (7.00 * amountD1);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Chocolate Cake is : RM " << SubtotalD1 << endl;
            break;
        } else if (choice3 == "B2" || choice3 == "b2") {
            cout << "You selected Cheese Cake." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountD2;
            if (cin.fail() || amountD2 < 1) {
                cout << "\nInvalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalD2 = SubtotalD2 + (7.00 * amountD2);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Cheese Cake is : RM " << SubtotalD2 << endl;
            break;
        } else if (choice3 == "B3" || choice3 == "b3") {
            cout << "You selected Blueberry Cake." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountD3;
            if (cin.fail() || amountD3 < 1) {
                cout << "\nInvalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalD3 = SubtotalD3 + (7.00 * amountD3);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Blueberry Cake is : RM " << SubtotalD3 << endl;
            break;
        } else if (choice3 == "B4" || choice3 == "b4") {
            cout << "You selected Red Velvet Cake." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountD4;
            if (cin.fail() || amountD4 < 1) {
                cout << "\nInvalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalD4 = SubtotalD4 + (7.00 * amountD4);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal Red Velvet Cake is : RM " << SubtotalD4 << endl;
            break;
        } else if (choice3 == "B5" || choice3 == "b5") {
            cout << "You selected Fruit Cake." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountD5;
            if (cin.fail() || amountD5 < 1) {
                cout << "\nInvalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalD5 = SubtotalD5 + (7.00 * amountD5);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Fruit Cake is : RM " << SubtotalD5 << endl;
            break;
        } else if (choice3 == "B6" || choice3 == "b6") {
            cout << "You selected Carrot Cake." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountD6;
            if (cin.fail() || amountD6 < 1) {
                cout << "\nInvalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalD6 = SubtotalD6 + (7.00 * amountD6);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Carrot Cake is : RM " << SubtotalD6 << endl;
            break;
        } else if (choice3 == "B7" || choice3 == "b7") {
            cout << "You selected Mint Cake." << endl;
            cout << "What is the amount you want ?" << endl;
            cin >> amountD7;
            if (cin.fail() || amountD7 < 1) {
                cout << "\nInvalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            SubtotalD7 = SubtotalD7 + (7.00 * amountD7);
            cout << fixed << showpoint << setprecision(2) << "Your Current Subtotal for Mint Cake is : RM " << SubtotalD7 << endl;
            break;
        } else {
            cout << "\nInvalid choice, please select a number between B1 to B7." << endl;
            continue;
        }
    }
}

void Receipt()
{
    system("color F0");
    int QuantityCH1 =(SubtotalCH1 / 2.50);
    int QuantityCH2 =(SubtotalCH2 / 3.00);
    int QuantityCH3 =(SubtotalCH3 / 3.00);
    int QuantityCH4 =(SubtotalCH4 / 4.00);
    int QuantityCH5 =(SubtotalCH5 / 5.00);
    int QuantityCH6 =(SubtotalCH6 / 5.00);
    int QuantityCC1 =(SubtotalCC1 / 3.00);
    int QuantityCC2 =(SubtotalCC2 / 3.50);
    int QuantityCC3 =(SubtotalCC3 / 3.50);
    int QuantityCC4 =(SubtotalCC4 / 4.50);
    int QuantityCC5 =(SubtotalCC5 / 5.50);
    int QuantityCC6 =(SubtotalCC6 / 5.50);
    int QuantityD1 =(SubtotalD1 / 7.00);
    int QuantityD2 =(SubtotalD2 / 7.00);
    int QuantityD3 =(SubtotalD3 / 7.00);
    int QuantityD4 =(SubtotalD4 / 7.00);
    int QuantityD5 =(SubtotalD5 / 7.00);
    int QuantityD6 =(SubtotalD6 / 7.00);
    int QuantityD7 =(SubtotalD7 / 7.00);


    double Tax = ((SubtotalD1 + SubtotalD2 + SubtotalD3 + SubtotalD4 + SubtotalD5 + SubtotalD6 + SubtotalD7 +
                   SubtotalCH1 + SubtotalCH2 + SubtotalCH3 + SubtotalCH4 + SubtotalCH5 + SubtotalCH6 +
                   SubtotalCC1 + SubtotalCC2 + SubtotalCC3 + SubtotalCC4 + SubtotalCC5 + SubtotalCC6) * 1.06) ;

    cout << "                     //RECIEPT\\                       " << endl;
    cout << "=======================================================" << endl;
    cout << "             <<<HOMETOWN COFFEE MELAKA>>>              " << endl;
    cout << "        Level 6, Bangunan TH,Damansara Uptown3         " << endl;
    cout << "        No.3 Jalan SS21/39,47400 Petaling Jaya         " << endl;
    cout << "                  Tel No. 064694200                    " << endl;
    cout << "                     TAX INVOICE                       " << endl;
    cout <<endl;
    cout << "=======================================================" << endl;
    cout << "Item               Quantity            Price (RM)      " << endl;
    cout << "=======================================================" << endl;

    // Hot Coffee
    if (SubtotalCH1 > 0) {
        cout << "Espresso(H)        " << QuantityCH1 << "                  " << SubtotalCH1 << endl;
    }
    if (SubtotalCH2 > 0) {
        cout << "Americano(H)       " << QuantityCH2 << "                  " << SubtotalCH2 << endl;
    }
    if (SubtotalCH3 > 0) {
        cout << "Long Black(H)      " << QuantityCH3 << "                  " << SubtotalCH3 << endl;
    }
    if (SubtotalCH4 > 0) {
        cout << "Latte(H)           " << QuantityCH4 << "                  " << SubtotalCH4 << endl;
    }
    if (SubtotalCH5 > 0) {
        cout << "Matcha Latte(H)    " << QuantityCH5 << "                  " << SubtotalCH5 << endl;
    }
    if (SubtotalCH6 > 0) {
        cout << "Chocolate(H)       " << QuantityCH6 << "                  " << SubtotalCH6 << endl;
    }

    // Cold Coffee
    if (SubtotalCC1 > 0) {
        cout << "Espresso(C)        " << QuantityCC1 << "                  " << SubtotalCC1 << endl;
    }
    if (SubtotalCC2 > 0) {
        cout << "Americano(C)       " << QuantityCC2 << "                  " << SubtotalCC2 << endl;
    }
    if (SubtotalCC3 > 0) {
        cout << "Long Black(C)      " << QuantityCC3 << "                  " << SubtotalCC3 << endl;
    }
    if (SubtotalCC4 > 0) {
        cout << "Latte(C)           " << QuantityCC4 << "                  " << SubtotalCC4 << endl;
    }
    if (SubtotalCC5 > 0) {
        cout << "Matcha Latte(C)    " << QuantityCC5 << "                  " << SubtotalCC5 << endl;
    }
    if (SubtotalCC6 > 0) {
        cout << "Chocolate(C)       " << QuantityCC6 << "                  " << SubtotalCC6 << endl;
    }

    // Cakes
    if (SubtotalD1 > 0) {
        cout << "Chocolate Cake     " << QuantityD1 << "                  " << SubtotalD1 << endl;
    }
    if (SubtotalD2 > 0) {
        cout << "Cheese Cake        " << QuantityD2 << "                  " << SubtotalD2 << endl;
    }
    if (SubtotalD3 > 0) {
        cout << "Blueberry Cake     " << QuantityD3 << "                  " << SubtotalD3 << endl;
    }
    if (SubtotalD4 > 0) {
        cout << "Red Velvet Cake    " << QuantityD4 << "                  " << SubtotalD4 << endl;
    }
    if (SubtotalD5 > 0) {
        cout << "Fruit Cake         " << QuantityD5 << "                  " << SubtotalD5 << endl;
    }
    if (SubtotalD6 > 0) {
        cout << "Carrot Cake        " << QuantityD6 << "                  " << SubtotalD6 << endl;
    }
    if (SubtotalD7 > 0) {
        cout << "Mint Cake          " << QuantityD7 << "                  " << SubtotalD7 << endl;
    }
    cout <<endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Total(6% tax):                       RM " << Tax << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "                 <<Transaction Approved>>              " << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "=======================================================" << endl;
    cout << "            Thanks ! Hope You Visit Us Again !         " << endl;
    cout << "=======================================================" << endl;
}

void Tng()

{
    system("color F0");
    int QuantityCH1 =(SubtotalCH1 / 2.50);
    int QuantityCH2 =(SubtotalCH2 / 3.00);
    int QuantityCH3 =(SubtotalCH3 / 3.00);
    int QuantityCH4 =(SubtotalCH4 / 4.00);
    int QuantityCH5 =(SubtotalCH5 / 5.00);
    int QuantityCH6 =(SubtotalCH6 / 5.00);
    int QuantityCC1 =(SubtotalCC1 / 3.00);
    int QuantityCC2 =(SubtotalCC2 / 3.50);
    int QuantityCC3 =(SubtotalCC3 / 3.50);
    int QuantityCC4 =(SubtotalCC4 / 4.50);
    int QuantityCC5 =(SubtotalCC5 / 5.50);
    int QuantityCC6 =(SubtotalCC6 / 5.50);
    int QuantityD1 =(SubtotalD1 / 7.00);
    int QuantityD2 =(SubtotalD2 / 7.00);
    int QuantityD3 =(SubtotalD3 / 7.00);
    int QuantityD4 =(SubtotalD4 / 7.00);
    int QuantityD5 =(SubtotalD5 / 7.00);
    int QuantityD6 =(SubtotalD6 / 7.00);
    int QuantityD7 =(SubtotalD7 / 7.00);

    double Tax = ((SubtotalD1 + SubtotalD2 + SubtotalD3 + SubtotalD4 + SubtotalD5 + SubtotalD6 + SubtotalD7 +
                   SubtotalCH1 + SubtotalCH2 + SubtotalCH3 + SubtotalCH4 + SubtotalCH5 + SubtotalCH6 +
                   SubtotalCC1 + SubtotalCC2 + SubtotalCC3 + SubtotalCC4 + SubtotalCC5 + SubtotalCC6) * 1.06) ;

    string phone, pin;
    cout << "\n---- Touch N Go ----" << endl;
    cout << "Type your phone number (10 digits)               : ";
    cin >> phone;
    while (phone.length() > 10 || phone.length() < 10)
    {
        cout << "Your phone number should have exactly 10 digits. Please try again: ";
        cin >> phone;
    }cout << "Type your PIN number (6 digits)        : ";
     cin >> pin;
     while (pin.length() > 6 || pin.length() < 6)
    {
        cout << "Your PIN number should have exactly 6 digits. Please try again: ";
        cin >> pin;
    }
    system("cls");

    cout << "\n==========================================================" << endl;
    cout << "                 >>Hometown Coffee Melaka<<                 " << endl;
    cout << "               Email:hometowncoffeemelaka@gmail             " << endl;
    cout << "                      Tel:064694200                         " << endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ " << endl;
    cout << "                   Touch N Go Receipt                          " << endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "Item               Quantity            Price (RM)      " << endl;
    cout << "===========================================================" << endl;

    // Hot Coffee
    if (SubtotalCH1 > 0) {
        cout << "Espresso(H)        " << QuantityCH1 << "                   " << SubtotalCH1 << endl;
    }
    if (SubtotalCH2 > 0) {
        cout << "Americano(H)       " << QuantityCH2 << "                   " << SubtotalCH2 << endl;
    }
    if (SubtotalCH3 > 0) {
        cout << "Long Black(H)      " << QuantityCH3 << "                   " << SubtotalCH3 << endl;
    }
    if (SubtotalCH4 > 0) {
        cout << "Latte(H)           " << QuantityCH4 << "                   " << SubtotalCH4 << endl;
    }
    if (SubtotalCH5 > 0) {
        cout << "Matcha Latte(H)    " << QuantityCH5 << "                   " << SubtotalCH5 << endl;
    }
    if (SubtotalCH6 > 0) {
        cout << "Chocolate(H)       " << QuantityCH6 << "                   " << SubtotalCH6 << endl;
    }

    // Cold Coffee
    if (SubtotalCC1 > 0) {
        cout << "Espresso(C)        " << QuantityCC1 << "                   " << SubtotalCC1 << endl;
    }
    if (SubtotalCC2 > 0) {
        cout << "Americano(C)       " << QuantityCC2 << "                   " << SubtotalCC2 << endl;
    }
    if (SubtotalCC3 > 0) {
        cout << "Long Black(C)      " << QuantityCC3 << "                   " << SubtotalCC3 << endl;
    }
    if (SubtotalCC4 > 0) {
        cout << "Latte(C)           " << QuantityCC4 << "                   " << SubtotalCC4 << endl;
    }
    if (SubtotalCC5 > 0) {
        cout << "Matcha Latte(C)    " << QuantityCC5 << "                   " << SubtotalCC5 << endl;
    }
    if (SubtotalCC6 > 0) {
        cout << "Chocolate(C)       " << QuantityCC6 << "                   " << SubtotalCC6 << endl;
    }

    // Cakes
    if (SubtotalD1 > 0) {
        cout << "Chocolate Cake     " << QuantityD1 << "                   " << SubtotalD1 << endl;
    }
    if (SubtotalD2 > 0) {
        cout << "Cheese Cake        " << QuantityD2 << "                   " << SubtotalD2 << endl;
    }
    if (SubtotalD3 > 0) {
        cout << "Blueberry Cake     " << QuantityD3 << "                   " << SubtotalD3 << endl;
    }
    if (SubtotalD4 > 0) {
        cout << "Red Velvet Cake    " << QuantityD4 << "                   " << SubtotalD4 << endl;
    }
    if (SubtotalD5 > 0) {
        cout << "Fruit Cake         " << QuantityD5 << "                   " << SubtotalD5 << endl;
    }
    if (SubtotalD6 > 0) {
        cout << "Carrot Cake        " << QuantityD6 << "                   " << SubtotalD6 << endl;
    }
    if (SubtotalD7 > 0) {
        cout << "Mint Cake          " << QuantityD7 << "                   " << SubtotalD7 << endl;
    }
    cout <<endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << "                " << "TotalPrice: RM " << (Tax/1.06) << "             " << endl;
    cout << "                " << "Total Include 6% charge:  RM " << Tax << "" << endl;
    cout << ".......................................................... " << endl;
    cout << "                 Payment Successful !!!                         " << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "          Thanks you and please come back again           " << endl;
    cout << "          Customer Service Hotline:06-456-7788         " << endl;
    cout << "==========================================================" << endl;

    system("pause");

    std::exit(0);

}

void PaymentOption()
{
        int choice4;

        do{
        cout<<"Please Select the type of food or beverage you want:"<<endl;
        cout<<"============================================================"<<endl;
        cout<<"   No.                              Payment Type           "<<endl;
        cout<<"============================================================"<<endl;
        cout<<endl;
        cout<<"  [1]		                    Cash           "<<endl;
        cout<<"  [2]	                            Tng      "<<endl;
        cout<<endl;
        cout<<"============================================================"<<endl;
        cout<<"\nYour choice (1 or 2): ";
        cin >>choice4;
        system("cls");

        if (cin.fail() ||(choice4 != 1 && choice4 != 2)) {
                    cout << "Invalid choice,Please choose a valid number." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } else {
                    system("cls");
                }
            }while (choice4 != 1 && choice4 != 2);
        switch (choice4){
        case 1:
            Receipt();
            break;
        case 2:
            Tng();
            break;

        }
}


int main() {
    system("color B5");
    char continueOrdering;
    Title();
    do {
        Menu();
        OrderSystem();
        cout << "Would you like to add another item? (Y/N): ";
        cin >> continueOrdering;
        system("cls");
    } while (continueOrdering == 'y' || continueOrdering == 'Y');
        if(continueOrdering == 'n' || continueOrdering == 'N')
        {
            system("cls");
        }
    PaymentOption();

    return 0;
}
