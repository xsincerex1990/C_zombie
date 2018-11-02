LC_ALL=C; LANG=C; for f in *epson802.*; do timeout 3 convert -resize 2 "$f" /tmp/test.png; echo $f; done &> fuzzing.log
