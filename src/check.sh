#!/bin/bash

if [ -n "$1" ]
then
	dir=`pwd`
    if [ -f "$dir/$1" ]
    then
        cp ../linters/CPPLINT.cfg $dir
        echo " "
        echo " "
        echo ==================================================
        echo ------------------! TEST START !-------------------
        echo ==================================================
        echo " "
        python3 ../linters/cpplint.py --extensions=c $1
        echo " "
        echo " "
        echo ==================== CPP_LINT ====================
        echo " "
        echo " "
        cppcheck --enable=all --suppress=missingIncludeSystem $1
        echo ==================== CPP_CHECK ====================
        echo " "
        echo " "
        gcc -Wall -Werror -Wextra $1 -o ./a.out
        echo " "
        echo " "
        echo ====================== GCC =======================
        echo " "
        echo " "
        echo ==================================================
        echo -------------------! TEST END !------------------- 
        echo ==================================================
        echo " "
        echo " "
        rm CPPLINT.cfg 
    else
        echo " "
        echo " "
        echo "!!!ERROR!!! ---->   USE ./check.sh FILE_NAME.c   <---- !!!ERROR!!!"
        echo " "
        echo " "
        
    fi
else
echo " "
echo " "
echo "!!!ERROR!!! ---->   USE ./check.sh FILE_NAME.c   <---- !!!ERROR!!!"
echo " "
echo " " 
fi