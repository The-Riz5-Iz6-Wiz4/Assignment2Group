#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class Hashing {

    private:
      static const int hashtableSize = 631;

      typedef struct word {
          string key;
          string definition;
          word *next;
      } *wordPtr;

      wordPtr HashTable[hashtableSize];

    public:
      int hashFunction(string key);
      Hashing();
      void addItem(string word, string def);
      void printWord(int index);
      void searchWord(string word);
      void bucketMax();
      void bucketMin();
};