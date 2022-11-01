#pragma once

#include "Resource.hpp"

class ResourceManager
{
    ResourceManager() //Inicjalizacja Resource
    {
        resource = new Resource;
    }
    
    
    // Sterowanie z sekcji private zapobiega wyciekom pamięci
    private:
        Resource* resource;
};
