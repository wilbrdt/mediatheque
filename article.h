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
};

#endif // ARTICLE_H
