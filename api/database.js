const mysql = require('mysql');
const connection = mysql.createPool({
  host: 'localhost',
  user: 'Toope',
  password: 'admin',
  database: 'atm'
});
module.exports = connection;
