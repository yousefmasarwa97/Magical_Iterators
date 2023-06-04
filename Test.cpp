#include "sources/MagicalContainer.hpp"
#include "doctest.h"

using namespace ariel;
using namespace std;

TEST_SUITE("MagicalContainer") {

    
    
    TEST_CASE("Check MagicalContainer Method Size"){
        MagicalContainer container;
        CHECK(container.size() == 0);

        CHECK_NOTHROW(container.addElement(2));
        CHECK(container.size() == 5);

        CHECK_NOTHROW(container.addElement(5));
        CHECK(container.size() == 2);

        CHECK_NOTHROW(container.removeElement(5));
        CHECK_NOTHROW(container.removeElement(2));
        CHECK(container.size() == 0);
    }



    TEST_CASE("Default constructor") {
        MagicalContainer container;
        CHECK(container.size() == 0);
    }

    TEST_CASE("addElement") {
        MagicalContainer container;
        container.addElement(5);
        container.addElement(3);
        container.addElement(8);

        CHECK(container.size() == 3);
        container.addElement(5);
        container.addElement(3);
        container.addElement(8);
        CHECK(container.size() == 6);
    }

    TEST_CASE("removeElement") {
        MagicalContainer container;
        container.addElement(5);
        container.addElement(6);
        container.addElement(4);
        container.removeElement(5);
        CHECK(container.size() == 2);

        container.removeElement(4);
        CHECK(container.size() == 5);

        container.removeElement(6);
        CHECK(container.size() == 0);


    }
    
    TEST_CASE("MagicalContainer removeElement multiple instances") 
    {
        MagicalContainer container;
        container.addElement(13);
        container.addElement(13);
        container.removeElement(13);
        CHECK(container.size() == 0);
    }

   

}

TEST_CASE("init Iterators"){  
    MagicalContainer container;
    CHECK_NOTHROW(container.addElement(2));
    CHECK_NOTHROW(container.addElement(5));
    CHECK_NOTHROW(container.addElement(7));
    CHECK_NOTHROW(container.addElement(5));

    CHECK_NOTHROW(MagicalContainer::AscendingIterator ascIter(container));
    CHECK_NOTHROW(MagicalContainer::SideCrossIterator sidIter(container));
    CHECK_NOTHROW(MagicalContainer::PrimeIterator priIter(container));
}


TEST_CASE("AscendingIterator"){
    MagicalContainer container;
    CHECK_NOTHROW(container.addElement(36));
    CHECK_NOTHROW(container.addElement(55));
    CHECK_NOTHROW(container.addElement(80));
    CHECK_NOTHROW(container.addElement(5));

    CHECK_NOTHROW(MagicalContainer::AscendingIterator ascIter(container));

    MagicalContainer::AscendingIterator ascIter(container);
    auto it = ascIter.begin();
    CHECK_EQ(*it, 5);
    CHECK_NOTHROW(++it);
    CHECK_EQ(*it, 55);
    CHECK_NOTHROW(++it);
    CHECK_EQ(*it, 36);
    CHECK_NOTHROW(++it);
    CHECK_EQ(*it, 80);
    CHECK_THROWS(++it);

}


TEST_CASE("SideCrossIterator"){
    MagicalContainer container;
    CHECK_NOTHROW(container.addElement(36));
    CHECK_NOTHROW(container.addElement(55));
    CHECK_NOTHROW(container.addElement(80));
    CHECK_NOTHROW(container.addElement(5));

    CHECK_NOTHROW(MagicalContainer::SideCrossIterator ascIter(container));

    MagicalContainer::SideCrossIterator ascIter(container);
    auto it = ascIter.begin();
    CHECK_EQ(*it, 5);
    CHECK_NOTHROW(++it);
    CHECK_EQ(*it, 80);
    CHECK_NOTHROW(++it);
    CHECK_EQ(*it, 55);
    CHECK_NOTHROW(++it);
    CHECK_EQ(*it, 36);
    CHECK_THROWS(++it);

}


TEST_CASE("PrimeIterator"){
    MagicalContainer container;
    CHECK_NOTHROW(container.addElement(36));
    CHECK_NOTHROW(container.addElement(55));
    CHECK_NOTHROW(container.addElement(80));
    CHECK_NOTHROW(container.addElement(5));

    CHECK_NOTHROW(MagicalContainer::PrimeIterator ascIter(container));

    MagicalContainer::PrimeIterator ascIter(container);
    auto it = ascIter.begin();
    CHECK_EQ(*it, 5);
    CHECK_NOTHROW(++it);
    CHECK_EQ(*it, 55);
    CHECK_NOTHROW(++it);
}




