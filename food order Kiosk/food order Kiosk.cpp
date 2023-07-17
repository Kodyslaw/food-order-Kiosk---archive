#include <iostream>
#include <windows.h>



using namespace std;
float cennik[11];
float waluty[3];
float mnoznik;
float wplata;
float reszta;
int admin;
int opcje;
int siema;
int zapytanie;
int decyzja;
int zmiana;
int ilosc[11];
string nazwy[11];

int main()
{

    unsigned int waluta;
    unsigned int produkt;
    ilosc[0] = 0;
    ilosc[1] = 5;
    ilosc[2] = 5;
    ilosc[3] = 5;
    ilosc[4] = 5;
    ilosc[5] = 5;
    ilosc[6] = 5;
    ilosc[7] = 666;
    ilosc[8] = 5;
    ilosc[9] = 5;
    ilosc[10] = 5;

    nazwy[0] = "zly wybor";
    nazwy[1] = "7days";
    nazwy[2] = "Haribo";
    nazwy[3] = "Paluszki";
    nazwy[4] = "Pepsi";
    nazwy[5] = "3bit";
    nazwy[6] = "Lion";
    nazwy[7] = "MONSTER ENERGY";
    nazwy[8] = "Pepsi Max";
    nazwy[9] = "15 Skrzydel";
    nazwy[10] = "2 dolewki";

    waluty[0] = 4;
    waluty[1] = 3.9;
    waluty[2] = 1;

    cennik[0] = 0;
    cennik[1] = 3;
    cennik[2] = 5;
    cennik[3] = 2;
    cennik[4] = 2;
    cennik[5] = 3;
    cennik[6] = 3;
    cennik[7] = 5;
    cennik[8] = 2;
    cennik[9] = 35;
    cennik[10] = 8;

start:
    system("pause");
    system("cls");
    cout << "Witaj! Oto lista produktow:" << endl;
    cout << "///////////////////////////" << endl;
    cout << "///1. 7days - " << cennik[1] << "zl//////////" << endl;
    cout << "///2. Haribo - " << cennik[2] << "zl/////////" << endl;
    cout << "///3. Paluszki - " << cennik[3] << "zl///////" << endl;
    cout << "///4. Pepsi - " << cennik[4] << "zl//////////" << endl;
    cout << "///5. 3 bit - " << cennik[5] << "zl//////////" << endl;
    cout << "///6. Lion - " << cennik[6] << "zl///////////" << endl;
    cout << "///7. MONSTER ENERGY - " << cennik[7] << "zl/" << endl;
    cout << "///8. Pepsi Max - " << cennik[8] << "zl//////" << endl;
    cout << "///9. 15 skrzydelek - " << cennik[9] << "zl/" << endl;
    cout << "///10. Dwie dolewki - " << cennik[10] << "zl//" << endl;
    cout << "///11. Coca-Cola - " << cennik[7] << "zl/////" << endl;
    cout << "///////////////////////////" << endl;
    cout << endl;



    cout << "Jaka waluta placisz?" << endl;
    cout << "1. EUR (1EUR = " << waluty[0] << "PLN)" << endl;
    cout << "2. USD (1USD = " << waluty[1] << "PLN)" << endl;
    cout << "3. PLN" << endl;
    cout << "Inny numer-zakonczenie" << endl;
    cout << "Automat przyjmuje monety: 1zl,2zl,5zl oraz 1EUR,2EUR,5EUR lub 0,25$, 0,50$" << endl;


    cin >> waluta;
    switch (waluta)
    {
    case 1:
        cout << "Wybrano EUR" << endl;
        mnoznik = waluty[0];
        break;
    case 2:
        cout << "Wybrano USD" << endl;
        mnoznik = waluty[1];
        break;
    case 3:
        cout << "Wybrano PLN" << endl;
        mnoznik = waluty[2];
        break;

    case 12:
        system("pause");
        system("cls");
        cout << "witaj w uzupelnianiu maszyny!" << endl;
        cout << "podaj haslo:" << endl;
        cin >> zapytanie;



        if (zapytanie != 1234)
        {
            cout << "nie przyznano dostepu!" << endl;

        }
        else
        {
        uzupelnianie:
            cout << "ktory produkt chcesz uzupelnic?" << endl;
            cin >> admin;
            cout << "Uzupelniam numer" << admin << "." << endl;
            ilosc[admin] = ilosc[admin] + 5;
            Sleep(5000);
            cout << "Uzupelnianie skonczone!" << endl;
            cout << "Chcesz uzupelnic cos jeszcze?" << endl;
            cout << "1. Tak" << endl;
            cout << "2. Nie" << endl;
            cin >> siema;
            if (siema == 1)
            {
                goto uzupelnianie;
            }
            else
            {
                cout << "Inne opcje: " << endl;
                cout << "1.Zmiana cen produktow" << endl;
                cout << "2.Zmiana waluty" << endl;
                cout << "3.Idz do startu" << endl;
                cin >> opcje;
                switch (opcje)
                {


                case 1:
                    cout << "Ktory produkt chcesz zmienic?" << endl;
                    cin >> zmiana;
                    switch (zmiana)
                    {


                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                        cout << "produkt " << zmiana << endl;
                        cin >> cennik[zmiana];
                        goto wymiany;
                        break;


                    default:
                    wymiany:
                        goto start;
                    }
                    break;
                case 2:
                {
                    cout << "ktora walute chcesz zmienic?" << endl;
                    cout << "1.EUR" << endl;
                    cout << "2.USD" << endl;
                    cin >> zmiana;
                    switch (zmiana)
                    {
                    case 1:
                        cout << "wybierz nowa wartosc EUR" << endl;
                        cin >> waluty[0];
                        break;
                    case 2:
                        cout << "wybierz nowa wartosc USD" << endl;
                        cin >> waluty[1];
                        break;

                    default:
                        goto start;
                    }
                }
                case 3:
                {
                    goto start;
                }

                }





            }
        }

        break;
    default:
        cout << "Bledny wybor" << endl;
        goto start;

    }

    if ((waluta == 1) || (waluta == 2) || (waluta == 3))
    {
    monety:
        cout << "Wrzuc monety" << endl;
        cin >> wplata;
        wplata = wplata * mnoznik;
        cout << "Twoj bilans to: " << wplata << endl;
        cout << "Podaj numer produktu" << endl;
        cin >> produkt;
        switch (produkt)
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            if (ilosc[produkt] > 0)
            {
                system("cls");
                cout << produkt << "." << nazwy[produkt] << " - " << cennik[produkt] << "zl" << endl;
                reszta = wplata - cennik[produkt];
                if (reszta >= 0)
                {
                    ilosc[produkt] = ilosc[produkt] - 1;
                    cout << "Podaje produkt ..." << endl;
                    Sleep(2000);
                    cout << "Wydaje reszte ..." << endl;
                    Sleep(1000);
                    cout << "Oto twoja reszta w wysokosci: " << reszta << "zl" << endl;
                    cout << "Czy chcesz kupic cos jeszcze?" << endl;
                    cout << "1. Tak" << endl;
                    cout << "2. Nie" << endl;
                    cin >> decyzja;
                    if (decyzja == 1)
                    {
                        goto start;
                    }
                    else
                    {
                        return 0;
                    }
                }
                else
                {
                    cout << "Niewystarczajace srodki!" << endl;
                    cout << "zwracam pieniadze...";
                    Sleep(1000);
                    goto monety;
                }
            }
            else
            {
                cout << "brak produktu!" << endl;
                goto start;
            }
            break;
        case 11:
            if (ilosc[4] > 0)
            {
                system("cls");
                cout << "No chyba nie" << endl;
                cout << "Wydaje Pepsi" << endl;
                Sleep(2000);
                cout << "Nie wydaje reszty za zdrade Pepsi" << endl;
            }
            else
            {
                cout << " i tak nie ma tego w automacie" << endl;
                goto  start;
            }
            break;

        }

    }
    else
    {
        cout << "Do widzenia!" << endl;
    }


    return 0;
}
