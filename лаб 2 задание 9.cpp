#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    string input = "пример текста для записи в файл";
    ofstream file("text_data.bin", std::ios::binary);
    file.write(input.c_str(), input.size());
    file.close();

    // Чтение и вывод символов до изменения
    ifstream read_file("text_data.bin", ios::binary);
    string original_text((istreambuf_iterator<char>(read_file)),istreambuf_iterator<char>());
    cout << "Символы до изменения: " << original_text << endl;
    read_file.close();

    // Переписать бинарный файл с символами в верхнем регистре
    ofstream write_file("text_data.bin", ios::binary | ios::out);
    for (char& c : original_text) {
        if (c == 'а') { c = char('А'); }
        if (c == 'б') { c = char('Б'); }
        if (c == 'в') { c = char('В'); }
        if (c == 'г') { c = char('Г'); }
        if (c == 'д') { c = char('Д'); }
        if (c == 'е') { c = char('Е'); }
        if (c == 'ё') { c = char('Ё'); }
        if (c == 'ж') { c = char('Ж'); }
        if (c == 'з') { c = char('З'); }
        if (c == 'и') { c = char('И'); }
        if (c == 'й') { c = char('Й'); }
        if (c == 'к') { c = char('К'); }
        if (c == 'л') { c = char('Л'); }
        if (c == 'м') { c = char('М'); }
        if (c == 'н') { c = char('Н'); }
        if (c == 'о') { c = char('О'); }
        if (c == 'п') { c = char('П'); }
        if (c == 'р') { c = char('Р'); }
        if (c == 'с') { c = char('С'); }
        if (c == 'т') { c = char('Т'); }
        if (c == 'у') { c = char('У'); }
        if (c == 'ф') { c = char('Ф'); }
        if (c == 'х') { c = char('Х'); }
        if (c == 'ц') { c = char('Ц'); }
        if (c == 'ч') { c = char('Ч'); }
        if (c == 'ш') { c = char('Ш'); }
        if (c == 'щ') { c = char('Щ'); }
        if (c == 'ъ') { c = char('Ъ'); }
        if (c == 'ы') { c = char('Ы'); }
        if (c == 'ь') { c = char('Ь'); }
        if (c == 'э') { c = char('Э'); }
        if (c == 'ю') { c = char('Ю'); }
        if (c == 'я') { c = char('Я'); }
        write_file.write(&c, 1);
    }
    write_file.close();

    // Чтение и вывод символов после изменения
    ifstream read_file_upper("text_data.bin", ios::binary);
    string modified_text((istreambuf_iterator<char>(read_file_upper)), istreambuf_iterator<char>());
    cout << "Символы после изменения: " << modified_text << endl;
    read_file_upper.close();

    return 0;
}