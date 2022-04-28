const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');

router.post('/',
  function(request, response) {
    if(request.body.KorttiNro && request.body.Tunnusluku){
      const KorttiNro = request.body.KorttiNro;
      const Tunnusluku = request.body.Tunnusluku;
        login.checkTunnusluku(KorttiNro, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(Tunnusluku,dbResult[0].Tunnusluku, function(err,compareResult) {
                if(compareResult) {
                  console.log("Onnistui");
                  response.send(true);
                }
                else {
                    console.log("Väärä tunnusluku");
                    response.send(false);
                }
              }
              );
            }
            else{
              console.log("Käyttäjää ei ole olemassa");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("KorttiNro tai Tunnusluku puuttuu");
      response.send(false);
    }
  }
);


}

module.exports=router;
