//  Don Vu
//
//  This is a multithreaded sorting application.
//  A file with a list of unsorted numbers is passed
//  into the program. The program then creates two 
//  threads to sort a half of the list each.
//  A third thread then merges the two sorted lists
//  into the sorted list of the original numbers.

#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  if (argc != 2) {
    cerr << "Usage of the program is: " << argv[0]
      << " <file name of unsorted numbers>\n";
  }

  return 0;
}
