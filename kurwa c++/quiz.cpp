#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream plik("quiz.txt");
    string text;
    string a;
    string b;
    int punkty = 0;
        while (getline (plik, text)) 
            {
            b = text[0];
                if (b=="[") 
                        {
                            cout <<"-------------"<< endl;
                            cout << text.substr(1)<< endl;
                            cout <<"-------------"<< endl;
                        }
                else if (b==")") 
                        {
                            cout << text.substr(1)<<endl;
                        }
                else 
                        {
                            cout << "Podaj odpowiedz: "<< endl;
                            b=text[1];
                            do 
                                {
                                    cin>>a;
                                    if (a==b)
                                        {
                                            punkty++;
                                        }
                                }
                            while (a!="a" && a!="b" && a!="c" && a!="d");
                            cout << endl;
                        }
            }
    cout << "Ilosc punktow: "<< punkty << "/4" << endl;
    return 0;
}