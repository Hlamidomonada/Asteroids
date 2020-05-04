#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP
// константы так и остались глобальными
auto W = sf::VideoMode::getDesktopMode().width;
auto H =sf::VideoMode::getDesktopMode().height; // как эти строки работают, если даже нет нужного хедера?

float DEGTORAD = 0.017453f; // имя константы выглядит как имя макроса
#endif
