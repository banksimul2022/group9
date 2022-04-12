const db = require('../database');

const tili = {
  getById: function(id, callback) {
    return db.query('select * from tili where id_tili=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tili', callback);
  },
  add: function(tili, callback) {
    return db.query(
      'insert into tili (name,author,isbn) values(?,?,?)',
      [tili.name, tili.author, tili.isbn],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tili where id_tili=?', [id], callback);
  },
  update: function(id, tili, callback) {
    return db.query(
      'update tili set name=?,author=?, isbn=? where id_tili=?',
      [tili.name, tili.author, tili.isbn, id],
      callback
    );
  }
};
module.exports = tili;
