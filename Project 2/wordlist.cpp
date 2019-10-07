/* WordList source file
*
*
*	This file will contain the function definitions you will implement.
*	The function signitures may NOT be changed.  You may create your own
*	helper functions and include them in this file.
*
*	In addition to the specific instructions for each function, no function
*	should cause any memory leaks or alias m_list in any way that would result
*	in undefined behavior. 
*
*	Topics: Multilevel Arrays, Pointers, Dynamic Allocation, Classes
*
*/


// Don't not include any other libraries
#include"wordlist.h"
#include<iostream>
#include<cstring>


using std::cout;
using std::endl;

using std::strcat;
using std::strcmp;
using std::strcpy;
using std::strlen;


/* Function: Wordlist Constructor
*
*	Constructs an empty Wordlist that is allocated enough space to store 
*	max_words many words.  If max_words is less than 1, set m_list to nullptr
*	and the other member variables should be made consitent with this state.  
*/
WordList::WordList(const int max_words) {

	// TODO:
    if (max_words<1){
        m_list = nullptr;
        m_max_words=0;
        m_count = 0;
    } else {
        m_max_words = max_words;
        m_list = new char*[m_max_words];
        for (char i = 0; i < m_max_words; i++) {
            m_list[i] = new char[20];
        }
    }

}


/* Function: Wordlist Copy Constructor
*
*	Constructs a Wordlist that is a copy of an existing WordList
*/
WordList::WordList(const WordList &other) {

	// TODO:
    m_max_words = other.m_max_words;
    m_count= other.m_count;
    
    m_list = new char*[m_max_words];
    for (char i = 0; i < m_max_words; i++) {
        m_list[i] = new char[20];
        m_list[i] = other.m_list[i];
    }
    
}


/* Function: Wordlist Destructor
*
*	Cleans up WordList's dynamically allocated memory.
*/
WordList::~WordList() {

	// TODO:
//    for (char i = 0; i < m_max_words; i++) {
//        delete[] m_list[i];
//    }
    delete[] m_list;

}

/* Function: printList
*
*	Prints all the words in WordList in a single line with spaces between each
*	word, then followed by a newline after the last word. Returns the number 
*	of words printed.  If m_list is nullptr there is nothing to print, return -1. 
*/
int	WordList::printList() const {

	// TODO:
    if (m_list == nullptr){
        return -1;
    }
    
    for (char i = 0; i < m_max_words; i++) {
        if (m_list[i] != nullptr){
            
            cout << m_list[i] << " ";
        }
    }
    cout << endl;
    return m_count;
}



/* Function: getAt
*
*	Returns the word at the index position in the WordList.
*	return nullptr if the index is out of bounds.
*/
char* WordList::getAt(const int index) const {

	// TODO:
    if (index < m_max_words){
        return m_list[index];
    }
	return nullptr;

}


/* Function: getCount
*
*	Returns the number of words currently stored in WordList.
*/
int	WordList::getCount() const {
	// TODO:
	return m_count;

}


/* Function: addWord
*
*	Adds the word into WordList (words have no spaces).  If WordList does not have
*	enough space to add word, addWord will resize with just enough space to allow for 
*	the addition of word. If addWord needed to resize then return 1, otherwise if there 
*	already enough space to add word without resizing, return 0. If word is empty  
*	do nothing return -1. If m_list was nullptr, everything above still holds true except
*	return -2.  
*/
int	WordList::addWord(const char word[]) {
    // TODO:
//    if (strncmp(word, " ", 20))
//         //strncmp(word, " ", 20);
//    return -1;
    if(m_count >= m_max_words){
        m_max_words++;
        
        char** temp = new char*[m_max_words];
        
        for (char i = 0; i < m_max_words; i++) {
            temp[i] = new char[20];
        }
        
        for (int j=0; j<m_max_words-1; j++){
            for (int i=0; i<20; i++){
                temp[j][i] = m_list[j][i];
            }
        }
        for (int i=0; i<20; i++){
            temp[m_max_words-1][i] = word[i];
        }
        for (char i = 0; i < m_max_words-1; i++) {
            delete[] m_list[i];
        }
        delete[] m_list;
        
        m_list = temp;
        m_count++;
        //delete temp;
        return 1;
    } else {
        for (int i=0; i<20; i++){
            m_list[m_count][i] = word[i];
        }
    }

    m_count++;
    
    if (m_list==nullptr)
        return -2;
    return 0;
}


