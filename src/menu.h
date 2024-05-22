#ifndef MENU_H
#define MENU_H
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

void menu();
void init_db(string);
void adicionarDespesa(string nome, double valor);
void visualizarResumo();
void removerDespesa(int index);
void atualizarDespesa(int index, string new_name, double new_valor);
#endif // MENU_H