export LS_OPTIONS='--color=auto'
export GEM_HOME=/usr/local/bundle
export PATH=/usr/local/bundle/bin:/usr/local/bundle/gems/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
eval "`dircolors`"
alias ls='ls $LS_OPTIONS'
alias ll='ls $LS_OPTIONS -l'
alias l='ls $LS_OPTIONS -lA'
alias basecamp='bash ${HOME}/.basecamp/basecamp'

export http_proxy=10.3.24.01:3128
export https_proxy=10.3.24.01:3128

alias c="gcc rush02.c ft_putchar.c main.c && ./a.out"