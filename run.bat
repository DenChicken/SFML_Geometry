
git pull
git submodule update --init --recursive

cmake -S . -B out\build
cmake --build out\build -t SFML_Geometry -j4
out\build\Debug\SFML_Geometry.exe