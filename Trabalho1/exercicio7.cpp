// 7-Aula Registros: Uma empresa de informática comercializa um programa para gerenciar o cadastro de informações dos funcionários de empresas. 
// Uma determinada empresa, com 8 departamentos, adquiriu o programa e, ao executar o programa pela primeira vez, informou o número de 
// funcionários e as informações de cada um deles. 
// As informações armazenadas são nome (string), idade (inteiro), sexo (caractere), tempo de casa em anos (inteiro) e salário (em reais). 
// Escreva um programa em C que realize as seguintes operações:   

// a) Procurar no cadastro e informar todos os dados do funcionário com nome informado pelo usuário.  
// b) Informar o número de funcionários de determinado departamento.  
// c) O número de funcionários do sexo feminino.  
// d) Exibir os dados dos funcionários com o menor e com o maior tempo de casa.  
// e) Exibir o salário médio, por departamento.  
// f) Exibir a idade média, por departamento.  
// g) Exibir o número de funcionários do sexo masculino e feminino, com idade entre 29 e 35 anos.

#include <iostream>
#include <string>
#include <vector>
#include <locale>  // Para tratamento de caracteres acentuados

using namespace std;

struct Funcionario {
    string nome;
    int idade;
    char sexo;
    int tempoCasa;
    float salario;
    string departamento;
};

// Função para converter caracteres para minúsculo
char toLower(char ch) {
    return tolower(static_cast<unsigned char>(ch));
}

int main() {
    const int numFuncionarios = 3;  // Alterado para 8 funcionários conforme enunciado
    Funcionario reg[numFuncionarios];

    // Configuração da localização para lidar com acentuação
    setlocale(LC_ALL, "Portuguese");

    cout << "Preencha as fichas cadastrais...\n";
    for (int i = 0; i < numFuncionarios; i++) {
        cout << "Funcionário " << i + 1 << ":\n";
        cout << "Nome: ";
        cin >> reg[i].nome;

        cout << "Idade: ";
        cin >> reg[i].idade;

        cout << "Sexo (F/M): ";
        char sexo;
        cin >> sexo;
        reg[i].sexo = toLower(sexo);  // Converte o sexo para minúsculo

        cout << "Anos de casa: ";
        cin >> reg[i].tempoCasa;

        cout << "Salario: ";
        cin >> reg[i].salario;

        cout << "Departamento: ";
        cin >> reg[i].departamento;

        cout << endl;
    }

    // a) Procurar no cadastro e informar todos os dados do funcionário com nome informado pelo usuário
    string nomeBusca;
    cout << "\nInforme o nome do funcionário para buscar seus dados: \n";
    cin >> nomeBusca;
    bool encontrado = false;
    for (int i = 0; i < numFuncionarios; i++) {
        if (reg[i].nome == nomeBusca) {
            cout << "\nDados do funcionário encontrado:\n";
            cout << "Nome: " << reg[i].nome << endl;
            cout << "Idade: " << reg[i].idade << endl;
            cout << "Sexo: " << reg[i].sexo << endl;
            cout << "Anos de casa: " << reg[i].tempoCasa << endl;
            cout << "Salario: " << reg[i].salario << endl;
            cout << "Departamento: " << reg[i].departamento << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "\nFuncionário não encontrado.\n";
    }

    // b) Informar o número de funcionários de determinado departamento
    string departamentoBusca;
    cout << "\nInforme o departamento para obter o número de funcionários: \n";
    cin >> departamentoBusca;
    int contadorDepartamento = 0;
    for (int i = 0; i < numFuncionarios; i++) {
        if (reg[i].departamento == departamentoBusca) {
            contadorDepartamento++;
        }
    }
    cout << "\nNúmero de funcionários no departamento " << departamentoBusca << ": " << contadorDepartamento << endl;

    // c) O número de funcionários do sexo feminino
    int contadorFeminino = 0;
    for (int i = 0; i < numFuncionarios; i++) {
        if (reg[i].sexo == 'f') {
            contadorFeminino++;
        }
    }
    cout << "\nNúmero de funcionárias do sexo feminino: \n" << contadorFeminino << endl;

    // d) Exibir os dados dos funcionários com o menor e com o maior tempo de casa
    int menorTempoCasa = reg[0].tempoCasa;
    int indiceMenorTempoCasa = 0;
    int maiorTempoCasa = reg[0].tempoCasa;
    int indiceMaiorTempoCasa = 0;
    for (int i = 1; i < numFuncionarios; i++) {
        if (reg[i].tempoCasa < menorTempoCasa) {
            menorTempoCasa = reg[i].tempoCasa;
            indiceMenorTempoCasa = i;
        }
        if (reg[i].tempoCasa > maiorTempoCasa) {
            maiorTempoCasa = reg[i].tempoCasa;
            indiceMaiorTempoCasa = i;
        }
    }
    cout << "\nFuncionário com menor tempo de casa:\n";
    cout << "Nome: " << reg[indiceMenorTempoCasa].nome << ", Tempo de casa: " << menorTempoCasa << " anos\n";
    cout << "\nFuncionário com maior tempo de casa:\n";
    cout << "Nome: " << reg[indiceMaiorTempoCasa].nome << ", Tempo de casa: " << maiorTempoCasa << " anos\n";

    // e) Exibir o salário médio, por departamento
    // Usaremos um vetor para armazenar os salários por departamento
    vector<float> salariosPorDepartamento(numFuncionarios, 0.0f);
    vector<int> contadorPorDepartamento(numFuncionarios, 0);

    for (int i = 0; i < numFuncionarios; i++) {
        int indiceDepartamento = stoi(reg[i].departamento) - 1;
        salariosPorDepartamento[indiceDepartamento] += reg[i].salario;
        contadorPorDepartamento[indiceDepartamento]++;
    }

    for (int i = 0; i < numFuncionarios; i++) {
        if (contadorPorDepartamento[i] > 0) {
            float salarioMedio = salariosPorDepartamento[i] / contadorPorDepartamento[i];
            cout << "\nSalário médio do departamento " << i + 1 << ": \n" << salarioMedio << endl;
        }
    }

    // f) Exibir a idade média, por departamento
    vector<int> idadesPorDepartamento(numFuncionarios, 0);

    for (int i = 0; i < numFuncionarios; i++) {
        int indiceDepartamento = stoi(reg[i].departamento) - 1;
        idadesPorDepartamento[indiceDepartamento] += reg[i].idade;
    }

    for (int i = 0; i < numFuncionarios; i++) {
        if (contadorPorDepartamento[i] > 0) {
            float idadeMedia = static_cast<float>(idadesPorDepartamento[i]) / contadorPorDepartamento[i];
            cout << "\nIdade média do departamento " << i + 1 << ": \n" << idadeMedia << endl;
        }
    }

    // g) Exibir o número de funcionários do sexo masculino e feminino, com idade entre 29 e 35 anos
    int contadorMasculinoIdade2935 = 0;
    int contadorFemininoIdade2935 = 0;

    for (int i = 0; i < numFuncionarios; i++) {
        if (reg[i].idade >= 29 && reg[i].idade <= 35) {
            if (reg[i].sexo == 'm') {
                contadorMasculinoIdade2935++;
            } else if (reg[i].sexo == 'f') {
                contadorFemininoIdade2935++;
            }
        }
    }

    cout << "\nNúmero de funcionários do sexo masculino (idade entre 29 e 35 anos): \n" << contadorMasculinoIdade2935 << endl;
    cout << "\nNúmero de funcionárias do sexo feminino (idade entre 29 e 35 anos): \n" << contadorFemininoIdade2935 << endl;

    return 0;
}
