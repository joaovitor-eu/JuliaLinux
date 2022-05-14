#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    system("wget https://github.com/bedrocklinux/bedrocklinux-userland/releases/download/0.7.27/bedrock-linux-0.7.27-x86_64.sh");
    system("sudo sh ./bedrock-linux-0.7.27-x86_64.sh --hijack");
    system("sudo reboot");
}