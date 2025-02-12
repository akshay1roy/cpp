
// STL standard template libary 

/*

    1
     Container:- containaer can be described as the objects that hold the data of the same 
    type. container are user to implement data structure for example arrays,list , trees etc;

        list of few Containers:-

        Vector
        list 
        set 
        multiset
        map 
        multimap
        stack
        queue
        priority queue



    Classification of Conainter
    
    1 sequence conatainer   -> vector, deque, list
    2 Associative container -> set, multiset,map, multimap
    3 Derived container     -> stack,queue,priority_queue



    2 
    Iterator

    iterator are pointer like entities used to acces the individual elements int a container.

    Iterators are moved squentially from one elements to another . This process is know as iterating through a conainter.


    3
    Algorithms
    Algorithms are the function used across a varity of contaienr for processing its contents


    Algorithm are not the memeber function of a contaienr , but they are the standalon tamplate fucntions.

    Algorithm save a lot of time and effort.

    if we wants to access the STL algorithms ,we must include the <algorithm> header file in our program.




    //------------------------------------------------------//

    Function objects;

    the stl includes classes that overlaod the function call operator., instance of such classes
    are called function objhects or functors . Functors allows the working of the associated function to be customized with the hep of parameters to be passed.


    The c++ standard libary uses function objects primaril as sorting ceiteria for container and in algorithms


    Function objects provide two main advantages over a straight function call. the first is that a fucntion object can contain state. the second
    is that a fucntion object is type and therefor can be used as a tamplate parameters.



    //----------------------------------------------------------//



    Array class in c++


    Array class knows its own size, whereas C-style arrays lack this property. so when passing to functions , we don't need to pass size of Array as a separate parameters


    Arrya classes are generally more efficient , light-weight and reliable than C-style arrays.


    operation on array

    at() -> This functions is used to access the elments of array.

    get()-> This fucntion is also used to access the elements of array. This function is not the memeber of array class but overloaded fucntion from class tuple.


    operator()-> this is similar to C-style arrays. This method is also used to access array elements 

    front()-> this returns the first elements of array

    back()-> this returns the last elements of array

    size()-> it returns the number of elements in arrays.

    

 */