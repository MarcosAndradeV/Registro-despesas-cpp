#include <fstream>
#include <iostream>
#include <string>

void adicionarDespesa(std::string nome, int valor) {
  std::ofstream file("despesas.txt", std::ios::app);
  if (file.is_open()) {
    file << nome << ":" << valor << "\n";
    file.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }
}
void visualizarResumo() {
  std::ifstream file("despesas.txt");
  std::string line;
  if (file.is_open()) {
    std::cout << "Resumo:" << std::endl;
    while (std::getline(file, line)) {
      std::cout << " - " << line << std::endl;
    }
    file.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }
}

void removerDespesa(int index) {
  std::ifstream file("despesas.txt");
  std::ofstream ofile;
  std::string line, buf;
  int i = 0;
  if (file.is_open()) {
    while (std::getline(file, line)) {
      if (i == index)
        std::cout << "Removendo: " << line << "\n";
      else
        buf += line;
      i++;
    }
    file.close();
    ofile.open("despesas.txt");
    if (ofile.is_open())
      ofile << buf;
    else
      std::cout << "Error: Cannot open despesas.txt" << "\n";
    ofile.close();
  } else {
    std::cout << "Error: Cannot open despesas.txt" << "\n";
  }
}
void atualizarDespesa(int index, std::string new_name, int new_valor) {
  std::ifstream file("despesas.txt");
  std::ofstream ofile;
  std::string line, buf;
  new_name += ":" + std::to_string(new_valor) + "\n";
  int i = 0;
  if (file.is_open()) {
    while (std::getline(file, line)) {
      if (i == index)
        buf += new_name;
      else
        buf += line;
      i++;
    }
    file.close();
    ofile.open("despesas.txt");
    if (ofile.is_open())
      ofile << buf;
    else
      std::cout << "Error: Cannot open despesas.txt" << "\n";
    ofile.close();
  } else {
    std::cout << "Error: Cannot open despesas.txt" << "\n";
  }
}

int main(int argc, char *argv[]) {
  adicionarDespesa("test1", 1);
  adicionarDespesa("test2", 2);
  visualizarResumo();
  removerDespesa(0);
  visualizarResumo();
  atualizarDespesa(0, "test1", 3);
  visualizarResumo();
  return 0;
}
