#include <iostream>
#include "Book.hpp"

Book::Book()
    : title(""), author(""), pagenumber(0), digital(false) {}

Book::Book(std::string const title, std::string const author, const int pagenumber, bool digital)
    : title(title), author(author), pagenumber(pagenumber), digital(digital) {}

void Book::setTitle (const std::string& title) 
{ this->title = title; }
std::string Book::getTitle() const
{ return title; }
void Book::setAuthor(const std::string& author) 
{ this->author = author; }
std::string Book::getAuthor() const 
{ return author; }
void Book::setPageCount(const int& pagenumber)  
{ 
  if  (pagenumber > 0) {
     this->pagenumber = pagenumber;
    
  }
   }
int Book::getPageCount() const
{ return pagenumber; }
void Book::setDigital() 
{ this->digital = true; } 
  bool Book::isDigital() const 
{ return digital; }
  
  
 /**
      Default constructor.
      Default-initializes all private members. Booleans are default-initialized to False.
   */


   /**
      Parameterized constructor.
      @param      : The title of the book (a string)
      @param      : The author of the book (a string)
      @param      : The number of pages in the book (a positive int)
      @param      : A flag indicating whether the book is in digital form (a Boolean),
                    with default value False
      @post       : The private members are set to the values of the corresponding parameters.
    */
/**
   @param  : the title of the Book
   @post   : sets the Book's title to the value of the parameter
 */
 //setTitle


 /**
     @return : the title of the Book
  */
 //getTitle


  /**
    @param  : the name of the author of the Book
    @post   : sets the Book's author to the value of the parameter
  */
 //setAuthor


  /**
      @return : the author of the Book
   */
 //getAuthor


  /**
    @param  : a positive integer page count
    @pre    : page count > 0 - books cannot have a negative number of pages
    @post   : sets the page count to the value of the parameter
  */
 // setPageCount


  /**
      @return : the page count
   */
 // getPageCount



  /**
   @post   : sets the digital flag to true
  */
 // setDigital


   /**
    @return true if the book is available in digital form, false otherwise

  Note: this is an accessor function and must follow the same convention as all accessor functions even if it is not called getDigital
   */
   // isDigital

