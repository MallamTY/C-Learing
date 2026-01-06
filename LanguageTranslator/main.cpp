#include <iostream>
#include "LanguageTranslator.h"
#include <string>

using namespace std;

void printMenu();
void handleAddTranslation(LanguageTranslator& translator);
void handleTranslationLookup(const LanguageTranslator& translator);
int main() {
    LanguageTranslator translator;
    int choice;

    printMenu();
    cin >> choice;
    cin.ignore(); // To ignore the newline character after the integer input

    while (choice != 0)
    {
        if (choice == 1)
        {
            handleAddTranslation(translator);
        }
        else if (choice == 2)
        {
            handleTranslationLookup(translator);
        }
        else if (choice == 3)
        {
            cout << "All Translations: " << endl;
            translator.printAllTranslations();
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
        printMenu();
        cin >> choice;
        cin.ignore();
    }
    
    return 0;
}

void printMenu(){
    cout << "Language Translator Menu:" << endl;
    cout << "1. Add Translation" << endl;
    cout << "2. Lookup Translation" << endl;
    cout << "3. Print All Translations" << endl;
    cout << "0. Exit" << endl;
}
void handleAddTranslation(LanguageTranslator& translator){
    string englishWord, translatedWord;
    cout << "Enter English Word: ";
    getline(cin, englishWord);
    cout << "Enter Translated Word: ";
    getline(cin, translatedWord);
    translator.addTranslation(englishWord, translatedWord);
}
void handleTranslationLookup(const LanguageTranslator& translator){
    string word;
    cout << "Enter English Word to Lookup: ";
    getline(cin, word);
    cout << "Translation: " << translator.getTranslations(word) << endl;
}