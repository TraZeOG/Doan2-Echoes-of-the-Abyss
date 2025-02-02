#ifndef _MENU_H
#define _MENU_H

#include "getch.h"
#include <wchar.h>
#include <locale.h>

#define clear() wprintf(L"\033[H\033[J")

extern char choix;
typedef enum {
    HOMEPAGE = 1,
    USERNAME = 2,
    DEATH = 3,
} Menu;

void menus(bool* in_menus, bool* changing_menu);
void draw_menu(Menu menu);

#endif