#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector <string> hashTable[20];
int hashTableSize = 20;


/**
 * 
 * @param str
 */


 int hashFunc(string str)
 {
     int size = str.length();
     
     int sum=0;
     
     for(int i =0;i<size;i++)
     {
         sum += str[i];
     }
     
     sum %=20;
     return sum;
 }
void insert(string str) {

    int index = hashFunc(str);

    hashTable[index].push_back(str);
}

/**
 * 
 * @param str
 * @return 
 */
void search(string str) {

    int index = hashFunc(str);

    for (int i = 0; i < hashTable[index].size(); i++) {
        if (hashTable[index][i] == str) {
            cout << str << " Found :)\n";
            return;
        }
    }
    cout << str << " Not Found :(\n";
}


int main() {

    int n = 1;
    string str;

    while (n) {

        cout << "Enter 0 to Leave Enter 1 to insert in the Hash 2 to search a string in the Hash\n";
        cin>>n;

        if (n == 1) {
            cout << "Enter String to be inserted\n";
            cin>>str;
            insert(str);
        }
        else if (n == 2) {

            cout << "Enter String to be searched\n";
            cin>>str;
            search(str);
        }
        else if (n != 0) {
            cout << "Wrong Choice!!\n";
        }
    }

}