const db = require('../database');

const kortti = {
  getById: function(id, callback) {
    return db.query('select * from kortti where Korttinro=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from kortti', callback);
  },
  add: function(kortti, callback) {
    return db.query(
      'insert into kortti (Tunnusluku,idAsiakas,Tili_Tilinro) values(?,?,?)',
      [kortti.Tunnusluku, kortti.idAsiakas, kortti.Tili_Tilinro],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from kortti where Korttinro=?', [id], callback);
  },
  update: function(id, kortti, callback) {
    return db.query(
      'update kortti set Tunnusluku=?,idAsiakas=?, Tili_Tilinro=? where Korttinro=?',
      [kortti.Tunnusluku, kortti.idAsiakas, kortti.Tili_Tilinro, id],
      callback
    );
  }
};
module.exports = kortti;
