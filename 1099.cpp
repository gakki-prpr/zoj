#include <iostream>
#include <string>

using namespace std;

int main()
{
    int char_count = 0;

    string input;
    while(cin >> input){
        if(input.compare("<br>") == 0){
            cout << endl;
            char_count = 0;
        }
        else if(input.compare("<hr>") == 0){
            if(char_count != 0){
                cout << endl;
            }
            for(int i = 0; i < 80; i++)
                cout << '-';
            cout << endl;
            char_count = 0;
        }
        else{
            if(char_count == 0){
                cout << input;
                char_count = input.size();
            }
            else if(char_count + input.size() < 80){
                cout << " " << input;
                char_count += (1 + input.size());
            }
            else{
                cout << endl << input;
                char_count = input.size();
            }
        }
    }
    cout << endl;
    return 0;
}
