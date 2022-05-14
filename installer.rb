system"clear"

puts()
print"[ 1 ] - Install Pre-Install"
print"[ 2 ] - Install Pre-Install2"
puts()
print"> "
session = gets.chomp.to_i
    if session == 1
        system"./pre-install"
        system"clear"
    end
    if session == 2
        system"./pre-install2"
        system"clear"
    end