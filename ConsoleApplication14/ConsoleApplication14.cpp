#include <iostream>

class Singleton {
public:
    // Метод для отримання єдиного екземпляра класу
    static Singleton& getInstance() {
        static Singleton instance; // Лінива ініціалізація при першому виклику
        return instance;
    }

    // Інші методи класу
    void someOperation() {
        std::cout << "Performing some operation\n";
    }

private:
    // Приватний конструктор та деструктор для заборони зовнішнього створення та знищення екземпляра
    Singleton() {}
    ~Singleton() {}

    // Забороняємо копіювання та присвоєння
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

int main() {
    // Використання одиничного екземпляра
    Singleton& singletonInstance = Singleton::getInstance();
    singletonInstance.someOperation();

    return 0;
}
