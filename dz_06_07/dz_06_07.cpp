#include "Queue_priority.h";

int main()
{
    setlocale(LC_ALL, "ru");
    Queue_priority q1("egor");
    q1.push("artur", 2);
    q1.push("dima", 3);
    q1.push("corey", 4);
    q1.show();
    q1.pop();
    q1.show();
}
