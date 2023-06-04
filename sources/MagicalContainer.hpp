#pragma once

#include <vector>

using namespace std;

namespace ariel {
    class MagicalContainer{
        private:
        vector<int> elements;

        public:
        ~MagicalContainer();
        MagicalContainer();
       


        void addElement(int);
        void removeElement(int);
        int size() const;
        // vector<int> getElements() const;

        class AscendingIterator{
            private:
           
            MagicalContainer &container;

            public:
            AscendingIterator();
            ~AscendingIterator();
            AscendingIterator operator&(AscendingIterator &&) = delete;
            AscendingIterator(MagicalContainer& container);
            AscendingIterator(const AscendingIterator&);
            


            AscendingIterator &operator=(const AscendingIterator& );
            bool operator==(const AscendingIterator&)const;
            bool operator!=(const AscendingIterator&)const;
            bool operator>(const AscendingIterator&)const;
            bool operator<(const AscendingIterator&)const;
            int operator*() const;

            AscendingIterator &operator++();

            AscendingIterator begin();
            AscendingIterator end();

      




        };

        class SideCrossIterator{
            private:
            
            MagicalContainer &container;


            public:
            SideCrossIterator(MagicalContainer& container);
            SideCrossIterator();
            
            ~SideCrossIterator();


            
            bool operator==(const SideCrossIterator&)const;
            bool operator!=(const SideCrossIterator&)const;
            bool operator>(const SideCrossIterator&)const;
            bool operator<(const SideCrossIterator&)const;
            int operator*() const;

            SideCrossIterator& operator++();

            SideCrossIterator begin();
            SideCrossIterator end();

           
            SideCrossIterator operator&(SideCrossIterator &&) = delete;
        };

        
        class PrimeIterator{
            private:
            
            MagicalContainer &container;


            public:
            PrimeIterator(MagicalContainer& container);
            PrimeIterator();
            ~PrimeIterator();


        
            bool operator==(const PrimeIterator&)const;
            bool operator!=(const PrimeIterator&)const;
            bool operator>(const PrimeIterator&)const;
            bool operator<(const PrimeIterator&)const;
            int operator*() const;

            PrimeIterator& operator++();

            PrimeIterator begin();
            PrimeIterator end();

          
            PrimeIterator operator&(PrimeIterator &&) = delete;
        };

    };
    

}