#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Дана цілочисельна квадратна матриця.
//Визначити добуток елементів в тих рядках, які не містять від’ємних елементів;
//максимум серед сум елементів діагоналей, паралельних головній діагоналі матриці.

int main() {
    printf("%s", "Nachalo program\n");
    FILE *fin(NULL);
    char namef[40] = "data.txt";
    fin = fopen(namef, "r"); //відкриваємо текстовий файл для зчитування
    if (!fin) {
        printf("Can not open file\n");
        return 1;
    }
    int n, m; //розмір масиву n на m
    fscanf(fin, "%d", &n); //зчитуємо два числа n і m
    m = n;
    int **mas = new int *[n];
    for (int i = 0; i < n; i++)
        mas[i] = new int[m];
    //зчитуємо дані з файлу
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            fscanf(fin, "%d", &mas[i][j]);
    fclose(fin); //закриваємо файл
    //виводимо інформацію на екран у форматованому вигляді
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%5d", mas[i][j]); //ширина поля виведення займає 5 знакомісць
        }
        printf("%c", '\n');
    }
    //виводимо інформацію в текстовий файл
    FILE *fout = fopen("matrix.txt", "w"); // відкриваємо текстовий файл для запису
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fprintf(fout, "%5d", mas[i][j]); //ширина поля виведення займає 5 знакомісць
        }
        fprintf(fout, "%c", '\n');
    }
    fclose(fout);

    fout = fopen("matrix.b", "wb"); // відкриваємо бінарний файл для запису
    //записуємо інформацію в бінарний файл по рядкам
    for (int i = 0; i < n; i++) {
        fwrite(mas[i], sizeof(int) * m, 1, fout);
    }
    fclose(fout);
    int **mas2 = new int *[n];
    for (int i = 0; i < n; i++) {
        mas2[i] = new int[m];
    }
    fin = fopen("matrix.b", "rb"); //відкриваємо бінарний файл для зчитування
    // зчитуємо інформацію з бінарного файлу по рядкам
    for (int i = 0; i < n; i++) {
        fread(mas2[i], sizeof(int) * m, 1, fin);
    }
    printf("%c", '\n');
    //виводимо інформацію на екран у форматованому вигляді для	//перевірки правильності отриманої інформації
    printf("Info from binary file\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%5d", mas2[i][j]); // ширина поля виведення займає 5 знакомісць
        }
        printf("%c", '\n');
    }

    FILE *foutresult = fopen("result.txt", "w"); // відкриваємо бінарний файл для запису
    FILE *foutresultbin = fopen("result.bin", "wb"); // відкриваємо бінарний файл для запису
    ////////
    //підрахуємо кількість від’ємних елементів
    for (int i = 0; i < n; i++) {
        int dob = 1;
        for (int j = 0; j < m; j++) {
            dob *= mas2[i][j];
            if (dob < 0) break;
        }
        if (dob < 0) {
            printf("string  %i has negative el\n", i);
            fprintf(foutresult, "string  %i has negative el\n", i);
        } else {
            printf("string  %i has dob el: %d\n", i, dob);
            fprintf(foutresult, "string  %i has dob el: %d\n", i, dob);
        }
    }

    int maxSum = 0;
    bool isFirst = true;
  for (int k = n - 1; k >= -n + 1; --k)
  {
      int currentsum =0;
        for (int i = 0; i < n; i++) {
            //int index = i + 4; // i+(n-1)   i-(n-1)
           int index = i + k;
           if (index >= 0 && index < n) {
                printf("%d  ", mas2[index][i]);
                currentsum += mas2[index][i];
            }
        }
        printf("\t currentsum [%d]\n", currentsum);
        if (isFirst || !isFirst&&(currentsum > maxSum)) {
            isFirst = false;
            maxSum =currentsum;
        }
    }
    printf("finish\n");
    printf("\nmaxSum = %d", maxSum);
    fprintf(foutresult,"\t maxSum [%d]\n", maxSum);
    fwrite(&maxSum, sizeof(maxSum), 1, foutresultbin);

    //звільнення динамічних масивів
    for (int i = 0; i < n; i++) {
        delete[]mas[i];
        delete[]mas2[i];
    }
    delete[]mas;
    delete[]mas2;
    puts("\nFinish\n");
    fclose(foutresult);
    fclose(foutresultbin);
    FILE *finresultbin = fopen("result.bin", "rb");
    int sunN;
    fread(&sunN, sizeof(sunN), 1, finresultbin);
    printf("sumN = %d", sunN);
    fclose(finresultbin);

    return 0;
}
