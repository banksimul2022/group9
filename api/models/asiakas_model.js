const db = require('../database');

const asiakas = {
  getById: function(id, callback) {
    return db.query('select * from asiakas where id_asiakas=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from asiakas', callback);
  },
  add: function(asiakas, callback) {
    return db.query(
      'insert into asiakas (name,author,isbn) values(?,?,?)',
      [asiakas.name, asiakas.author, asiakas.isbn],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from asiakas where id_asiakas=?', [id], callback);
  },
  update: function(id, asiakas, callback) {
    return db.query(
      'update asiakas set name=?,author=?, isbn=? where id_asiakas=?',
      [asiakas.name, asiakas.author, asiakas.isbn, id],
      callback
    );
  }
};
module.exports = asiakas;
