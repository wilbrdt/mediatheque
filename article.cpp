#include "Article.h"

using namespace std;

Article::Article() : nomArticle("N/A"), auteurArticle("N/A"){
}

Article::Article(string _nomArticle) : nomArticle(_nomArticle), auteurArticle("N/A"){

}

Article::Article(string nomArticle, string _auteurArticle) : nomArticle(nomArticle), auteurArticle(_auteurArticle){

}

Article::~Article(){

}
