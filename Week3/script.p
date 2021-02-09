set terminal png size 500,500
set output 'funcion.png'
set title 'Test'
set xlabel 'x'
set ylabel 'tan(x)'
plot "data.dat"
