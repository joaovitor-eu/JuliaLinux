#include <stdio.h>
#include <stdlib.h>

int main(){
    system("sudo rm /etc/os-releases");
    system("sudo rm /etc/lsb-release");
    system("sudo mv lsb-release /etc/lsb-release");
    system("sudo mv os-release /etc/os-release");
    system("clear");
    system("sudo apt remove snap*");
    system("sudo apt install xfce4 && sudo apt remove gnome* --allow-remove-essential");
    system("neofetch");
}