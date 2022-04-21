const db = require('../database');

const asiakas_has_tili = {
  getById: function(id, callback) {
    return db.query('select * from asiakas_has_tili where idASiakas_has_tili=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from asiakas_has_tili', callback);
  },
  add: function(asiakas_has_tili, callback) {
    return db.query(
      'insert into asiakas_has_tili (tilinro) values(?)',
      [asiakas_has_tili.tilinro],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from asiakas_has_tili where idASiakas_has_tili=?', [id], callback);
  },
  update: function(id, asiakas_has_tili, callback) {
    return db.query(
      'update asiakas_has_tili set tilinro=? where idASiakas_has_tili=?',
      [asiakas_has_tili.tilinro, id],
      callback
    );
  }
};
module.exports = asiakas_has_tili;
