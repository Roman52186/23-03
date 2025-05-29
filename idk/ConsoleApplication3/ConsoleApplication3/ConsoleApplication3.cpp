//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int kol, ch;
//	cin >> kol;
//	for (int i = 0; i < kol; i++) {
//		cin >> ch;
//		if (ch % (i + 1) == 0) {
//			cout << "Yes" << endl;
//		}
//		else {
//			cout << "No" << endl ;
//		}
//	}
//}
//
//#include <iostream>
//using namespace std;
//int main() {
//    setlocale(0, "ru");
//    int n;
//    cout << "Введите количество 3-значных чисел: ";
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        int number;
//        cout << "Введите 3-значное число: ";
//        cin >> number;
//
//     
//        if (number < 100 || number > 999) {
//            cout << "Ошибка: число не является 3-значным." << endl;
//            --i; 
//            continue;
//        }
//
//       
//        int firstDigit = number / 100; 
//        int secondDigit = (number / 10) % 10;
//        int thirdDigit = number % 10; 
//
//        if (firstDigit % 2 == 0) {
//            cout << "Первый разряд четный." << endl;
//        }
//        if (secondDigit % 2 == 0) {
//            cout << "Второй разряд четный." << endl;
//        }
//        if (thirdDigit % 2 == 0) {
//            cout << "Третий разряд четный." << endl;
//        }
//    }
//}
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    int numbers[1000];
//    for (int i = 0; i < n; i++) {
//        cin >> numbers[i];
//        if (i >= 2) {
//            if ((numbers[i] % 10 == (numbers[i - 2] % 10))) {
//                cout << "luck\n";
//            }
//            else {
//                cout << "loss\n";
//            }
//        }
//    }
//}
//#include <iostream>
//
//using namespace std;
//
//class Dog {
//protected:
//    const char* name;
//    int health;
//    int attackPower;
//public:
//    Dog(const char* n, int hp, int ap) : name(n), health(hp), attackPower(ap) {}
//
//    virtual int attack() {
//        return attackPower;
//    }
//
//    virtual void defend(int damage) {
//        health -= damage;
//        if (health < 0) health = 0;
//    }
//
//    bool isAlive() {
//        return health > 0;
//    }
//
//    const char* getName() {
//        return name;
//    }
//
//    int getHealth() {
//        return health;
//    }
//};
//
//class Avcharka : public Dog {
//private:
//    int defense;
//    int attackCount;          // счётчик атак для имитации крита
//public:
//    Avcharka(const char* n, int hp, int ap, int def)
//        : Dog(n, hp, ap), defense(def), attackCount(0) {}
//
//    int attack() override {
//        attackCount++;
//        // Каждый второй удар - критический (удвоенный урон)
//        if (attackCount % 2 == 0) {
//            cout << "Критический удар! ";
//            return attackPower * 2;
//        }
//        return attackPower;
//    }
//
//    void defend(int damage) override {
//        int reducedDamage = damage - defense;
//        if (reducedDamage < 0) reducedDamage = 0;
//        health -= reducedDamage;
//        if (health < 0) health = 0;
//    }
//};
//
//int main() {
//    Dog dog1("Собака1", 100, 15);
//    Avcharka dog2("Авчарка", 120, 12, 5);
//
//    cout << "Начинается бой между " << dog1.getName() << " и " << dog2.getName() << "!\n";
//
//    bool turnDog1 = true;
//
//    while (dog1.isAlive() && dog2.isAlive()) {
//        cout << "\nНажмите Enter, чтобы атаковать...";
//        cin.get();
//
//        if (turnDog1) {
//            int damage = dog1.attack();
//            cout << dog1.getName() << " атакует и наносит " << damage << " урона.\n";
//            dog2.defend(damage);
//            cout << dog2.getName() << " осталось здоровья: " << dog2.getHealth() << "\n";
//        }
//        else {
//            int damage = dog2.attack();
//            cout << dog2.getName() << " атакует и наносит " << damage << " урона.\n";
//            dog1.defend(damage);
//            cout << dog1.getName() << " осталось здоровья: " << dog1.getHealth() << "\n";
//        }
//
//        turnDog1 = !turnDog1;
//    }
//
//    cout << "\nБой окончен!\n";
//    if (dog1.isAlive()) {
//        cout << dog1.getName() << " победила!\n";
//    }
//    else {
//        cout << dog2.getName() << " победила!\n";
//    }
//
//    return 0;
//}
//

#include <iostream>
using namespace std;
int main() {

}