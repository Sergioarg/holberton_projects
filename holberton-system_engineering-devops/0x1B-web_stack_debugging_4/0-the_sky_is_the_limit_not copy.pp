# Fixing ApacheBench request
exec { 'fix-for-nginx':
    command => 'sed -i "s/15/4096/" /etc/default/nginx && sudo service nginx restart',
    path    => ['/bin', '/usr/bin']
}