/* Funtion: removeWord
*
*
*	If m_list is nullptr, returns -1.  Otherwise, searches for every
*	occurrence of word[], and removes that word of the list, returns
*	the number of words removed.
*/
int	WordList::removeWord(const char word[]) {

	// TODO:
    if (m_list == nullptr)
        return -1;
    
    int count = 0;
    for (int i =0; i < m_max_words; i++)
        if (strcmp(m_list[i],word)==0){
            count++;
            m_count--;
            delete [] m_list[i];
            m_list[i] = nullptr;
        }
    return count;
}


/* Funtion: appendList
*
*
*	Appends the contents of src_list to the WordList.  If WordList does 
*	not have enough space appendList should dynamically allocate enough space
*	to append the contents of src_list to WordList, returns number of words 
*	appended.  If src_list is nullptr or empty appendList does nothing and 
*	returns -1. If this WordList::m_list is nullptr everything above still 
*	holds but returns -2.
*/
int	WordList::appendLists(const WordList* src_list) {

	// TODO:
    if(src_list == nullptr)
        return -1;
    if (src_list->m_count >=(m_max_words-m_count)){
        
        int total =m_count+src_list->m_count;
        char** temp = new char*[total];
        
        for (char i = 0; i < total; i++) {
            temp[i] = new char[20];
        }
        
        for (int j=0; j<m_max_words-1; j++){
            for (int i=0; i<20; i++){
                temp[j][i] = m_list[j][i];
            }
        }
        
        for (int i=0; i<20; i++){
            *temp[m_max_words-1] = *src_list->getAt(i);
        }
        for (char i = 0; i < m_max_words-1; i++) {
            delete[] m_list[i];
        }
        delete[] m_list;
        
        m_list = temp;
        m_count = total;
        
        //create  a new array with sapace
        //copy info over like in add word
        //delete new pointer
        //return the num of newly added spaces
        return (m_count - m_max_words);
    } else {
        
        for (int i=0; i<20; i++){
            *m_list[m_count] = *src_list->getAt(i);
            m_count++;
        }
        if ( m_count==src_list->m_count)
            return -2;
//        if (0)
//            return -1;
    }
    
	return -2;

}


/* Funtion: findWord
*
*	Finds the first occurrence of the word in the WordList
*	returns the position of that word in the list.  Otherwise, 
*	if the word is not in the WordList or if m_list is nullptr
*	return -1. 
*/
int WordList::findWord(const char word[]) const {

	// TODO:
    if (m_list != nullptr){
        int count = 0;
        for (int i =0; i < m_max_words; i++){
            count++;
            if (strcmp(m_list[i],word)==0){
                return count;
            }
        }
    }
	return -1;
}


/* Funtion: sortList
*
*	If m_list is nullptr return -1.  If there is only one word
*	in the list return 1.  Otherwise, sortList sorts the
*	words in WordList in ascending order.  Returns 0 on
*	success.
*/
int	WordList::sortList() {

	// TODO:
    if ( m_list == nullptr)
        return -1;
    if(m_count == 1)
        return 1;
    int index = 1;
    for (int i = 0; i<m_max_words;i++){
        if (strcmp(m_list[m_max_words-index],m_list[i]) > 0){
            }else{
                //for (int j = 0; j < m_max_words; j++){
                char *temp = m_list[m_max_words-index];
                m_list[m_max_words-index] = m_list[i];
                m_list[i] = temp;
        }

    }
//     for (int i = 0; i<m_max_words;i++){
//    if (strcmp(m_list[m_max_words-1],m_list[i]) < 0){
//        char *temp = m_list[m_max_words-1];
//        m_list[m_max_words-1] = m_list[i];
//        m_list[i] = temp;
//    }}
    
    return 0;

}


//*m_list[i] = *temp;
//            char *temp = m_list[m_max_words-1];
//            *m_list[m_max_words-1] = *m_list[i];
//            *m_list[i] = *temp;

/* Funtion: Assignment Operator
*
*	Overload the assignment operator for WordList.  Makes a deep 
*	copy from src_list to this WordList.  
*/
WordList& WordList::operator=(const WordList &src_list) {

	// TODO:
    if (this == &src_list)
        return *this;
    
    for (char i = 0; i < m_max_words; i++) {
        delete[] m_list[i];
    }
    delete[] m_list;
    
    
    m_max_words = src_list.m_max_words;
    m_count= src_list.m_count;
    
    m_list = new char*[m_max_words];
    for (char i = 0; i < m_max_words; i++) {
        m_list[i] = new char[20];
        m_list[i] = src_list.m_list[i];
    }
	return *this;
}
