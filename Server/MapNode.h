#ifndef UNTITLED4_MAPNODE_H
#define UNTITLED4_MAPNODE_H

#include <iostream>

/**
 * MapNode se encarga de administrar la información en la Memoriax
 */
class MapNode {
private:
    std::string ID;
    int offset;
    std::string tipo;
public:
    void asignarValores(std::string ID, int offset, std::string tipo);

public:
    const std::string &getID() const;

    void setID(const std::string &ID);

    int getOffset() const;

    void setOffset(int offset);

    const std::string &getTipo() const;

    void setTipo(const std::string &tipo);

};


#endif //UNTITLED4_MAPNODE_H
