#include <fstream>
#include <iostream>
#include <string>

void adicionarDespesa(std::string nome, int valor) {
  std::ofstream file("despesas.txt", std::ios::app);
  if (file.is_open()) {
    file << nome << ":" << valor << "\n";
    file.close();
  } else {
    std::cout << "Failed to open the file."
              << std::endl; // Display an error message if file opening failed
  }
}
void visualizarResumo() {
  std::ifstream file("despesas.txt");
  std::string line;
  if (file.is_open()) { // Check if the file was successfully opened
    std::cout << "File content:"
              << std::endl; // Displaying a message indicating file content
    while (std::getline(file, line)) { // Read each line from the file
      std::cout << line << std::endl;  // Display each line of the file
    }
    file.close(); // Close the file
  } else {
    std::cout << "Failed to open the file."
              << std::endl; // Display an error message if file opening failed
  }
}

void removerDespesa(int index) {
  std::ifstream file("despesas.txt");
  std::ofstream ofile;
  std::string line, buf;
  int i = 0;
  if (file.is_open()) {

    while (std::getline(file, line)) {
      if (i == index) {
        std::cout << "Found\n";
      } else {
        buf += line;
      }
      i++;
    }
    file.close();
    ofile.open("despesas.txt");
    if (ofile.is_open())
      ofile << buf;
    else
      std::cout << "Error\n";
  } else {
    std::cout << "Error\n";
  }
}

int main(int argc, char *argv[]) {
  adicionarDespesa("test1", 1);
  adicionarDespesa("test2", 2);
  visualizarResumo();
  removerDespesa(0);
  visualizarResumo();
  return 0;
}
