make
echo "Testing with no arguments..."
./replace

echo "\nTesting with a wrong path file..."
./replace wrong.txt hello yes

echo "\nTesting with an empty string..."
./replace TestFiles/he.txt He ""

echo "\nTesting with two empty string..."
./replace TestFiles/he.txt "" ""

echo "\nReplacing 'He' by 'She' in TestFiles/he.txt..."
./replace TestFiles/he.txt He She 

echo "\nReplacing 'He' by 'She' in TestFiles/he_line.txt..."
./replace TestFiles/he_line.txt He She 

echo "\nReplacing 'I' by 'I AM BORING' in TestFiles/boring.txt..."
./replace TestFiles/boring.txt "I" "I AM BORING"

echo "\nReplacing 'long' by 'short' in TestFiles/long.txt..."
./replace TestFiles/long.txt "long" "short"