# Login with the holberton user
exec { 'fix-for-holberton':
    command => 'sed -i "56,57d" /etc/security/limits.conf',
    path    => ['/bin', '/usr/bin']
}
