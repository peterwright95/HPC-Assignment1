set terminal "jpeg"
set terminal png size 1024,768

set title "Comparison of different n k m orders"
set xlabel "Memory Usage (kbytes)"
set ylabel "Speed Mflop/s"
set output "m_k_n_comparison.jpeg"
set key left bottom

plot "< awk '{print $1, $2}' knm.dat" with linespoints title "knm",\
    "< awk '{print $1, $2}' kmn.dat" with linespoints title "kmn",\
    "< awk '{print $1, $2}' nkm.dat" with linespoints title "nkm",\
    "< awk '{print $1, $2}' nmk.dat" with linespoints title "nmk",\
    "< awk '{print $1, $2}' mnk.dat" with linespoints title "mnk",\
    "< awk '{print $1, $2}' mkn.dat" with linespoints title "mkn",\