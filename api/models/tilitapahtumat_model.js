const db = require('../database');

const tilitapahtumat = {
  getById: function(id, callback) {
    return db.query('select * from tilitapahtumat where id_tilitapahtumat=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tilitapahtumat', callback);
  },
  add: function(tilitapahtumat, callback) {
    return db.query(
      'insert into tilitapahtumat (name,author,isbn) values(?,?,?)',
      [tilitapahtumat.name, tilitapahtumat.author, tilitapahtumat.isbn],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tilitapahtumat where id_tilitapahtumat=?', [id], callback);
  },
  update: function(id, tilitapahtumat, callback) {
    return db.query(
      'update tilitapahtumat set name=?,author=?, isbn=? where id_tilitapahtumat=?',
      [tilitapahtumat.name, tilitapahtumat.author, tilitapahtumat.isbn, id],
      callback
    );
  }
};
module.exports = tilitapahtumat;
