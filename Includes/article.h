#include <iostream>

#ifndef ARTICLE_H
#define ARTICLE_H

using namespace std;

class Article {

public:
    Article();
    ~Article();

    string nomArticle() const;
    void setNomArticle(const string &nomArticle);

    string auteurArticle() const;
    void setAuteurArticle(const string &auteurArticle);

    virtual void show();

protected :
    string _nomArticle;
    string _auteurArticle;

};

#endif // ARTICLE_H
