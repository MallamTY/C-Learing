#ifndef LANGUAGETRANSLATOR_H
#define LANGUAGETRANSLATOR_H


#include <iostream>
#include <string>
#include <map>
using namespace std;


class LanguageTranslator {
    private:
        map<string, string> translationsKnowledgeBase;
    public:
        void addTranslation(const string& englishWord, const string& translatedWord);
        string getTranslations(const string& englishWord) const;
        void printAllTranslations() const;
};

#endif