# Redirect page in the server using puppet

package { 'nginx':
  ensure => installed,
  name   => 'nginx',
}

file { '/var/www/html/index.html':
  content => 'Holberton School',
}

file_line { 'Add redirection, 301':
  ensure => 'present',
  path   => '/etc/nginx/sites-enabled/default',
  after  => 'listen 80 default_server',
  line   => 'rewrite ^/redirect_me https://www.youtube.com/ permanent;',
}

service { 'nginx':
  ensure  => running,
  require => Package['nginx'],
}
