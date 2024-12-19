git lfs ls-files -n
edit .gitattributes
git commit
git push
git lfs ls-files -n | xargs -L 1 git rm --cached
git add .
git commit
