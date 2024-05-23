#ifndef MENU_H
#define MENU_H
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

void show_menu();
void menu();
void init_db(string);
void adicionarDespesa(string nome, float valor);
void visualizarResumo();
void removerDespesa(int index);
void atualizarDespesa(int index, string new_name, float new_valor);
#endif // MENU_H