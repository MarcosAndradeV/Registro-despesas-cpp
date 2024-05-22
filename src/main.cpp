#include "menu.h"

int main(void) {
  init_db("despesas.txt");
  menu();
  return 0;
}

void menu() {
  int opt, idx;
  double valor;
  string nome;
  do {
    cout << "----------------------\n";
    cout << "        MENU          \n";
    cout << "----------------------\n";
    cout << "1) Visualisar Dispesas\n";
    cout << "2) Adicionar Dispesa  \n";
    cout << "3) Remover Dispesa    \n";
    cout << "4) Atualizar Dispesa  \n";
    cout << "5) Sair               \n";
    cin >> opt;
    switch (opt) {
    case 1:
      visualizarResumo();
      break;
    case 2:
      cout << "Digite o nome para a dispesa: ";
      cin >> nome;
      cout << "Digite o valor para a dispesa: ";
      cin >> valor;
      cout << "\n";
      adicionarDespesa(nome, valor);
      break;
    case 3:
      cout << "Digite o index da dispesa que deseja remover: ";
      cin >> idx;
      cout << "\n";
      removerDespesa(idx);
      break;
    case 4:
      cout << "Digite o index da dispesa que deseja atualizar: ";
      cin >> idx;
      cout << "Digite o novo nome para a dispesa: ";
      cin >> nome;
      cout << "Digite o novo valor para a dispesa: ";
      cin >> valor;
      cout << "\n";
      atualizarDespesa(idx, nome, valor);
      break;
    }
  } while (opt != 5);
}
void init_db(string nome) {
  if (!std::filesystem::exists(nome)) {
    std::ofstream file(nome);
    if (file.is_open())
      file.close();
  }
}
void adicionarDespesa(string nome, double valor) {
  std::ofstream file("despesas.txt", std::ios::app);
  if (file.is_open()) {
    file << nome << ": R$" << valor << "\n";
    file.close();
  } else {
    cout << "Failed to open the file." << std::endl;
  }
}
void visualizarResumo() {
  std::ifstream file("despesas.txt");
  int i = 0;
  string line;
  if (file.is_open()) {
    cout << "Resumo: " << std::endl;
    while (std::getline(file, line)) {
      cout << i << " - "<< line << std::endl;
      i++;
    }
    file.close();
  } else {
    cout << "Failed to open the file." << std::endl;
  }
}
void removerDespesa(int index) {
  std::ifstream file("despesas.txt");
  std::ofstream ofile;
  string line, buf;
  int i = 0;
  if (file.is_open()) {
    while (std::getline(file, line)) {
      if (i == index) {
        cout << "Removendo: " << line << "\n";
      } else {
        buf += line + "\n";
      }
      i++;
    }
    if (i < index) {
      cout << "Index invalido nada foi removido\n";
    }
    file.close();
    ofile.open("despesas.txt");
    if (ofile.is_open()) {
      ofile << buf;
    } else {
      cout << "Error: Cannot open despesas.txt"
           << "\n";
    }
    ofile.close();
  } else {
    cout << "Error: Cannot open despesas.txt"
         << "\n";
  }
}
void atualizarDespesa(int index, string new_name, double new_valor) {
  std::ifstream file("despesas.txt");
  std::ofstream ofile;
  string line, buf;
  new_name += ": " + std::to_string(new_valor) + "\n";
  int i = 0;
  if (file.is_open()) {
    while (std::getline(file, line)) {
      if (i == index) {
        buf += new_name;
      } else {
        buf += line + "\n";
      }
      i++;
    }
    if (i < index) {
      cout << "Index invalido nada foi atualizado\n";
    }
    file.close();
    ofile.open("despesas.txt");
    if (ofile.is_open())
      ofile << buf;
    else
      cout << "Error: Cannot open despesas.txt"
           << "\n";
    ofile.close();
  } else {
    cout << "Error: Cannot open despesas.txt"
         << "\n";
  }
}
