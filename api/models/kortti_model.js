const db = require('../database');

const kortti = {
  getById: function(id, callback) {
    return db.query('select * from kortti where id_kortti=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from kortti', callback);
  },
  add: function(kortti, callback) {
    return db.query(
      'insert into kortti (name,author,isbn) values(?,?,?)',
      [kortti.name, kortti.author, kortti.isbn],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from kortti where id_kortti=?', [id], callback);
  },
  update: function(id, kortti, callback) {
    return db.query(
      'update kortti set name=?,author=?, isbn=? where id_kortti=?',
      [kortti.name, kortti.author, kortti.isbn, id],
      callback
    );
  }
};
module.exports = kortti;
