#!/usr/bin/node
module.exports = class Square extends require('./5-square') {
  charPrint (c) {
    for (let i = 0; i < this.height; i++) {
      const row = [];
      for (let j = 0; j < this.width; j++) {
        if (typeof c === 'undefined') {
          row.push('X');
        } else {
          row.push(c);
        }
      }
      console.log(row.join(''));
    }
  }
};
