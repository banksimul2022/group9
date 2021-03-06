var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
var app = express();

const helmet = require('helmet');
const cors = require('cors');
// const basicAuth = require('express-basic-auth');
const asiakasRouter = require('./routes/asiakas');
const tiliRouter = require('./routes/tili');
const korttiRouter = require('./routes/kortti');
const asiakas_has_tiliRouter = require('./routes/asiakas_has_tili');
const tilitapahtumatRouter = require('./routes/tilitapahtumat');
// const userRouter = require('./routes/user');

app.use(helmet());
app.use(cors());
app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));
// app.use(basicAuth({users: { 'Toope': 'admin' }}))
app.use('/asiakas', asiakasRouter);
app.use('/tili', tiliRouter);
app.use('/kortti', korttiRouter);
app.use('/asiakas_has_tili', asiakas_has_tiliRouter);
app.use('/tilitapahtumat', tilitapahtumatRouter);


module.exports = app;
