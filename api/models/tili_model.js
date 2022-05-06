const db = require('../database');

const tili = {
  getById: function(id, callback) {
    return db.query('select * from tili where Tilinro=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tili', callback);
  },
  add: function(tili, callback) {
    return db.query(
      'insert into tili (Saldo) values(?)',
      [tili.Saldo],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tili where Tilinro=?', [id], callback);
  },
  update: function(id, tili, callback) {
    return db.query(
      'update tili set Saldo= Saldo +? where Tilinro=?',
      [tili.Saldo, id],
      callback
    );
  }
};
module.exports = tili;
