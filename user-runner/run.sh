g++ correctcode.cpp -o correctcode
g++ usercode.cpp -o usercode
timeout 5s bash ./runcode.sh
if [ $? -eq 124 ]; then 
    echo "TLE" > verdict.txt
fi