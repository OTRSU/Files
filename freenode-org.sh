mv -f node.yaml node-backup.yaml
timedatectl set-timezone Asia/Shanghai
wget https://nodefree.org/dy/$(date +"%Y/%m/%Y%m%d").yaml -O node.yaml
