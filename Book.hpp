#ifndef BOOK_HPP
#define BOOK_HPP



#include <string>

class Book {
  private:
    std::string title;
    std::string author;
    int pagenumber;
    bool digital;

  public:
    Book();
    Book(std::string title, std::string author, int pagenumber, bool digital = false);
    void setTitle(const std::string& title);
    std::string getTitle() const;
    void setAuthor(const std::string& author);
    std::string getAuthor() const;
    void setPageCount(const int& pagenumber);
    int getPageCount() const;
    void setDigital();
    bool isDigital() const;
#endif
};