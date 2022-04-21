const mysql = require('mysql');
const connection = mysql.createPool({
  host: '127.0.0.1',
  user: 'Toope',
  password: 'admin',
  database: 'atm'
});
module.exports = connection;
