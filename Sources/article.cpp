#include "../Includes/Article.h"

using namespace std;

string Article::getNomArticle() const
{
    return nomArticle;
}

void Article::setNomArticle(const string &value)
{
    nomArticle = value;
}

string Article::getAuteurArticle() const
{
    return auteurArticle;
}

void Article::setAuteurArticle(const string &value)
{
    auteurArticle = value;
}

Article::Article() : nomArticle("N/A"), auteurArticle("N/A"){
}

Article::Article(string _nomArticle) : nomArticle(_nomArticle), auteurArticle("N/A"){

}

Article::Article(string nomArticle, string _auteurArticle) : nomArticle(nomArticle), auteurArticle(_auteurArticle){

}

Article::~Article(){

}
