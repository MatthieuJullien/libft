#!/bin/sh
make fclean 
make
make clean

if [ "$1" = 'pre' ]; then
	cat precorrection.script | ed libft_main.c
    echo "execution de precorrection.script"
fi

#gcc -Wall -Wextra -Werror -o correction.out libft_main.c -L..  -lft
gcc -Wall -Wextra -Werror -o correction_data.out libft_data_main.c -L.. -lft
#gcc -Wall -Wextra -Werror -o correction_data2.out libft_data_main2.c -L.. -lft
#./correction.out
echo
./correction_data.out
echo
#./correction_data2.out
echo
#rm correction.out
rm correction_data.out
#rm correction_data2.out
