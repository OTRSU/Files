wget http://mirrors.ustc.edu.cn/ubuntu/pool/universe/p/pacman-package-manager/pacman-package-manager_6.0.1-4_amd64.deb
wget http://mirrors.ustc.edu.cn/ubuntu/pool/universe/p/pacman-package-manager/makepkg_6.0.1-4_amd64.deb
wget http://mirrors.ustc.edu.cn/ubuntu/pool/universe/p/pacman-package-manager/libalpm-dev_13.0.2-3_amd64.deb
wget http://mirrors.ustc.edu.cn/ubuntu/pool/universe/p/pacman-package-manager/libalpm13_6.0.1-4_amd64.deb
dpkg -i pacman-package-manager_6.0.1-4_amd64.deb
dpkg -i makepkg_6.0.1-4_amd64.deb
dpkg -i libalpm-dev_13.0.2-3_amd64.deb
dpkg -i libalpm13_6.0.1-4_amd64.deb
wget https://raw.githubusercontent.com/OTRSU/Files/main/makepkg.conf 
mv makepkg.conf /etc/makepkg.conf
wget https://raw.githubusercontent.com/OTRSU/Files/main/pacman.conf 
mv pacman.conf /etc/pacman.conf
wget https://raw.githubusercontent.com/OTRSU/Files/main/mirrorlist
mv mirrorlist /etc/mirrorlist
pacman -Sy