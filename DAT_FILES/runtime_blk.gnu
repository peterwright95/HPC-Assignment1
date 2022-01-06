set terminal "jpeg"
set terminal png size 1024,768

set title "Block multiplication for different sizes of matrices and blocks"
set xlabel "Memory Usage (kbytes)"
set ylabel "Speed Mflop/s"
set output "blk_comparison.jpeg"
set key left bottom

plot "< awk '{print $1, $2}' 1.dat" with linespoints title "bs = 1",\
    "< awk '{print $1, $2}' 5.dat" with linespoints title "bs = 5",\
    "< awk '{print $1, $2}' 10.dat" with linespoints title "bs = 10",\
    "< awk '{print $1, $2}' 20.dat" with linespoints title "bs = 20",\
    "< awk '{print $1, $2}' 40.dat" with linespoints title "bs = 40",\
    "< awk '{print $1, $2}' 60.dat" with linespoints title "bs = 60",\
    "< awk '{print $1, $2}' 80.dat" with linespoints title "bs = 80",\
    "< awk '{print $1, $2}' 100.dat" with linespoints title "bs = 100",\