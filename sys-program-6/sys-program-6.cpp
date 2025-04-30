#include <iostream>
#include "Order.h"
#include "Customer.h"
#include "OrderManager.h"
#include "Course.h"
#include "School.h"
#include "TeamMember.h"
#include "ProjectManager.h"
#include "Doctor.h"
#include "Appointment.h"

using namespace chrono;
int main()
{
    setlocale(LC_ALL, "RU");
    Product apple("Яблоки", 50.0, 100);
    Product bread("Хлеб", 30.0, 50);
    Product milk("Молоко", 80.0, 30);


    Customer customer("Иван Иванов", "ivanov@mail.ru");


    OrderManager orderManager;


    Order* order = orderManager.createOrder(&customer);
    order->addProduct(&apple, 5);
    order->addProduct(&bread, 2);
    order->addProduct(&milk, 1);


    cout << "Заказ #" << order->getOrderId() << endl;
    cout << "Клиент: " << customer.getName() << endl;
    cout << "Товары в заказе:" << endl;
    for (const auto& product : order->getProducts()) {
        cout << "- " << product->getName() << ": " << product->getPrice() << " руб." << endl;
    }
    cout << "Общая стоимость: " << order->getTotalCost() << " руб." << endl;
    School school;


    Course math("Математика", "Базовый курс математики");
    Course physics("Физика", "Основы физики");


    school.addCourse(&math);
    school.addCourse(&physics);


    Student student1("Иван Петров", "2");
    Student student2("Мария Сидорова", "1");


    school.addStudent(&student1);
    school.addStudent(&student2);


    Instructor instructor1("Дмитрий Иванов", "Математика");
    Instructor instructor2("Ольга Николаева", "Физика");


    school.addInstructor(&instructor1);
    school.addInstructor(&instructor2);


    instructor1.assignCourse(&math);
    instructor2.assignCourse(&physics);


    student1.enrollCourse(&math);
    student1.enrollCourse(&physics);
    student2.enrollCourse(&math);


    cout << "Курсы в школе:" << endl;
    for (const auto& course : school.getAllCourses()) {
        cout << "- " << course->getName() << ": " << course->getDescription() << endl;
        cout << "  Преподаватель: " << course->getInstructor()->getName() << endl;
        cout << "  Студенты: ";
        for (const auto& student : course->getStudents()) {
            cout << student->getName() << " ";
        }
        cout << endl;
    }
    ProjectManager pm;


    auto now = system_clock::now();
    auto endDate = now + hours(24 * 30);


    Project* website = new Project("Редизайн сайта",
        "Полный редизайн корпоративного сайта",
        now, endDate);
    pm.addProject(website);


    TeamMember* john = new TeamMember("Иван Иванов", "Фронтенд-разработчик");
    TeamMember* jane = new TeamMember("Мария Петрова", "Бэкенд-разработчик");

    Task* design = new Task("Дизайн интерфейса", "Создание макетов нового интерфейса");
    Task* backend = new Task("Обновление API", "Модернизация API бэкенда");


    design->setAssignee(john);
    backend->setAssignee(jane);


    pm.addTaskToProject(website, design);
    pm.addTaskToProject(website, backend);


    cout << "Проект: " << website->getName() << "\n";
    cout << "Описание: " << website->getDescription() << "\n";
    cout << "Задачи:\n";


    for (const auto& task : website->getTasks()) {
        cout << "- " << task->getName() << " (" << task->getStatus() << ")";
        if (task->getAssignee()) {
            cout << " - Ответственный: " << task->getAssignee()->getName();
        }
        cout << "\n";
    }


     /*pm.updateTaskInProject(website, design, "В работе");
     cout << "\nОбновленный статус задачи:\n";
     cout << design->getName() << " статус: " << design->getStatus() << "\n";

     Patient* patient1 = new Patient("Иванов Иван", 35);
     Patient* patient2 = new Patient("Петрова Мария", 28);

     Doctor* doctor1 = new Doctor("Смирнов Алексей", "Кардиолог");
     Doctor* doctor2 = new Doctor("Кузнецова Ольга", "Терапевт");

     auto now = system_clock::now();
     Appointment* appointment1 = new Appointment(now + hours(24), patient1, doctor1);
     Appointment* appointment2 = new Appointment(now + hours(48), patient2, doctor2);

     patient1->updateMedicalRecord("Жалобы на боли в сердце");
     patient1->updateMedicalRecord("Назначен курс лечения");
     patient2->updateMedicalRecord("Плановый осмотр");

     cout << "Пациенты:" << endl;
     cout << "1. " << patient1->getName() << ", " << patient1->getAge() << " лет" << endl;
     cout << "    Мед. карта:" << endl;
     for (const auto& record : patient1->getMedicalRecord()->getAllRecords()) {
         cout << "    - " << record << endl;
     }

     cout << "\n2. " << patient2->getName() << ", " << patient2->getAge() << " лет" << endl;
     cout << "    Мед. карта:" << endl;
     for (const auto& record : patient2->getMedicalRecord()->getAllRecords()) {
         cout << "    - " << record << endl;
     }

     cout << "\nВрачи:" << endl;
     cout << "1. " << doctor1->getName() << ", " << doctor1->getSpecialization() << endl;
     cout << "2. " << doctor2->getName() << ", " << doctor2->getSpecialization() << endl;*/
}
