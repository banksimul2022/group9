const db = require('../database');

const tilitapahtumat = {
  getById: function(id, callback) {
    return db.query('select * from tilitapahtumat where id_Tilitapahtuma=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tilitapahtumat', callback);
  },
  add: function(tilitapahtumat, callback) {
    return db.query(
      'insert into tilitapahtumat (PvmAika,Tapahtuma,Summa,Tilinro) values(?,?,?,?)',
      [tilitapahtumat.PvmAika, tilitapahtumat.Tapahtuma, tilitapahtumat.Summa, tilitapahtumat.Tilinro],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tilitapahtumat where id_Tilitapahtuma=?', [id], callback);
  },
  update: function(id, tilitapahtumat, callback) {
    return db.query(
      'update tilitapahtumat set PvmAika=?,Tapahtuma=?,Summa=?,Tilinro=? where id_tilitapahtuma=?',
      [tilitapahtumat.PvmAika, tilitapahtumat.Tapahtuma, tilitapahtumat.Summa, tilitapahtumat.Tilinro, id],
      callback
    );
  }
};
module.exports = tilitapahtumat;
