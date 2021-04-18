#include "MusicData.h"

int main() {

    MusicData
        *song1{ nullptr },
        *song2{ nullptr };
    
    song1 = new MusicData("Back on the Chain Gang", "The Pretenders", 1982, 3.85);
    song2 = new MusicData;

    *song2->title = "Rollin' & Scratchin'";
    *song2->artist = "Daft Punk";
    *song2->yearReleased = 1997;
    *song2->runningTime = 7.43;
    
    print(song1);

    cout << endl;

    print(song2);

    return 0;
}