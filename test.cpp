// c++ program to explain
// Encapsulation
 
#include "test.h"
using namespace std;
 
class Encapsulation
{
    private:
        // data hidden from outside world
        int x;
         
    public:
        // function to set value of 
        // variable x
        void set(int a)
        {
            x =a;
        }
         
        // function to return value of
        // variable x
        int get()
        {
            return x;
        }
};

// Returns characters that needs to be added
// to make str
string missingChars(string str)
{
    // A boolean array to store characters
    // present in string.
    bool present[MAX_CHAR] = {false};
 
    // Traverse string and mark characters
    // present in string.
    for (int i=0; i<str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            present[str[i]-'a'] = true;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            present[str[i]-'A'] = true;
    }
 
    // Store missing characters in alphabetic
    // order.
    string res = "";
    for (int i=0; i<MAX_CHAR; i++)
        if (present[i] == false)
            res.push_back((char)(i+'a'));
 
    return res;
}

// main function
int main()
{
    Encapsulation obj;
    string str = "The quick brown fox jumps "
                 "over the dog";
    cout << missingChars(str);
    obj.set(5);
     
    cout<<obj.get();
    return 0;
}
