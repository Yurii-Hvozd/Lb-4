#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class CCoins {
private:
    const char* sface = "������ �������";
    const char* sback = "������ �������";
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

            } //���� coins[i]==1, ��� �� ������ �������,������ ������.
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
        cout << "�i���i��� ����� �� � ��������: " << quantity << endl;
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
        cout << "�� ��� ����i���?" << endl;
        cout << "�i������� ������.(������i�� 1)" << endl;
        cout << "�������� ����?(������i�� 2)" << endl;
        cout << "������� �i���i��� ������� �����.(������i�� 3)" << endl;
        cout << "�������� ��������.(������i�� 4)" << endl;
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
            cout << "�i������� ������.(������i�� 1)" << endl;
            cout << "�������� ��������.(������i�� 4)" << endl;
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
    cout << "�������� ��������� ���������.";
    return 0;
}


