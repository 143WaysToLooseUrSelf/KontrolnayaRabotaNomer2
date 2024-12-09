#include <Windows.h>
#include "Person/Employee/security.h"
#include "Person/Patient/patient.h"
#include "Person/Employee/doctor.h"
#include "Person/Employee/director.h"
#include "Clinic/clinic.h"

int main() {
    SetConsoleOutputCP(65001);
    Clinic clinic;

    // добавление дней
    clinic.addDay("Понедельник");
    clinic.addDay("Вторник");
    clinic.addDay("Среда");

    // добавление расписания
    clinic.addScheduleToDay("Понедельник", new Schedule("Иванов Г.П.", "8.00-13.45"));
    clinic.addScheduleToDay("Вторник", new Schedule("Данильян А.М.", "8.00-10.45"));
    clinic.addScheduleToDay("Среда", new Schedule("Максимов М.А.", "9.00-15.45"));

    // добавление сотрудников и больных
    clinic.addPerson(new Director("Витек", "с 10.00 до 22.00", "Папка с анализами пациента Васька", 08.12));
    clinic.addPerson(new Doctor("Витек", "с 8.00 до 14.00"));
    clinic.addPerson(new Security("Витек",  "Тазер, ключи от главного входа"));
    clinic.addPerson(new Patient("Данек", 05.12));
    clinic.addPerson(new Patient("Васек", 07.12));
    clinic.addPerson(new Patient("Толик", 01.12));

    // отображение данных
    clinic.displayDays();
    clinic.displayEmployee();

    return 0;
}
