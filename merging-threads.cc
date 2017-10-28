//  Don Vu
//
//  This is a multithreaded sorting application.
//  A file with a list of unsorted numbers is passed
//  into the program. The program then creates two 
//  threads to sort a half of the list each.
//  A third thread then merges the two sorted lists
//  into the sorted list of the original numbers.

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

//  Global array threads access
vector<int> initiallist;
vector<int> firsthalf;
vector<int> secondhalf;
vector<int> sortedlist;

int main (int argc, char *argv[]) {
  if (argc != 2) {
    cerr << "Usage of the program is: " << argv[0]
      << " <file name of unsorted numbers>\n";
  }

  ifstream numlist (argv[1]);
  if (!numlist.is_open()) {
    cerr << "Unable to open file\n";
    return 1;
  }
  
  int getnum;
  while (numlist >> getnum) {
    initiallist.push_back(getnum); 
  }

  numlist.close();

  return 0;
}
