#include <iostream>
#include <iomanip>

using namespace std;

// 1. Movie Data
// 2. Add two additional members productionCosts and firstYearRevenues
struct MovieData {

    string
        *title{ nullptr },
        *director{ nullptr };

    short int
        *releaseYear{ nullptr },
        *runningTime{ nullptr };

    float
        *productionCosts{ nullptr },
        *boxOfficeRevenue{ nullptr };

    MovieData() {

        title = new string;
        director = new string;

        releaseYear = new short int;
        runningTime = new short int;

        productionCosts = new float;
        boxOfficeRevenue = new float;
    }

    ~MovieData() {

        delete 
            title,
            director,
            releaseYear,
            runningTime;
    }
};

void print(const MovieData* movie) {

    cout

        << fixed
        << setprecision(2)

        << "Title: " << *movie->title
        << endl

        << "Director: " << *movie->director
        << endl

        << "Release Year: " << *movie->releaseYear
        << endl

        << "Running Time: "
        << *movie->runningTime << " minutes"
        << endl
        
        << "Profit/Loss: $"
        << *movie->boxOfficeRevenue - *movie->productionCosts
        << endl;
}

int main()  {

    MovieData 
        *movie1{ nullptr },
        *movie2{ nullptr };

    movie1 = new MovieData;
    movie2 = new MovieData;

    *movie1->title = "Saving Private Ryan";
    *movie1->director = "Steven Speilberg";
    *movie1->releaseYear = 1998;
    *movie1->runningTime = 169;
    *movie1->productionCosts = 65000000;
    *movie1->boxOfficeRevenue = 482300000;

    *movie2->title = "Fargo";
    *movie2->director = "Ethan and Joel Cohen";
    *movie2->releaseYear = 1996;
    *movie2->runningTime = 98;
    *movie2->productionCosts = 7000000;
    *movie2->boxOfficeRevenue = 60600000;

    print(movie1);
    cout << endl;
    print(movie2);

    return 0;
}
/*
// 3. Inventory Class
class Inventory {

    int
        *itemNumber{ nullptr },
        *quantity{ nullptr };
    
    double 
        *cost{ nullptr },
        *totalCost{ nullptr };

public:

    Inventory() {

        itemNumber  = new int;
        quantity = new int;

        cost = new double;
        totalCost = new double;
    }

    Inventory(int itemNumber, int quantity, double cost) {

        if (itemNumber > 0 &&
            quantity > 0 &&
            cost > 0) {

            this->itemNumber  = new int;
            this->quantity = new int;
            this->cost = new double;

            this->itemNumber = &itemNumber;
            this->quantity = &quantity;
            this->cost = &cost;

            totalCost = new double;
            setTotalCost();
        }
        else
            cout << "ERROR" << endl;
    }

    ~Inventory() {

        delete
            itemNumber,
            quantity,
            cost,
            totalCost;
    }

    void setItemNumber(int itemNumber)
        {this->itemNumber = &itemNumber;}

    void setQuantity(int quantity)
        {this->quantity = &quantity;}

    void setCost(double cost)
        {this->cost = &cost;}

    void setTotalCost()
        {*this->totalCost = (*quantity) * (*cost);}

    int getItemNumber()
        {return *itemNumber;}

    int getQuantity()
        {return *quantity;}

    double getCost()
        {return *cost;}

    double getTotalCost()
        {return *totalCost;}

};

int main() {

    Inventory* myInv = new Inventory(54, 5, 12.00);

    cout

        << myInv->getItemNumber()
        << endl

        << myInv->getQuantity()
        << endl

        << myInv->getCost()
        << endl

        << myInv->getTotalCost()
        << endl;

    delete myInv;

    return 0;
}
*/