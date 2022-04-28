const db = require('../database');

const login={
  checkPassword: function(username, callback) {
      return db.query('SELECT Tunnusluku FROM Kortti WHERE username = ?',[username], callback);
    }
};

module.exports = login;
