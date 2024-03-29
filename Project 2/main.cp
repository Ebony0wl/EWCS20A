/* Project 2 main
*
*	Do not submit this file
*
*/

#include<iostream>
#include<cstring>
#include<assert.h>
using std::cout;
using std::endl;

using std::strcat;
using std::strcmp;
using std::strcpy;
using std::strlen;



/* Main functions
*
*	you may make any changes you want to main to test your functions.
*	We will be using our own to grade.
*
*	I'm using preprocessor directives to layout different mains to test
*	various functions.  I have 6 example tests.  You can add or replace, 
*	these are here just to illustrate the technique. Cleaner than 
*	commenting/uncommenting blocks of code.
*
*/

// Choose which test to compile
//#define TEST4 //TEST1 TEST2 TEST3 TEST4



#ifdef TEST0 

// Uncomment this to make the WordList member variables public
//#define MAKE_MEMBERS_PUBLIC
#include"wordlist.h"

int main() {

	WordList *wordlist = new WordList(5);

	cout << "Hello World" << endl;

	return 0;
}

#elif defined TEST1  //Test constructor 


//#define MAKE_MEMBERS_PUBLIC
#include"wordlist.h"

int main() {

	WordList *wordlist = new WordList(5);

	// Assuming we made our member variables public:
	cout << "Count: " << wordlist->m_count << endl; // Expect 0

	cout << "Capacity: " << wordlist->m_max_words << endl; // Expect 5


	return 0;
} 
#elif defined TEST2 


//#define MAKE_MEMBERS_PUBLIC
#include"wordlist.h"

// Same as above but using asserts instead of cout
//
// asserts are a way to check conditions, they will gracefully crash
// the program if the condition is not met.  
//
// This assumes you know what the end state after the function call
// should be.  Effective programmers have in mind test cases prior to 
// implmentation.  You should know what the end state should be after
// any function call.
int main() {
	WordList *wordlist = new WordList(5);

	// Assuming we made our member variables public:
	// If we failed to set our member variables correctly 
	// These assertions will fail
	assert(wordlist->m_count == 0);
	assert(wordlist->m_max_words == 5);
	

	return 0;
}
#elif defined TEST3


#define MAKE_MEMBERS_PUBLIC
#include"wordlist.h"

// Test addWord: Both Constructor and addWord must be
// implmented prior to running this code, otherwise
// it will crash.
int main() {
	WordList *wordlist = new WordList(5);
	wordlist->addWord("harry");
	wordlist->addWord("ron");
	wordlist->addWord("hermione");

	// Assuming we made our member variables public:
	cout  << wordlist->m_list[0][2] << endl; // Expect 'r'

	cout  << wordlist->m_list[1] << endl; // Expect "ron"

	return 0;
}

#elif defined TEST4

#define MAKE_MEMBERS_PUBLIC
#include"wordlist.h"

// Test addWord: same as TEST3 but with asserts. Both Constructor and addWord 
// must be implmented prior to running this code, otherwise it will crash.
int main() {

	WordList *wordlist = new WordList(5);
	wordlist->addWord("harry");
	wordlist->addWord("ron");
	wordlist->addWord("hermione");
	
	// Assuming we made our member variables public:
	assert(wordlist->m_list[0][2] == 'r' ); // Individual character, can use == 

	assert(strcmp(wordlist->m_list[1], "ron") == 0); // cstring, must use strcmp
	
	return 0;
}
#else


#define MAKE_MEMBERS_PUBLIC
#include"wordlist.h"

// Test: printList(): Constructor, addWord, printList must be implmented prior to 
// running this code, otherwise it will crash.
int main() {

//    WordList *wordlist = new WordList(2);
//    wordlist->addWord("harry");
//    wordlist->addWord("ron");
//    wordlist->addWord("hermione");
//    wordlist->sortList();
//    wordlist->printList();

    WordList neverwhere(5);
    neverwhere.addWord("Richard"); neverwhere.addWord("Door");  neverwhere.addWord("Carabas"); neverwhere.addWord("Islington"); neverwhere.addWord("Abbot"); neverwhere.sortList(); 
    neverwhere.printList();
    
    return 0;
}

#endif
