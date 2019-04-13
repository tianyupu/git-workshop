# Run this script from the root of the repository

curr_dir=$(basename $(pwd))
if [[ $curr_dir != "git-workshop" ]]; then
    echo "Please run this script from the root of the git-workshop repository. Exiting"
    exit 1
fi
content_path="src/slide-content.md"
rm -f $content_path
touch $content_path
ls -1 slides/actual-slides | xargs -I "{}" echo "![{}](img/{})" >> $content_path