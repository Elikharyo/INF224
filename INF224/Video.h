#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <iostream>
#include "Multimedia.h"

class Video : public Multimedia
{
    private:
        // coordinates of the image
        int duration;

    public:
        // constructor
        Video() {duration=0;}
        Video(string _name, string _pathname, int _duration)
        {
            Multimedia(_name, _pathname);
            duration = _duration;
        }

        // destructor
        virtual ~Video() {cout << "Video " << name << " destroyed." << endl;}

        // getters
        double getDuration() const {return duration;}

        // setters
        void setDuration(double _duration) {duration = _duration;}

        // display method
        void write(ostream& destination) const
        {
            Multimedia::write(destination);
            destination << "Duration of video : " << duration << endl;
        }

        // play video
        void play()
        {
            string arg = "mpv " + name + " &";
            system(arg.c_str());
        }
};

#endif // IMAGE_H
