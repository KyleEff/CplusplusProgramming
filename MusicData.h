#ifndef MUSICDATA_H
#define MUSICDATA_H

#include <iostream>
#include <iomanip>

using namespace std;

struct MusicData {

    string
        *title{ nullptr },
        *artist{ nullptr };

    int
        *yearReleased{ nullptr };
    
    double
        *runningTime{ nullptr }; // In minutes
    
    MusicData() {

        title = new string;
        artist = new string;

        yearReleased = new int;

        runningTime = new double;
    }

    MusicData(string title, string artist, int year, double time) {

        this->title = new string;
        this->artist = new string;

        yearReleased = new int;

        runningTime = new double;

        *this->title = title;
        *this->artist = artist;

        *this->yearReleased = year;

        *this->runningTime = time;
    }

    virtual ~MusicData() {

        delete
            title,
            artist,
            yearReleased,
            runningTime;
    }
};

#endif

static void print(const MusicData* song) {

    cout
        << "Music Data\n"

        << fixed
        << setprecision(2)

        << "Title: " << *song->title
        << endl

        << "Artist: " << *song->artist
        << endl

        << "Release Year: " << *song->yearReleased
        << endl
        
        << "Running Time: " << *song->runningTime << " minutes"
        << endl;
}