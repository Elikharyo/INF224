#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

#include <string>
#include <iostream>

using namespace std;

class Multimedia
{
    protected:
        // instance variables
        string name;
        string pathname;

    public:
        // constructors
        Multimedia();
        Multimedia(string _name, string _pathname);

        // destructor
        virtual ~Multimedia();

        // getters
        string getName() const;
        string getPathname() const;

        // setters
        void setName(string _name);
        void setPathname(string _pathname);

        // to display values of variables
        void write(ostream& destination) const;

        // show instance : abstract method
        virtual void play() = 0;
};

#endif // MULTIMEDIA_H
