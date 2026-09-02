#include <iostream>
#include <string>
using namespace std;

// Base class
class pwn
{
protected:
    string title;
    float rating;

public:
    pwn(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0;//do-nothing function --> pure vrtual function
};

// Derived class for video
class pwnvideolength : public pwn
{
    float videolength;

public:
    pwnvideolength(string s, float r, float vl) : pwn(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title: " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videolength << " minutes" << endl;
    }
};

// Derived class for text tutorial
class pwntext : public pwn
{
    int words;

public:
    pwntext(string s, float r, int wc) : pwn(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title: " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars" << endl;
        cout << "Number of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    // Video object
    string title = "Django Tutorial Video";
    float rating = 4.89;
    float vlen = 4.56;
    pwnvideolength djvideo(title, rating, vlen);
    //djvideo.display();

    cout << endl;

    // Text tutorial object
    string textTitle = "Django Tutorial Text";
    float textRating = 4.5;
    int words = 1200;
    pwntext djtext(textTitle, textRating, words);
    djtext.display();

    pwn* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();    
      
    return 0;
}
