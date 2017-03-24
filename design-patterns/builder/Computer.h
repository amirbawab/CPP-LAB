#pragma once

#include <string>
#include <iostream>

class Computer {
private:
    std::string cpu;
    std::string videocard;
    std::string screen;
    std::string keyboard;
public:
    void setCPU(std::string cpu) {
        this->cpu = cpu;
    }
    
    void setVideoCard(std::string videocard) {
        this->videocard = videocard;
    }

    void setScreen(std::string screen) {
        this->screen = screen;
    }

    void setKeyboard(std::string keyboard) {
        this->keyboard = keyboard;
    }

    friend std::ostream & operator<<(std::ostream& str, const Computer & computer) {
        str << "Computer specs:\r\n";
        str << "CPU: " << computer.cpu << std::endl;
        str << "Video card: " << computer.videocard << std::endl;
        str << "Screen: " << computer.screen << std::endl;
        str << "Keyboard" << computer.keyboard << std::endl;
        return str;
    }
};