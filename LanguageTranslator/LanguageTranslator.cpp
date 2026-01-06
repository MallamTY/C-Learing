#include "LanguageTranslator.h"
#include <iostream>



void LanguageTranslator::addTranslation(const string& englishWord, const string& translatedWord) {
    translationsKnowledgeBase[englishWord] = translatedWord;
};
string LanguageTranslator::getTranslations(const string& englishWord) const {
    auto it = translationsKnowledgeBase.find(englishWord);
    if (it != translationsKnowledgeBase.end())
    {
        return it->second;
    }
    else {
        return "NOT FOUND";
    }
    
};
void LanguageTranslator::printAllTranslations() const {
    for (const auto& pair : translationsKnowledgeBase)
    {
        cout << pair.first << "->" << pair.second << endl;
    }
    
}