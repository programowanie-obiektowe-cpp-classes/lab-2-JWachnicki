#pragma once

#include "Resource.hpp"

class ResourceManager
{
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


    
    
    // Sterowanie sekcją private zapobiega wyciekom pamięci
    private:
        Resource* resource;
};
