#include <iostream>
#include <vector>

// Função que ordena um vetor usando o algoritmo Insertion Sort
// Parâmetro: 
// - arr: referência a um vetor de inteiros que será ordenado
void insertionSort(std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i]; // Elemento a ser inserido na parte ordenada
        int j = i - 1;    // Índice do último elemento da parte ordenada
        // Move os elementos da parte ordenada que são maiores que 'key' para uma posição à frente
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Insere 'key' na posição correta#include <iostream>
#include <vector>

// Função que ordena um vetor usando o algoritmo Insertion Sort
void insertionSort(std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Função que ordena um vetor usando o algoritmo Bubble Sort
void bubbleSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Função que ordena um vetor usando o algoritmo Selection Sort
void selectionSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

// Função principal que executa o programa
int main() {
    int n;
    std::cout << "Quantos elementos você deseja ordenar? ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Número inválido." << std::endl;
        return 1;
    }

    std::vector<int> data(n);
    std::cout << "Digite os elementos:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    // Seleciona o algoritmo de ordenação com base no número de elementos
    if (n <= 20) {
        insertionSort(data);
        std::cout << "Usando Insertion Sort." << std::endl;
    } else if (n <= 30) {
        bubbleSort(data);
        std::cout << "Usando Bubble Sort." << std::endl;
    } else {
        selectionSort(data);
        std::cout << "Usando Selection Sort." << std::endl;
    }

    // Exibe a lista ordenada
    std::cout << "Lista ordenada: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

    }
}

// Função que ordena um vetor usando o algoritmo Bubble #include <iostream>
#include <vector>

int main() {
    int n; // Número de elementos a serem ordenados
    std::cout << "Quantos elementos você deseja ordenar? ";
    std::cin >> n; // Leitura do número de elementos

    if (n <= 0) { // Verifica se o número de elementos é válido
        std::cout << "Número inválido." << std::endl;
        return 1; // Encerra o programa com erro
    }

    std::vector<int> data(n); // Cria um vetor para armazenar os elementos
    std::cout << "Digite os elementos:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> data[i]; // Leitura dos elementos do vetor
    }

    // Seleciona o algoritmo de ordenação com base no número de elementos
    if (n <= 20) {
        // Insertion Sort
        for (int i = 1; i < data.size(); i++) {
            int key = data[i]; // Elemento a ser inserido na parte ordenada.
            int j = i - 1; // Índice do último elemento da parte ordenada.
            // Move os elementos da parte ordenada que são maiores que 'key' para uma posição à frente
            while (j >= 0 && data[j] > key) {
                data[j + 1] = data[j];
                j--;
            }
            data[j + 1] = key; // Insere 'key' na posição correta
        }
        std::cout << "Usando Insertion Sort." << std::endl;

    } else if (n <= 30) {
        // Bubble Sort
        for (int i = 0; i < data.size() - 1; i++) {
            for (int j = 0; j < data.size() - i - 1; j++) {
                if (data[j] > data[j + 1]) {
                    std::swap(data[j], data[j + 1]); // Troca os elementos se estiverem na ordem errada
                }
            }
        }
        std::cout << "Usando Bubble Sort." << std::endl;

    } else {
        // Selection Sort
        for (int i = 0; i < data.size() - 1; i++) {
            int minIndex = i; // Inicializa o índice do menor elemento
            for (int j = i + 1; j < data.size(); j++) {
                if (data[j] < data[minIndex]) {
                    minIndex = j; // Atualiza o índice do menor elemento
                }
            }
            std::swap(data[i], data[minIndex]); // Troca o menor elemento encontrado
        }
        std::cout << "Usando Selection Sort." << std::endl;
    }

    // Exibe a lista ordenada
    std::cout << "Lista ordenada: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Finaliza a linha

    return 0; // Encerra o programa
}
// Parâmetro: 
// - arr: referência a um vetor de inteiros que será ordenado.
void bubbleSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        // Compara pares de elementos adjacentes e os troca se estiverem na ordem errada.
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Função que ordena um vetor usando o algoritmo Selection Sort.
// Parâmetro: 
// - arr: referência a um vetor de inteiros que será ordenado.
void selectionSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int minIndex = i; // Inicializa o índice do menor elemento como o primeiro da parte não ordenada.
        // Encontra o menor elemento na parte não ordenada.
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Atualiza o índice do menor elemento.
            }
        }
        std::swap(arr[i], arr[minIndex]); // Troca o menor elemento encontrado com o primeiro da parte não ordenada.
    }
}

// Função principal que executa o programa.
// Solicita ao usuário o número de elementos e os valores a serem ordenados.
int main() {
    int n; // Número de elementos a serem ordenados.
    std::cout << "Quantos elementos você deseja ordenar? ";
    std::cin >> n; // Leitura do número de elementos.

    if (n <= 0) { // Verifica se o número de elementos é válido.
        std::cout << "Número inválido." << std::endl;
        return 1; // Encerra o programa com erro.
    }

    std::vector<int> data(n); // Cria um vetor para armazenar os elementos.
    std::cout << "Digite os elementos:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> data[i]; // Leitura dos elementos do vetor.
    }

    // Seleciona o algoritmo de ordenação com base no número de elementos
    if (n <= 20) {
        insertionSort(data);
        std::cout << "Usando Insertion Sort." << std::endl;
    } else if (n <= 30) {
        bubbleSort(data);
        std::cout << "Usando Bubble Sort." << std::endl;
    } else {
        selectionSort(data);
        std::cout << "Usando Selection Sort." << std::endl;
    }

    // Exibe a lista ordenada
    std::cout << "Lista ordenada: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Finaliza a linha

    return 0; // Encerra o programa
}
