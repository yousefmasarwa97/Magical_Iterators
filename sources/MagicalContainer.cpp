#include "MagicalContainer.hpp"

namespace ariel {
    MagicalContainer::MagicalContainer(){}

    MagicalContainer::~MagicalContainer(){}

    void MagicalContainer::addElement(int element) {
        
    }

    void MagicalContainer::removeElement(int element) {
       
    }

    int MagicalContainer::size() const {
        return elements.size();
    }

    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer& magicalContainer)
    :container(magicalContainer) {
       
    }

  
    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator& other)
    :container(other.container){

    }
    MagicalContainer::AscendingIterator::~AscendingIterator(){

    }

    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator:: operator=(const AscendingIterator& other ){
        return *this;
    }
    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator & other)const{
        return false;

    }
    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator & other)const{
        return false;

    }
    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator & other)const{
        return false;

    }
    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator & other)const{
        return false;
    }
    int MagicalContainer::AscendingIterator::operator*() const {
       
        
        return 0;
    }
    MagicalContainer::AscendingIterator & MagicalContainer::AscendingIterator::operator++(){
        return *this;
    }
    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin(){
        return *this;

    }
    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end(){
        return *this;

    }





    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer& magicalContainer)
    :container(magicalContainer) {
     
    }

    

    MagicalContainer::SideCrossIterator::~SideCrossIterator(){

    }
   
    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator & other)const{
        return false;

    }
    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator & other)const{
        return false;

    }
    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator & other)const{
        return false;

    }
    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator & other)const{
        return false;
    }
    int MagicalContainer::SideCrossIterator::operator*() const {
       
      
        return 0;
    }
    MagicalContainer::SideCrossIterator & MagicalContainer::SideCrossIterator::operator++(){
        return *this;
    }
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin(){
        return (*this);

    }
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end(){
        return *this;

    }




    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer& magicalContainer)
    :container(magicalContainer) {
        
    }

    

    
    MagicalContainer::PrimeIterator::~PrimeIterator(){

    }
    
    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other)const{
        return false;

    }
    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other)const{
        return false;

    }
    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other)const{
        return false;

    }
    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator & other)const{
        return false;
    }
    int MagicalContainer::PrimeIterator::operator*() const {
       
       
        return 0;
    }
    MagicalContainer::PrimeIterator & MagicalContainer::PrimeIterator::operator++(){
        return *this;
    }
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin(){
        return *this;

    }
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end(){
        return *this;

    }





}