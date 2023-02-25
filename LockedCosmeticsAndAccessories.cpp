#ifndef SIM_LOCKED_APPEARANCE_H
#define SIM_LOCKED_APPEARANCE_H

#include <string>
#include <vector>

class Hair;
class Makeup;
class Accessory;
class Nails;
class OutfitType;

class Sim {
private:
    std::string name;
    Hair* hair;
    Makeup* makeup;
    std::vector<Accessory*> accessories;
    Nails* nails;
    std::vector<OutfitType*> outfitTypes;

public:
    Sim(std::string name);

    void lockAppearanceForOutfitType(OutfitType* outfitType, Hair* hair, Makeup* makeup, std::vector<Accessory*> accessories, Nails* nails);
    void unlockAppearanceForOutfitType(OutfitType* outfitType);

    Hair* getHairForOutfitType(OutfitType* outfitType);
    Makeup* getMakeupForOutfitType(OutfitType* outfitType);
    std::vector<Accessory*> getAccessoriesForOutfitType(OutfitType* outfitType);
    Nails* getNailsForOutfitType(OutfitType* outfitType);
};

class Hair {
private:
    std::string style;

public:
    Hair(std::string style);
    std::string getStyle();
};

class Makeup {
private:
    std::string style;

public:
    Makeup(std::string style);
    std::string getStyle();
};

class Accessory {
private:
    std::string type;
    std::string style;

public:
    Accessory(std::string type, std::string style);
    std::string getType();
    std::string getStyle();
};

class Nails {
private:
    std::string style;

public:
    Nails(std::string style);
    std::string getStyle();
};

class OutfitType {
private:
    std::string type;
    Hair* lockedHair;
    Makeup* lockedMakeup;
    std::vector<Accessory*> lockedAccessories;
    Nails* lockedNails;

public:
    OutfitType(std::string type);
    std::string getType();

    void setLockedAppearance(Hair* hair, Makeup* makeup, std::vector<Accessory*> accessories, Nails* nails);
    void resetAppearance();

    Hair* getLockedHair();
    Makeup* getLockedMakeup();
    std::vector<Accessory*> getLockedAccessories();
    Nails* getLockedNails();
};

#endif /* SIM_LOCKED_APPEARANCE_H */
