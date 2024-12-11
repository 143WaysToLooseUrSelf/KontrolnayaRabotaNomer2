#include <iostream>
#include "Person/Employee/security.h"
#include "Person/Patient/patient.h"
#include "Person/Employee/doctor.h"
#include "Person/Employee/intern.h"
#include <Windows.h>
#include "Clinic/clinic.h"

int main() {
    SetConsoleOutputCP(65001);
    Clinic clinic;

    // добавляю дни
    clinic.addDay("Понедельник");
    clinic.addDay("Вторник");
    clinic.addDay("Среда");
    clinic.addDay("Четверг");

    // добавляю расписание
    clinic.addScheduleToDay("Понедельник", new Schedule("Иванов Г.П.", "8.00 до 13.45"));
    clinic.addScheduleToDay("Вторник", new Schedule("Данильян А.М.", "8.00 до 10.45"));
    clinic.addScheduleToDay("Среда", new Schedule("Максимов М.А.", "9.00 до 15.45"));
    clinic.addScheduleToDay("Четверг", new Schedule("Максимов М.А.", "9.00 до 15.45"));

    // добавленяю сотрудников/пациентов

    clinic.addPerson(new Intern("Витек", "с 10.00 до 22.00", "Папка с документами", 12.12));
    clinic.addPerson(new Doctor("Витек", "с 8.00 до 14.00"));
    clinic.addPerson(new Security("Витек",  "Ответственность за поедание пончиков"));
    clinic.addPerson(new Patient("Данек", 05.12));
    clinic.addPerson(new Patient("Васек", 07.12));
    clinic.addPerson(new Patient("Толик", 01.12));

    clinic.bookPatientForDay("Данек", "Понедельник");
    clinic.bookPatientForDay("Васек", "Вторник");
    clinic.bookPatientForDay("Толик", "Среда");

    // отображение записей на прием
    std::cout << "--------------------------------------------------------\n";
    std::cout << "Записи на прием:\n";
    clinic.displayAppointmentsForDay("Понедельник");
    clinic.displayAppointmentsForDay("Вторник");
    clinic.displayAppointmentsForDay("Среда");
    clinic.displayAppointmentsForDay("Четверг");

    clinic.displayDays();
    clinic.displayEmployee();

    return 0;
}
