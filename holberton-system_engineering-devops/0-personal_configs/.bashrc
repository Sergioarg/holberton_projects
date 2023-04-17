# enable color support of ls and also add handy aliases
if [ -x /usr/bin/dircolors ]; then
    test -r ~/.dircolors && eval "$(dircolors -b ~/.dircolors)" || eval "$(dircolors -b)"
    alias ls='ls --color=auto'
    #alias dir='dir --color=auto'
    #alias vdir='vdir --color=auto'

    alias grep='grep --color=auto'
    alias fgrep='fgrep --color=auto'
    alias egrep='egrep --color=auto'
fi

# colored GCC warnings and errors
#export GCC_COLORS='error=01;31:warning=01;35:note=01;36:caret=01;32:locus=01:quote=01'

# some more ls aliases
alias ll='ls -alF'
alias la='ls -A'
alias l='ls -CF'

# Add an "alert" alias for long running commands.  Use like so:
#   sleep 10; alert
alias alert='notify-send --urgency=low -i "$([ $? = 0 ] && echo terminal || echo error)" "$(history|tail -n1|sed -e '\''s/^\s*[0-9]\+\s*//;s/[;&|]\s*alert$//'\'')"'

# Alias definitions.
# You may want to put all your additions into a separate file like
# ~/.bash_aliases, instead of adding them here directly.
# See /usr/share/doc/bash-doc/examples in the bash-doc package.

if [ -f ~/.bash_aliases ]; then
    . ~/.bash_aliases
fi

# enable programmable completion features (you don't need to enable
# this, if it's already enabled in /etc/bash.bashrc and /etc/profile
# sources /etc/bash.bashrc).
if ! shopt -oq posix; then
  if [ -f /usr/share/bash-completion/bash_completion ]; then
    . /usr/share/bash-completion/bash_completion
  elif [ -f /etc/bash_completion ]; then
    . /etc/bash_completion
  fi
fi

# Custom alias
alias c='clear && clear'
# Git alias
alias ga='git add'
alias gs='git status'
alias gc='git commit -m'
alias gp='git push'
alias gpl='git pull'
alias gcp='f(){ git commit -m "$1"; git push; unset -f f; }; f'
alias delcommit='git reset --hard HEAD~1 && git push origin HEAD --force'
alias gaa='f(){ git add .; git commit -m "$1"; git push; unset -f f; }; f'
alias del_branch='f(){ git branch -d "$1" && git push origin --delete "$1"; unset -f f; }; f'
alias rm_branch="git fetch -p && git branch -vv | grep 'origin/.*: gone]' | awk '{print $1}' | xargs git branch"
# Quick modification of bashrc file
alias ebashrc='code ~/.bashrc'
alias ubashrc='source ~/.bashrc'
# Style alias
# Compile and excecution alias
# Alias permission handling
# Django aliases
alias pm='python3 manage.py'
alias runserver='python3 manage.py runserver'
# Folder aliases
alias fr='export FLASK_APP=app && export FLASK_ENV=development && flask run'

# End custom alias

# tmux config
export TERM=xterm-256color
Green="\[\033[01;32m\]"
Blue="\[\033[01;34m\]"
Red="\[\033[01;31m\]"
Reset="\[\033[;00m\]"
Cyan="\[\033[01;36m\]"
Yellow="\e[93m"

# Functions
parse_git_branch() {
    git branch 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/⟶ \1/'
}

ExitStatus()
{
    if [[ $? == 0 ]]; then
        echo "$Cyan"
    else
        echo "$Red"
    fi
}

PS1="${Green}┌(${Blue}Sergio${Green})-[${Green}\W${Green}]${Reset} \$(parse_git_branch)${Green}\n└$(ExitStatus)\$ ${Reset}"

# Django functions

# init virtuel event
function startvenv(){
    source "$(find ${1-.} -path '*/bin/activate')" 2>/dev/null || { echo 'bin/acivate not found in a subdirectory'; return 1; }
}

function copy-wpwd(){
    echo -n "//wsl$/Ubuntu$PWD" | tr '/' \\\\ | clip.exe
}

[ -f ~/.fzf.bash ] && source ~/.fzf.bash
export PYTHONBREAKPOINT=ipdb.set_trace