const db = require('../database');

const asiakas_has_tili = {
  getById: function(id, callback) {
    return db.query('select * from asiakas_has_tili where id_asiakas_has_tili=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from asiakas_has_tili', callback);
  },
  add: function(asiakas_has_tili, callback) {
    return db.query(
      'insert into asiakas_has_tili (name,author,isbn) values(?,?,?)',
      [asiakas_has_tili.name, asiakas_has_tili.author, asiakas_has_tili.isbn],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from asiakas_has_tili where id_asiakas_has_tili=?', [id], callback);
  },
  update: function(id, asiakas_has_tili, callback) {
    return db.query(
      'update asiakas_has_tili set name=?,author=?, isbn=? where id_asiakas_has_tili=?',
      [asiakas_has_tili.name, asiakas_has_tili.author, asiakas_has_tili.isbn, id],
      callback
    );
  }
};
module.exports = asiakas_has_tili;
