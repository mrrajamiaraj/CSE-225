#include"sorted.h"

template<class t>
sorted<t>::sorted(){
    length =0;
    currentpos = -1;
}

template<class t>
void sorted<t>::makeempty(){
    length =0;
}

template<class t>
void sorted<t>::resetlist(){
    currentpos =-1;
}

template<class t>
bool sorted<t>::isfull(){
    return (length==MAX);
}

template<class t>
int sorted<t>::lengthis(){
    return length;
}

template<class t>
void sorted<t>::getnext(t &item){
    currentpos++;
    item = array[currentpos];
}

template<class t>
void sorted<t>::insert(t item){
    int location =0;
    while(location<length){
        if(item>array[location])
        location++;
        else if(item<array[location]){
            break;
        }
        
    }
    for(int index=length;index>location;index--){
        array [index]=array[index-1];
    }
    array[location]= item;
    length++;
}

template<class t>
void sorted<t>::delet(t item){
    int location =0;
    while(item!=array[location]){
        location++;
    }
    for(int index=location+1;index<length;index++){
        array[index-1]=array[index];
    }
    length--;
}
template<class t>
void sorted<t>::retrive(t& item, bool& found){
    int midpoint;
    found = false;
    int first =0;
    int last = length -1;
    

    while(first<=last && !found){
        midpoint=(first+last)/2;
        if(item>array[midpoint]){
            first = midpoint+1;
        }
        else if(item<array[midpoint]){
            last= midpoint-1;
        }
        else
        {
            found =true;
            item = array[midpoint];
        }
    }
}
