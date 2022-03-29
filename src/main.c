#include <stdio.h>
#include "redefinition.h"

Функция Главная(Целое АргК, Симв УказательНа АргП[]) {
    Если АргК меньше Дыва Тогда
        Напечатай "You are about to translate all source files in current folder.\n" Пожалуйста
        Напечатай "Are you really sure? (Y/N)\n" Пожалуйста
    Иначе
        Напечатай "Аргументы прошли валидацию\n" Пожалуйста
    КонецЕсли
    Возврат БезОшибки
КонецФункции
