#include <iostream>

#ifndef ARTICLE_H
#define ARTICLE_H

using namespace std;

class Article {
protected :
    string nomArticle;
    string auteurArticle;

public:
    Article();
    Article(string _nom);
    Article(string _nom, string _auteur);
    ~Article();
    string getNomArticle() const;
    void setNomArticle(const string &value);
    string getAuteurArticle() const;
    void setAuteurArticle(const string &value);
};

#endif // ARTICLE_H
