#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class CCoins {
private:
    const char* sface = "Лицева сторона";
    const char* sback = "Тильна сторона";
    int coins[3] = { 0,0,0 };
    int quantity = 0;
public:
    void toss_up()
    {
        //quantity = 0;
        srand((int)time(0));
        for (int i = 0; i < 3; i++) {
            coins[i] = rand() % 2 + 1;
            if (coins[i] == 1) {
                quantity++;

            } //Якщо coins[i]==1, тоді це лицева сторона,інакше тильна.
        }

    }
    void info()
    {
        for (int i = 0; i < 3; i++) {
            if (coins[i] == 1)
                cout << sface << endl;
            else
                cout << sback << endl;
        }
        cout << "Кiлькiсть монет що є лицевими: " << quantity << endl;
        cout << " " << endl;
    }
    void reset()
    {
        quantity = 0;
    }
protected:

};
int main()
{
    setlocale(LC_ALL, "ukr");
    int func = 1;
    CCoins num1;
    while (func != 4) {
        cout << "Що вам потрiбно?" << endl;
        cout << "Пiдкинути монети.(натиснiть 1)" << endl;
        cout << "Поточний стан?(натиснiть 2)" << endl;
        cout << "Скинути кiлькiсть лицевих монет.(натиснiть 3)" << endl;
        cout << "Зупинити програму.(натиснiть 4)" << endl;
        cout <<" "<< endl;
        cin >> func;
        if (func == 1) {
            num1.toss_up();
        }
        if (func == 2) {
            num1.info();
        }
        if (func == 3) {
            num1.reset();
            cout << "Пiдкинути монети.(натиснiть 1)" << endl;
            cout << "Зупинити програму.(натиснiть 4)" << endl;
            cout << " " << endl;
            cin >> func;
            if (func == 1) {
                num1.toss_up();
            }
            if (func == 2) {
                num1.info();
            }
        }
        //cin >> func;
    }
    cout << "Програма завершила працювати.";
    return 0;
}


