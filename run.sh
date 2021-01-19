#!/bin/bash

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfurmane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/30 19:05:26 by vfurmane          #+#    #+#              #
#    Updated: 2020/12/30 19:05:28 by vfurmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
# NC	\e[0m
# RED	\e[31m
# GREEN	\e[32m

# cd to the script's directory
cd "$(dirname "$0")"

# If OS is Linux-based
LINUX=0
# Do not compile libftprintf.a
NOCOMPILE=0

# Intro message
source scripts/intro.sh
# Message functions
source scripts/put.sh
# Parse arguments
source scripts/args.sh

# Find all test scripts
tests=$(find test/srcs/expected -name *_test.c -exec sh -c "basename {} | sed 's/_test.c$//'" \;)

# Compile libftprintf
if [ $NOCOMPILE -eq 0 ]
then
	info "Compiling libftprintf.a..."
	make ft_printf > /dev/null 2>&1 || error "Error when compiling libftprintf.a..."
fi

# Compile the tests
info "Compiling the tests..."
make all > /dev/null 2>&1 || error "Error when compiling the tests..."

# Create logs folder
mkdir -p logs/expected
mkdir -p logs/user

if [ $LINUX -eq 1 ]
then
	diff_opt="-I '^WPL - '"
else
	diff_opt=""
fi

for name in ${tests[@]}
do
	./outs/expected/$name\_test.out > logs/expected/$name\_test.c 2>&1
	./outs/user/$name\_test.out > logs/user/$name\_test.c 2>&1
	if [ $LINUX -eq 1 ]
	then
		diff -I "^WPL - " logs/expected/$name\_test.c logs/user/$name\_test.c
	else
		diff logs/expected/$name\_test.c logs/user/$name\_test.c
	fi
	if [ $? -eq 0 ]
	then
		printf "%-20s [\033[32mOK\033[0m]\n" $name
	else
		printf "%-20s [\033[31mKO\033[0m]\n" $name
	fi
done

if ([ "$OSTYPE" == "linux-gnu" ] || [ "$OSTYPE" == "cygwin" ]) && [ $LINUX -eq 0 ]
then
	warn "Your system seems to be Linux based. You should use '-l' flag so the tester can work correctly"
fi

make clean > /dev/null 2>&1
