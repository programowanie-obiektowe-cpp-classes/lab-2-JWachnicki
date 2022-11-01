#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    // Te 5 metod to chyba konstruktory, destruktor i kopiujący operator przypisania
    ResourceManager() //Inicjalizacja Resource
    {
        resource = new Resource;
    }

    ~ResourceManager()
    {
        delete resource;
    }

    ResourceManager(const ResourceManager& Kopia)//Konstruktor kopiujący tak jak na zajęciach
    {
        resource = new Resource{Kopia.resource};
    }

    //Od teraz jest cokolwiek za jakiekolwiek punkty

    //Kopiujący operator przypisania 
    //To na dole wykomentowane jest dobrze bo to z zajęć
    /*ResourceManager& operator=(const ResourceManager& AAA)
    {
        return *this;
    }*/

    ResourceManager& operator=(const ResourceManager& AAA)
    {
        return *this;
    }
    
    //Konstruktor przenoszący
    ResourceManager(ResourceManager&& BBB)
    {
        resource = BBB.resource;
        BBB.resource = nullptr; //nullprt to takie NULL w C++ 
    }

    ResourceManager& operator(ResourceManager&& CCC)
    {
        delete resource; //W jakimś kodzie w internecie było - nie wiem czy potrzebne
        resource = CCC.resource;
        CCC.resource = nullptr;
        return *this;
    }

    //Getter
    double get()
    {
        return resource->get();
    }

    // Sterowanie sekcją private zapobiega wyciekom pamięci
    private:
        Resource* resource;
};
