#!/bin/sh
git rm Makefile
git rm -r ./includes/
git rm -r ./srcs_libft/
git rm -r ./srcs_libftprintf/
cp ~/Documents/15_04_2018/projet_ft_printf/libftprintf/Makefile ./
cp -r ~/Documents/15_04_2018/projet_ft_printf/libftprintf/includes/ ./
cp -r ~/Documents/15_04_2018/projet_ft_printf/libftprintf/srcs_libft/ ./
cp -r ~/Documents/15_04_2018/projet_ft_printf/libftprintf/srcs_libftprintf/ ./
git status
git add *
git status
git commit -m "Test de \"ft_printf\""
git status
git push
git status
