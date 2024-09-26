echo -n b && echo -n r || echo -n c && (echo -n a || ( echo -n e || (echo -n f && (echo -n g))) || echo -n h ) && echo -n v || (echo -n j && (echo -n k || echo -n l)) && echo o)
[13:21]
<<EOF | rev
cat <<EOF | rev
---------
mkdir essai
cd essai $$ pwd
rm -r ../essai
pwd
cd .. && pwd
----------
ctrl C dans sleep
ctrl C dans cat
ctrl C dans double heredoc
ctrl D dans double heredoc 
ctrl \ dans sleep (modifié)
