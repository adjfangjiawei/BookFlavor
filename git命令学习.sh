git filter-branch --force --index-filter \
  "git rm --cached --ignore-unmatch PATH-TO-YOUR-FILE-WITH-EXT" \
  --prune-empty --tag-name-filter cat -- --all
git push origin --force --all
git push origin --force --tags
git for-each-ref --format='delete %(refname)' refs/original | git update-ref --stdin
git reflog expire --expire=now --all
git gc --prune=now
GRANT ALL PRIVILEGES ON *.* TO 'username'@'%';  //@后面是能够访问的主机名，%表示任意主机
FLUSH PRIVILEGES; //刷新权限