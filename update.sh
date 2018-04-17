#!/bin/sh
git rm Makefile
git rm -r ./includes
git rm -r ./srcs_libft
git rm -r ./srcs_libftprintf
cp ~/Documents/15_04_2018/projet_ft_printf/libftprintf/Makefile ./
cp -r ~/Documents/15_04_2018/projet_ft_printf/libftprintf/includes ./
cp -r ~/Documents/15_04_2018/projet_ft_printf/libftprintf/srcs_libft ./
cp -r ~/Documents/15_04_2018/projet_ft_printf/libftprintf/srcs_libftprintf ./
@echo '\033[36m_____\033[00m'
git status
git add *
@echo '\033[36m_____\033[00m'
git status
git commit -m "Test de \"ft_printf\""
@echo '\033[36m_____\033[00m'
git status
git push
@echo '\033[36m_____\033[00m'
git status
