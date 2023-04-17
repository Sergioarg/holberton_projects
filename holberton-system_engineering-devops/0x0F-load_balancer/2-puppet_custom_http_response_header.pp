# Redirect page in the server using puppet
exce { 'update-nginx':
  command => '/usr/bin/apt-get update',
}

package { 'nginx':
  ensure  => installed,
  name    => 'nginx',
  require => Exce['update-nginx']
}

file { '/var/www/html/index.html':
  content => 'Holberton School',
  require => Package['nginx'],
}

file_line { 'Add redirection, 301':
  ensure => 'present',
  path   => '/etc/nginx/sites-enabled/default',
  after  => 'listen 80 default_server',
  line   => 'rewrite ^/redirect_me https://www.youtube.com/ permanent;',
  require => Package['nginx'],
}

service { 'nginx':
  ensure  => running,
  require => Package['nginx'],
}
