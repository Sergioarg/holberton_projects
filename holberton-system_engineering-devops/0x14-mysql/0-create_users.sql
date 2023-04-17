-- Create user: replica_user.
CREATE USER 'replica_user'@'%' IDENTIFIED BY 'password';
GRANT REPLICATION SLAVE ON *.* TO 'replica_user'@'%';

-- Create user: holberton_user.
CREATE USER 'holberton_user'@'host' IDENTIFIED BY 'password';
GRANT REPLICATION CLIENT ON *.* to 'holberton_user'@host;
GRANT SELECT ON mysql.user TO 'holberton_user'@'host';

-- Create database.
CREATE DATABASE `db_name` USE `db_name`
CREATE TABLE table_name (
    id int,
    `name` varchar(255)
);


CHANGE MASTER TO MASTER_HOST='54.81.23.89', MASTER_USER='replica_user', MASTER_PASSWORD='projectcorrection280hbtn',MASTER_LOG_FILE='mysql-bin.000064', MASTER_LOG_POS=154;
